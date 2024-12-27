//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/JSExport-Protocol.h>

@class NSArray, VFXPhysicsBody;

@protocol VFXPhysicsBallSocketJointJSExport <JSExport>
+ (id)ballSocketWithBody:(VFXPhysicsBody *)arg1 anchor:(NSArray *)arg2;
+ (id)ballSocketWithBodyA:(VFXPhysicsBody *)arg1 anchorA:(NSArray *)arg2 bodyB:(VFXPhysicsBody *)arg3 anchorB:(NSArray *)arg4;
@property(retain, nonatomic) NSArray *anchorB;
@property(readonly, nonatomic) VFXPhysicsBody *bodyB;
@property(retain, nonatomic) NSArray *anchorA;
@property(readonly, nonatomic) VFXPhysicsBody *bodyA;
@end

