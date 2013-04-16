#include "TestScene.h"
#include "TestLayer.h"

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

	CCNodeLoaderLibrary *ll = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
	ll->registerCCNodeLoader( "TestLayer", TestLayerBuilderLoader::loader() );

	ccbReader = new CCBReader( ll );

	CCNode* ccbLayer = ccbReader->readNodeGraphFromFile( "TestLayer.ccbi", this );

	this->addChild( ccbLayer );

	ccbAnimationManager = ccbReader->getAnimationManager();
	ccbAnimationManager->retain();

	ccbReader->release();

	this->scheduleUpdate();		
}

void TestScene::onExit()
{
	ccbAnimationManager->release();
	CCScene::onExit();
}

void TestScene::update( float delta )
{
}