//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/JSExport-Protocol.h>

@protocol VFXParametricModelJSExport <JSExport>
+ (id)torusWithRingRadius:(float)arg1 pipeRadius:(float)arg2;
+ (id)capsuleWithCapRadius:(float)arg1 height:(float)arg2;
+ (id)tubeWithInnerRadius:(float)arg1 outerRadius:(float)arg2 height:(float)arg3;
+ (id)coneWithTopRadius:(float)arg1 bottomRadius:(float)arg2 height:(float)arg3;
+ (id)cylinderWithRadius:(float)arg1 height:(float)arg2;
+ (id)sphereWithRadius:(float)arg1;
+ (id)pyramidWithWidth:(float)arg1 height:(float)arg2 length:(float)arg3;
+ (id)cubeWithWidth:(float)arg1 height:(float)arg2 length:(float)arg3 chamferRadius:(float)arg4;
+ (id)planeWithWidth:(float)arg1 height:(float)arg2;
@property(nonatomic, getter=isHemispheric) _Bool hemispheric;
@property(nonatomic, getter=isGeodesic) _Bool geodesic;
@property(nonatomic) long long pipeSegmentCount;
@property(nonatomic) long long radialSegmentCount;
@property(nonatomic) long long cornerSegmentCount;
@property(nonatomic) long long lengthSegmentCount;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) long long widthSegmentCount;
@property(nonatomic) long long segmentCount;
@property(nonatomic) float pipeRadius;
@property(nonatomic) float innerRadius;
@property(nonatomic) float topRadius;
@property(nonatomic) float cornerRadius;
@property(nonatomic) float radius;
@property(nonatomic) float chamferRadius;
@property(nonatomic) float length;
@property(nonatomic) float height;
@property(nonatomic) float width;
@end

