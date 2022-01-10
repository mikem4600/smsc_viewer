/*
* ============================================================================
*  Name     : CSmscView2 from SmscView2.h
*  Part of  : Smsc
*  Created  : 30/7/2003 by Makidis Michael
*  Description:
*     Declares view for application.
*  Copyright: Makidis Michael 2003-2004
* ============================================================================
*/

#ifndef SMSCVIEW2_H
#define SMSCVIEW2_H

// INCLUDES
#include <aknview.h>


// CONSTANTS
// UID of view
const TUid KView2Id = {2};

// FORWARD DECLARATIONS
class CSmscContainer2;

// CLASS DECLARATION

/**
*  CSmscView2 view class.
* 
*/
class CSmscView2 : public CAknView
    {
    public: // Constructors and destructor

        /**
        * EPOC default constructor.
        */
        void ConstructL();

        /**
        * Destructor.
        */
        ~CSmscView2();

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
        CSmscContainer2* iContainer;
    };

#endif

// End of File
