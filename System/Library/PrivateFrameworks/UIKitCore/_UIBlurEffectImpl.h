//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectImpl : NSObject
{
}

+ (id)implementationFromCoder:(id)arg1;	// IMP=0x00800000002fa79a
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000002fac70
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000002fab2e
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000002fab28
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000002fab1f
- (_Bool)canProvideCoreMaterialVibrancyEffect;	// IMP=0x00000000002fab17
- (_Bool)canProvideVibrancyEffect;	// IMP=0x00000000002fab0f
- (_Bool)invertAutomaticStyle;	// IMP=0x00000000002fab07
- (id)tintColor;	// IMP=0x00000000002faaff
- (long long)style;	// IMP=0x00000000002faaef
- (void)setEffect:(id)arg1;	// IMP=0x00000000002faae9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002faa6c
- (unsigned long long)hash;	// IMP=0x00000000002fa9ef
- (_Bool)requiresCopying;	// IMP=0x00000000002fa9e7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002fa9e1

@end

