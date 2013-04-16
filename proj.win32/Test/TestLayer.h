#ifndef	__TEST_LAYER_H__
#define	__TEST_LAYER_H__

#include "cocos2d.h"
#include "../../extensions/cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class TestLayer : public CCLayer, public CCBSelectorResolver
{
	virtual bool init();
	virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector( CCObject *pTarget, const char* pSelectorName );
    virtual SEL_CCControlHandler onResolveCCBCCControlSelector( CCObject *pTarget, const char* pSelectorName );

	void buttonClicked( CCObject *pSender, CCControlEvent pCCControlEvent );
public:
    CREATE_FUNC( TestLayer );
};

class TestLayerBuilderLoader : public CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD( TestLayerBuilderLoader, loader );
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD( TestLayer );
};

#endif	/*__TEST_LAYER_H__*/