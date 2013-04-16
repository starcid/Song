#include "TestLayer.h"

bool TestLayer::init()
{
	if( CCLayer::init() )
	{
		return true;
	}

	return false;
}

SEL_MenuHandler TestLayer::onResolveCCBCCMenuItemSelector( CCObject *pTarget, const char* pSelectorName )
{
	 ///CCB_SELECTORRESOLVER_CCMENUITEM_GLUE( this, "buttonClicked:", TestLayer::buttonClicked );
    
    return NULL;
}

SEL_CCControlHandler TestLayer::onResolveCCBCCControlSelector( CCObject *pTarget, const char* pSelectorName )
{
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE( this, "buttonClicked:", TestLayer::buttonClicked );
    
    return NULL;
}

void TestLayer::buttonClicked( CCObject *pSender, CCControlEvent pCCControlEvent )
{
	CCLOG( "button clicked" );
}