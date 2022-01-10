/*
* ============================================================================
*  Name     : CSmscContainer2 from SmscContainer2.h
*  Part of  : Smsc
*  Created  : 30/7/2003 by Makidis Michael
*  Description:
*     Declares container control for application.
*  Copyright: Makidis Michael 2003-2004
* ============================================================================
*/

#ifndef SMSCCONTAINER2_H
#define SMSCCONTAINER2_H

// INCLUDES
#include <coecntrl.h>
 
// FORWARD DECLARATIONS
class CEikEdwin;

// CLASS DECLARATION

/**
*  CSmscContainer2  container control class.
*  
*/
class CSmscContainer2 : public CCoeControl, MCoeControlObserver
    {
    public: // Constructors and destructor
        
        /**
        * EPOC default constructor.
        * @param aRect Frame rectangle for container.
        */
        void ConstructL(const TRect& aRect);

        /**
        * Destructor.
        */
        ~CSmscContainer2();

    public: // New functions

    public: // Functions from base classes

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
         * From CCoeControl, Handles key event.
         * @param aKeyEvent The key event.
         * @param aType The type of the event.
         * @return Indicates whether or not the key event was
         *           used by this control.
         */
         TKeyResponse OfferKeyEventL(const TKeyEvent& aKeyEvent,
                                    TEventCode aType);

       /**
        * From ?base_class ?member_description
        */
        // event handling section
        // e.g Listbox events
        void HandleControlEventL(CCoeControl* aControl,TCoeEvent aEventType);
        
    private: //data
        CEikEdwin*              iEdwin;
    };

#endif

// End of File
