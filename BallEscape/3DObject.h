//
//  3DObject.h
//  BallEscape
//
//  Created by Alberto Salido López on 04/11/12.
//  Copyright (c) 2012 Alberto Salido López. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UtilityModel.h"

@interface threeDObject : NSObject

//  Object's model.
@property (nonatomic, readonly, strong) UtilityModel *model;

//  Obejct's position.
@property (readonly) GLKVector3 position;

- (id)initWithModel:(UtilityModel *)model position:(GLKVector3)position;

@end


//  Protocol for drawing the scene using a base effect.
@protocol abstractDraw <NSObject>

- (void)drawWithBaseEffect:(GLKBaseEffect *)baseEffect;

@end