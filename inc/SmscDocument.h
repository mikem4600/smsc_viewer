/*
* ============================================================================
*  Name     : CSmscDocument from SmscDocument.h
*  Part of  : Smsc
*  Created  : 30/7/2003 by Makidis Michael
*  Description:
*     Declares document for application (just a placeholder).
*  Copyright: Makidis Michael 2003-2004
* ============================================================================
*/

#ifndef SMSCDOCUMENT_H
#define SMSCDOCUMENT_H

// INCLUDES
#include <akndoc.h>
   
// CONSTANTS

// FORWARD DECLARATIONS
class  CEikAppUi;

// CLASS DECLARATION

/**
*  CSmscDocument application class.
*/
class CSmscDocument : public CAknDocument
    {
    public: // Constructors and destructor
        /**
        * Two-phased constructor.
        */
        static CSmscDocument* NewL(CEikApplication& aApp);

        /**
        * Destructor.
        */
        virtual ~CSmscDocument();

    public: // New functions

    protected:  // New functions

    protected:  // Functions from base classes

    private:

        /**
        * EPOC default constructor.
        */
        CSmscDocument(CEikApplication& aApp);
        void ConstructL();

    private:

        /**
        * From CEikDocument, create CSmscAppUi "App UI" object.
        */
        CEikAppUi* CreateAppUiL();
    };

#endif

// End of File

