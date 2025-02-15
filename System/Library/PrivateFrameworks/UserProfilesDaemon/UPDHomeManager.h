//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessory, HMHome, MISSING_TYPE, NSArray;

@interface UPDHomeManager : NSObject
{
    MISSING_TYPE *observers;	// 8 = 0x8
    MISSING_TYPE *deviceRequiresHomeMembership;	// 16 = 0x10
    MISSING_TYPE *homeKitManager;	// 24 = 0x18
    MISSING_TYPE *lockReadyState;	// 32 = 0x20
    MISSING_TYPE *homeKitQueue;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_homeKitQueue_homeKitReadinessTracker;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005e290
- (id)init;	// IMP=0x000000000005df60
- (void)removeObserver:(id)arg1;	// IMP=0x000000000005e6c0
- (void)addObserver:(id)arg1;	// IMP=0x000000000005e630
@property(nonatomic, readonly) NSArray *allHomes;
@property(nonatomic, readonly) HMAccessory *currentAccessory;
@property(nonatomic, readonly) HMHome *currentDeviceHome;
@property(nonatomic, readonly) _Bool isReady;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;	// IMP=0x000000000005eb20
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x000000000005e6f0
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x000000000005f780
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x000000000005f500
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x000000000005f290
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x00000000000606e0
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x0000000000060630
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x00000000000603b0
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x000000000005fcf0
- (void)sharedUserProfileMetadataUpdatedForUser:(id)arg1;	// IMP=0x00000000000609c0

@end

