//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol GCSSettingsStoreService, GCUserDefaults;

__attribute__((visibility("hidden")))
@interface GCSMouseProfilesCollection : NSObject
{
    id <GCUserDefaults> _userDefaults;	// 8 = 0x8
    id <GCSSettingsStoreService> _settingsStore;	// 16 = 0x10
    NSArray *_values;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000d7f9
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) __weak id <GCSSettingsStoreService> settingsStore; // @synthesize settingsStore=_settingsStore;
- (id)mouseProfileForBundleIdentifier:(id)arg1;	// IMP=0x000000000000d5f7
- (void)updateMouseProfiles:(id)arg1;	// IMP=0x000000000000d3b5
- (_Bool)storeVersionIsCompatible;	// IMP=0x000000000000d377
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000d0a7
- (void)dealloc;	// IMP=0x000000000000d012
- (id)initWithSettingsStore:(id)arg1 userDefaults:(id)arg2;	// IMP=0x000000000000cef9

@end

