/*
* ============================================================================
*  Name     : CSmscApp from SmscApp.h
*  Part of  : Smsc
*  Created  : 30/7/2003 by Makidis Michael
*  Description:
*     Declares main application class.
*  Copyright: Makidis Michael 2003-2004
* ============================================================================
*/

#ifndef SMSCAPP_H
#define SMSCAPP_H

// INCLUDES
#include <aknapp.h>

// CONSTANTS
// UID of the application
const TUid KUidSmsc = { 0x0C253ABB }; // please request a UID from Symbian

// CLASS DECLARATION

/**
* CSmscApp application class.
* Provides factory to create concrete document object.
* 
*/
class CSmscApp : public CAknApplication
    {
    
    public: // Functions from base classes
    private:

        /**
        * From CApaApplication, creates CSmscDocument document object.
        * @return A pointer to the created document object.
        */
        CApaDocument* CreateDocumentL();
        
        /**
        * From CApaApplication, returns application's UID (KUidSmsc).
        * @return The value of KUidSmsc.
        */
        TUid AppDllUid() const;
    };

#endif

// End of File

