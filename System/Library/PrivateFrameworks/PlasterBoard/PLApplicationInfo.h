//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIApplicationInfo.h>

@class MISSING_TYPE;

@interface PLApplicationInfo : _UIApplicationInfo
{
    MISSING_TYPE *isCurrentApplication;	// 8 = 0x8
    MISSING_TYPE *isLaunchableDuringSetup;	// 9 = 0x9
    MISSING_TYPE *visibilityOverride;	// 10 = 0xa
    MISSING_TYPE *hasHiddenTag;	// 11 = 0xb
    MISSING_TYPE *appTags;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002a3c0
- (id)initWithApplicationProxy:(id)arg1;	// IMP=0x000000000002a2f0
- (id)initWithApplicationRecord:(id)arg1;	// IMP=0x000000000002a1e0
- (void)_overrideTags:(id)arg1;	// IMP=0x0000000000029910
- (void)_loadFromRecord:(id)arg1;	// IMP=0x00000000000298c0
@property(nonatomic, readonly) long long pl_visibilityOverride;
@property(nonatomic) _Bool hasHiddenTag; // @synthesize hasHiddenTag;
@property(nonatomic) _Bool isLaunchableDuringSetup; // @synthesize isLaunchableDuringSetup;
@property(nonatomic) _Bool isCurrentApplication; // @synthesize isCurrentApplication;
- (id)fbs_sceneClientIdentity;	// IMP=0x000000000002a4a0
@property(nonatomic, readonly) _Bool isAppleApplication;
@property(nonatomic, readonly) _Bool isInternalApplication;
@property(nonatomic, readonly) _Bool isSystemApplication;

@end

