#ifndef	__TEST_SCENE_H__
#define __TEST_SCENE_H__

#include "cocos2d.h"
#include "../../extensions/cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class TestScene : public CCScene
{
public:
	TestScene();
	virtual ~TestScene();

	virtual bool init();

	virtual void onEnter();
	virtual void onExit();

	virtual void update( float delta );

	CREATE_FUNC( TestScene );

private:
	CCBReader* ccbReader;

	CCBAnimationManager* ccbAnimationManager;
};

#endif	/*__TEST_SCENE_H__*/