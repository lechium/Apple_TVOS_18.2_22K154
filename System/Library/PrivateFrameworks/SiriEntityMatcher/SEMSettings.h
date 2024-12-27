//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SEMLocalization;

@interface SEMSettings : NSObject
{
    struct atomic<bool> _assistantEnabled;	// 8 = 0x8
    SEMLocalization *_localization;	// 16 = 0x10
}

+ (void)disableOverrideAcceptAllSets;	// IMP=0x00600000000465bc
+ (void)enableOverrideAcceptAllSets;	// IMP=0x006000000004657d
+ (_Bool)isUserVaultEnabled;	// IMP=0x006000000004655d
+ (_Bool)useMediaThresholdFiltering;	// IMP=0x0060000000046029
+ (_Bool)useSensitiveLogging;	// IMP=0x0060000000046021
+ (id)defaultSettings;	// IMP=0x0060000000045f8b
- (id).cxx_construct;	// IMP=0x000000000004661a
- (void).cxx_destruct;	// IMP=0x000000000004660a
@property(readonly) SEMLocalization *localization; // @synthesize localization=_localization;
- (_Bool)isVanillaContainersEnabled;	// IMP=0x0000000000046565
- (_Bool)isSupportedDevicePlatform:(unsigned char)arg1;	// IMP=0x00000000000463c1
- (_Bool)_isSiriUODSupported;	// IMP=0x000000000004631f
- (void)setEvaluationEnabled:(_Bool)arg1;	// IMP=0x00000000000462c2
- (_Bool)isEvaluationEnabled;	// IMP=0x0000000000046186
- (_Bool)isAssistantEnabled;	// IMP=0x000000000004617b
- (void)refresh;	// IMP=0x00000000000460c9
- (id)initWithLocalization:(id)arg1 assistantEnabled:(_Bool)arg2;	// IMP=0x000000000004603e

@end

