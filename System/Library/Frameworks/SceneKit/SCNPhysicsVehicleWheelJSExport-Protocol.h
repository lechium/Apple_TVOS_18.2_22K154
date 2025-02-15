//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNNode;

@protocol SCNPhysicsVehicleWheelJSExport <JSExport>
+ (id)wheelWithNode:(SCNNode *)arg1;
@property double suspensionRestLength;
@property double radius;
@property struct SCNVector3 axle;
@property struct SCNVector3 steeringAxis;
@property struct SCNVector3 connectionPosition;
@property double maximumSuspensionForce;
@property double frictionSlip;
@property double maximumSuspensionTravel;
@property double suspensionDamping;
@property double suspensionCompression;
@property double suspensionStiffness;
@property(readonly) SCNNode *node;
- (id)copy;
@end

