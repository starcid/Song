#ifndef	__TEST_SCENE_H__
#define __TEST_SCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class TestScene : public CCScene
{
public:
	TestScene();
	virtual ~TestScene();

	virtual bool init();

	virtual void onEnter();
	virtual void onExit();

	virtual void update( float delta );

	static CCScene* create();
};

#endif	/*__TEST_SCENE_H__*/