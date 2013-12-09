//
//  Ship.h
//  philosopher-king
//
//  Created by Jacob Maskiewicz on 12/8/13.
//  Copyright (c) 2013 Jacob Maskiewicz. All rights reserved.
//

#pragma once

#include "Vector4.h"

class Ship {
private:
    static const float SPEED;
    Vector4 position;
	Vector4 rotate;
	float angle;
public:
    
    Ship();
    
    void update(float, float, float);
    void render();
    
    Vector4 getPosition();
};