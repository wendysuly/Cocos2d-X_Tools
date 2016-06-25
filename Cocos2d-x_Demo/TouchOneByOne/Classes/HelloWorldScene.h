#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
	cocos2d::Sprite *myCard[5];
	int selectedId;
    static cocos2d::Scene* createScene();
    virtual bool init();  
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
