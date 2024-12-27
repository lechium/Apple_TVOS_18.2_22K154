//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoFeatureListStringHelper : NSObject
{
}

+ (_Bool)isResizePIPSupportedInFeatureListString:(id)arg1;	// IMP=0x0080000000446447
+ (id)newFeatureListStringsDictForGroupID:(unsigned int)arg1 isOneToOne:(_Bool)arg2;	// IMP=0x00800000004463bb
+ (id)newScreenFeatureString;	// IMP=0x008000000044636b
+ (_Bool)featureListString:(char *)arg1 maxSize:(long long)arg2 payload:(int)arg3 featureListStrings:(struct __CFDictionary *)arg4;	// IMP=0x008000000044616a
+ (int)defaultPayload:(struct __CFDictionary *)arg1;	// IMP=0x0080000000445ff8
+ (id)extractKeyAndValueStringFromFeatureString:(id)arg1 prefix:(id)arg2;	// IMP=0x0080000000445ec9
+ (_Bool)extractExpectedAspectRatios:(const char *)arg1 expectedLandscapeX:(int *)arg2 expectedLandscapeY:(int *)arg3 expectedPortraitX:(int *)arg4 expectedPortraitY:(int *)arg5;	// IMP=0x0080000000445e97
+ (_Bool)extractAspectRatios:(const char *)arg1 landscapeX:(int *)arg2 landscapeY:(int *)arg3 portraitX:(int *)arg4 portraitY:(int *)arg5;	// IMP=0x0080000000445e65
+ (_Bool)extractAspectRatios:(const char *)arg1 prefix:(const char *)arg2 landscapeX:(int *)arg3 landscapeY:(int *)arg4 portraitX:(int *)arg5 portraitY:(int *)arg6;	// IMP=0x0080000000445d0a
+ (id)newEmptyFeatureString;	// IMP=0x0080000000445ce2
+ (id)newEmptyFeatureStringWithPayload:(int)arg1;	// IMP=0x0080000000445c5e
+ (id)newLocalFeaturesStringWithVCP:(id)arg1 aspectRatioFLS:(id)arg2;	// IMP=0x0080000000445b71
+ (id)newLocalFeaturesStringWithType:(unsigned char)arg1 aspectRatioFLS:(id)arg2 version:(long long)arg3;	// IMP=0x0080000000445a23
+ (id)newLocalFeaturesStringFixedPositionWithType:(unsigned char)arg1;	// IMP=0x00800000004459dc
+ (id)newLocalFeaturesStringWithType:(unsigned char)arg1;	// IMP=0x0080000000445995
+ (_Bool)findFeatureString:(const char *)arg1 value:(char *)arg2 valueLength:(unsigned long long)arg3 withPrefix:(const char *)arg4;	// IMP=0x008000000044585c
+ (id)deriveAspectRatioFLSWithPortraitRatio:(struct CGSize)arg1 landscapeRatio:(struct CGSize)arg2 expectedPortraitRatio:(struct CGSize)arg3 expectedLandscapeRatio:(struct CGSize)arg4;	// IMP=0x008000000044571d
+ (id)deriveAspectRatioFLS;	// IMP=0x0080000000445637
+ (void)aspectRatioPortrait:(struct CGSize *)arg1 landscape:(struct CGSize *)arg2 isMismatchedOrientation:(_Bool)arg3;	// IMP=0x0080000000445590
+ (void)fixInvalidAspectRatioPortrait:(struct CGSize *)arg1 landscape:(struct CGSize *)arg2;	// IMP=0x0080000000445530
+ (id)retrieveVCPFeaturesStringWithType:(unsigned char)arg1 version:(long long)arg2;	// IMP=0x0080000000445517
+ (unsigned char)hardwareSettingsModeFromFeatureListStringType:(unsigned char)arg1;	// IMP=0x00800000004454ac

@end

