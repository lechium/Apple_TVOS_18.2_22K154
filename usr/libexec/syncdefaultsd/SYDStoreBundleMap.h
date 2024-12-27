//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface SYDStoreBundleMap : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_cachedStoreBundleMap;	// 16 = 0x10
}

+ (id)disabledStoreIdentifiers;	// IMP=0x0040000000003389
+ (id)sharedInstance;	// IMP=0x0010000000002a88
- (void).cxx_destruct;	// IMP=0x00200000000045b2
@property(retain, nonatomic) NSDictionary *cachedStoreBundleMap; // @synthesize cachedStoreBundleMap=_cachedStoreBundleMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)installedAppsDidChange:(id)arg1;	// IMP=0x001000000000446b
- (id)generateStoreBundleMap;	// IMP=0x0010000000003b23
- (id)storeIdentifiersForInstalledBundles;	// IMP=0x001000000000397e
- (void)clearCachedStoreBundleMap;	// IMP=0x001000000000387e
- (void)generateStoreBundleMapIfNecessary;	// IMP=0x00100000000037b4
- (id)bundleIdentifiersForStoreIdentifier:(id)arg1;	// IMP=0x001000000000354c
- (_Bool)isStoreIdentifierUsedOnThisDevice:(id)arg1;	// IMP=0x0010000000003437
- (void)setCloudSyncUserDefaultEnabled:(_Bool)arg1 storeIdentifier:(id)arg2;	// IMP=0x0010000000003077
- (_Bool)isCloudSyncUserDefaultEnabledForStoreIdentifier:(id)arg1;	// IMP=0x0010000000002da6
- (_Bool)shouldSyncStoreWithIdentifier:(id)arg1;	// IMP=0x0010000000002c6c
- (void)dealloc;	// IMP=0x0010000000002bf7
- (id)init;	// IMP=0x0010000000002add

@end

