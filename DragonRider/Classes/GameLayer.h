//
//  GameLayer.h
//  DragonRider
//
//  Created by 양원석 on 4/11/13.
//
//

#ifndef __DragonRider__GameLayer__
#define __DragonRider__GameLayer__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;


class GameLayer : public cocos2d::CCLayer
{
public:
    // Method 'init' in cocos2d-x returns bool, instead of 'id' in cocos2d-iphone (an object pointer)
    virtual bool init();
    
    // there's no 'id' in cpp, so we recommend to return the class instance pointer
    static cocos2d::CCScene* scene();
    
    // preprocessor macro for "static create()" constructor ( node() deprecated )
    CREATE_FUNC(GameLayer);
    
    virtual void update(float delta);
    virtual void onEnter();

    //변수와 매서드 선언은 여기에
    
    CCSize winSize;
    
    CCSprite *backgroundImage1;
    CCSprite *backgroundImage2;
    
    CCSprite *player;
    
    void initBackground();

    void initPlayer();
    
};


#endif /* defined(__DragonRider__GameLayer__) */
