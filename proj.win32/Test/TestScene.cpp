#include "TestScene.h"

TestScene::TestScene()
{
	
}

TestScene::~TestScene()
{
	
}

bool TestScene::init()
{
	if( CCScene::init() )
	{
		CCSprite* sprite = CCSprite::create( "farm.jpg" );
		sprite->setPositionX( 240.0f + 80.0f );
		sprite->setPositionY( 160.0f );
		this->addChild( sprite );

		return true;
	}

	return false;
}

void TestScene::onEnter()
{
	CCScene::onEnter();
	this->scheduleUpdate();		
}

void TestScene::onExit()
{
	CCScene::onExit();
}

void TestScene::update( float delta )
{
}

CCScene *TestScene::create()
{
    CCScene *pRet = new TestScene();
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
}