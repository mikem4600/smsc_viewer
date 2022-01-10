/*
* ============================================================================
*  Name     : CSmscView from SmscView.h
*  Part of  : Smsc
*  Created  : 30/7/2003 by Makidis Michael
*  Description:
*     Declares view for application.
*  Copyright: Makidis Michael 2003-2004
* ============================================================================
*/

#ifndef SMSCVIEW_H
#define SMSCVIEW_H

// INCLUDES
#include <aknview.h>


// CONSTANTS
// UID of view
const TUid KViewId = {1};

// FORWARD DECLARATIONS
class CSmscContainer;

// CLASS DECLARATION

/**
*  CSmscView view class.
* 
*/
class CSmscView : public CAknView
    {
    public: // Constructors and destructor

        /**
        * EPOC default constructor.
        */
        void ConstructL();

        /**
        * Destructor.
        */
        ~CSmscView();

    public: // Functions from base classes
        
        /**
        * From ?base_class ?member_description
        */
        TUid Id() const;

        /**
        * From ?base_class ?member_description
        */
        void HandleCommandL(TInt aCommand);

        /**
        * From ?base_class ?member_description
        */
        void HandleClientRectChange();

    private:

        /**
        * From AknView, ?member_description
        */
        void DoActivateL(const TVwsViewId& aPrevViewId,TUid aCustomMessageId,
            const TDesC8& aCustomMessage);

        /**
        * From AknView, ?member_description
        */
        void DoDeactivate();

    private: // Data
        CSmscContainer* iContainer;
    };

#endif

// End of File
