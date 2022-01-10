/*
* ============================================================================
*  Name     : CSmscView from SmscView.h
*  Part of  : Smsc
*  Created  : 30/7/2003 by Makidis Michael
*  Implementation notes:
*     Initial content was generated by Series 60 AppWizard.
*  Copyright: Makidis Michael 2003-2004
* ============================================================================
*/

// INCLUDE FILES
#include  "SmscView.h"
#include  "SmscContainer.h"
#include  <Smsc.rsg>
#include  <aknviewappui.h>
#include  <avkon.hrh>


// ================= MEMBER FUNCTIONS =======================

// ---------------------------------------------------------
// CSmscView::ConstructL(const TRect& aRect)
// EPOC two-phased constructor
// ---------------------------------------------------------
//
void CSmscView::ConstructL()
    {
    BaseConstructL( R_SMSC_VIEW1 );
    }

// ---------------------------------------------------------
// CSmscView::~CSmscView()
// ?implementation_description
// ---------------------------------------------------------
//
CSmscView::~CSmscView()
    {
    if ( iContainer )
        {
        AppUi()->RemoveFromViewStack( *this, iContainer );
        }

    delete iContainer;
    }

// ---------------------------------------------------------
// TUid CSmscView::Id()
// ?implementation_description
// ---------------------------------------------------------
//
TUid CSmscView::Id() const
    {
    return KViewId;
    }

// ---------------------------------------------------------
// CSmscView::HandleCommandL(TInt aCommand)
// ?implementation_description
// ---------------------------------------------------------
//
void CSmscView::HandleCommandL(TInt aCommand)
    {
	    switch ( aCommand )
        {
		case RefreshGrid:
			iContainer->RefreshListL();
			break;
        case ClearGrid:
            iContainer->ClearListL();
            break;
        case ShowDetails:
            {
            iContainer->ShowDetailsL();
            break;
            }
        default:
			AppUi()->HandleCommandL( aCommand );
            break;      
        }
    }

// ---------------------------------------------------------
// CSmscView::HandleClientRectChange()
// ---------------------------------------------------------
//
void CSmscView::HandleClientRectChange()
    {
    if ( iContainer )
        {
        iContainer->SetRect( ClientRect() );
        }
    }

// ---------------------------------------------------------
// CSmscView::DoActivateL(...)
// ?implementation_description
// ---------------------------------------------------------
//
void CSmscView::DoActivateL(
   const TVwsViewId& /*aPrevViewId*/,TUid /*aCustomMessageId*/,
   const TDesC8& /*aCustomMessage*/)
    {
    if (!iContainer)
        {
        iContainer = new (ELeave) CSmscContainer(this);
        iContainer->SetMopParent(this);
        iContainer->ConstructL( ClientRect() );
        AppUi()->AddToStackL( *this, iContainer );
        } 
   }

// ---------------------------------------------------------
// CSmscView::HandleCommandL(TInt aCommand)
// ?implementation_description
// ---------------------------------------------------------
//
void CSmscView::DoDeactivate()
    {
    if ( iContainer )
        {
        AppUi()->RemoveFromViewStack( *this, iContainer );
        }
    
    delete iContainer;
    iContainer = NULL;
    }

// End of File
