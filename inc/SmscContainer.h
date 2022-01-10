/*
* ============================================================================
*  Name     : CSmscContainer from SmscContainer.h
*  Part of  : Smsc
*  Created  : 30/7/2003 by Makidis Michael
*  Description:
*     Declares container control for application.
*  Copyright: Makidis Michael 2003-2004
* ============================================================================
*/

#ifndef SMSCCONTAINER_H
#define SMSCCONTAINER_H

// INCLUDES
#include "SmscView.h"
#include "Smsc.hrh"
#include <aknlists.h> // for the listbox

// SMS manupilation
#include <smsclnt.h>
#include <msvids.h>
#include <smut.h>
#include <mtclreg.h>
#include <smuthdr.h>


// CLASS DECLARATION

/**
*  CSmscContainer  container control class.
*  
*/
class CSmscContainer : public CCoeControl,
		MCoeControlObserver,
		public MEikListBoxObserver,
		MMsvSessionObserver
    {
    public: // Constructors and destructor

		CSmscContainer ( CSmscView* aView);
        
        /**
        * EPOC default constructor.
        * @param aRect Frame rectangle for container.
        */
        void ConstructL(const TRect& aRect);

        /**
        * Destructor.
        */
        ~CSmscContainer();

    public: // New functions

    public: // Functions from base classes

		/**
        * From CoeControl, OfferKeyEventL.
        * Handles the key-events.
        * @return If key-event is consumed, EKeyWasConsumed. Else
        * EKeyWasNotConsumed.
        * @param aKeyEvent Key event.
        * @param aType Type of key event(EEventKey, EEventKeyUp or
        * EEventKeyDown).
        */
        TKeyResponse OfferKeyEventL(
            const TKeyEvent& aKeyEvent,
            TEventCode aType );

		void RefreshListL(TBool aRedrawOnceOnly = EFalse);

		void ClearListL(TBool aRedraw = ETrue);

		void ShowDetailsL();

    private: // Functions from base classes

       /**
        * From CoeControl,SizeChanged.
        */
        void SizeChanged();

       /**
        * From CoeControl,CountComponentControls.
        */
        TInt CountComponentControls() const;

       /**
        * From CCoeControl,ComponentControl.
        */
        CCoeControl* ComponentControl(TInt aIndex) const;

       /**
        * From CCoeControl,Draw.
        */
        void Draw(const TRect& aRect) const;

       /**
        * From ?base_class ?member_description
        */
        // event handling section
        // e.g Listbox events
        void HandleControlEventL(CCoeControl* aControl,TCoeEvent aEventType);

		void HandleListBoxEventL(CEikListBox* /*aListBox*/, TListBoxEvent /*aEventType*/){};
        
    private: //data
		CAknDoubleStyleListBox* iListBox;
		CSmscView* iView;
		CDesCArray* iTextArray;
		CArrayFixSeg<TMsvId>* iMsvidArray;

		CMsvSession* iMsvSession;       // Client session on the message server
		CSmsClientMtm* iSmsMtm;         // Message Type Module (MMS)
		CClientMtmRegistry* iMtmReg;    // Mtm client registry for creating new mtms
    protected:
		virtual void HandleSessionEventL
			(TMsvSessionEvent aEvent, TAny* aArg1, TAny* aArg2, TAny* aArg3);

		// [ Obsolete ]
		virtual void HandleSessionEvent
			(TMsvSessionEvent /*aEvent*/, TAny* /*aArg1*/, TAny* /*aArg2*/, TAny* /*aArg3*/)
			{}
    };

#endif

// End of File
