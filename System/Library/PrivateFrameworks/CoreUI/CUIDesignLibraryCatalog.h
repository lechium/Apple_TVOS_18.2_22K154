//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUIDesignLibraryCatalog : NSObject
{
    unsigned long long _storageRef;	// 8 = 0x8
    NSString *_assetStoreName;	// 16 = 0x10
    id _colorCache[5][28][4];	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 4504 = 0x1198
    long long _designSystem;	// 4512 = 0x11a0
    long long _colorScheme;	// 4520 = 0x11a8
    long long _contrast;	// 4528 = 0x11b0
    long long _styling;	// 4536 = 0x11b8
}

+ (id)catalogForDesignSystem:(long long)arg1 colorScheme:(long long)arg2 contrast:(long long)arg3 styling:(long long)arg4 error:(id *)arg5;	// IMP=0x0060000000052394
+ (id)_bundleNameForResolvedDesignSystem:(long long)arg1;	// IMP=0x0060000000052300
+ (id)_catalogPathComponentForDesignSystem:(long long)arg1 colorScheme:(long long)arg2 contrast:(long long)arg3 styling:(long long)arg4 error:(id *)arg5;	// IMP=0x00600000000520f5
@property long long styling; // @synthesize styling=_styling;
@property long long contrast; // @synthesize contrast=_contrast;
@property long long colorScheme; // @synthesize colorScheme=_colorScheme;
@property long long designSystem; // @synthesize designSystem=_designSystem;
- (id)shapeEffectPresetWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000052ddf
- (id)colorWithName:(long long)arg1 palette:(long long)arg2 displayGamut:(long long)arg3 hierarchyLevel:(long long)arg4 error:(id *)arg5;	// IMP=0x000000000005296e
- (id)colorWithName:(long long)arg1 palette:(long long)arg2 displayGamut:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000005294c
- (id)_colorNameStringFromNameEnum:(long long)arg1 palette:(long long)arg2;	// IMP=0x0000000000052726
- (void)dealloc;	// IMP=0x000000000005203c
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000051f4e
- (id)description;	// IMP=0x0000000000051ef4

@end

