//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNPhysicsBody;

@protocol SCNPhysicsBallSocketJointJSExport <JSExport>
+ (id)jointWithBody:(SCNPhysicsBody *)arg1 anchor:(struct SCNVector3)arg2;
+ (id)jointWithBodyA:(SCNPhysicsBody *)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(SCNPhysicsBody *)arg3 anchorB:(struct SCNVector3)arg4;
@property(nonatomic) struct SCNVector3 anchorB;
@property(readonly, nonatomic) SCNPhysicsBody *bodyB;
@property(nonatomic) struct SCNVector3 anchorA;
@property(readonly, nonatomic) SCNPhysicsBody *bodyA;
@end

