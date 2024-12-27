//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNPhysicsBody;

@protocol SCNPhysicsHingeJointJSExport <JSExport>
+ (id)jointWithBody:(SCNPhysicsBody *)arg1 axis:(struct SCNVector3)arg2 anchor:(struct SCNVector3)arg3;
+ (id)jointWithBodyA:(SCNPhysicsBody *)arg1 axisA:(struct SCNVector3)arg2 anchorA:(struct SCNVector3)arg3 bodyB:(SCNPhysicsBody *)arg4 axisB:(struct SCNVector3)arg5 anchorB:(struct SCNVector3)arg6;
@property(nonatomic) struct SCNVector3 anchorB;
@property(nonatomic) struct SCNVector3 axisB;
@property(readonly, nonatomic) SCNPhysicsBody *bodyB;
@property(nonatomic) struct SCNVector3 anchorA;
@property(nonatomic) struct SCNVector3 axisA;
@property(readonly, nonatomic) SCNPhysicsBody *bodyA;
@end

