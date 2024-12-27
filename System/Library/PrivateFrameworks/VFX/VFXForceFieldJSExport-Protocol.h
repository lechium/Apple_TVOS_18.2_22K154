//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/JSExport-Protocol.h>

@class NSArray, VFXForceField;

@protocol VFXForceFieldJSExport <JSExport>
+ (VFXForceField *)magneticField;
+ (VFXForceField *)electricField;
+ (VFXForceField *)springField;
+ (VFXForceField *)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (VFXForceField *)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (VFXForceField *)linearField;
+ (VFXForceField *)radialField;
+ (VFXForceField *)vortexField;
+ (VFXForceField *)dragField;
@property(nonatomic) unsigned long long categoryBitMask;
@property(retain, nonatomic) NSArray *offset;
@property(nonatomic) long long shape;
@property(nonatomic) long long scope;
@property(retain, nonatomic) NSArray *halfExtent;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) float falloffExponent;
@property(nonatomic) float strength;
- (id)copy;
@end

