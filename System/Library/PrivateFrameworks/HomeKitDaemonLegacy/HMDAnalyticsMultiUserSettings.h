//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDAnalyticsMultiUserSettings : HMFObject
{
    _Bool _isOwner;	// 8 = 0x8
    NSArray *_multiUserSettingsValuesByKeyPaths;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000052de26
@property _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(copy) NSArray *multiUserSettingsValuesByKeyPaths; // @synthesize multiUserSettingsValuesByKeyPaths=_multiUserSettingsValuesByKeyPaths;

@end

