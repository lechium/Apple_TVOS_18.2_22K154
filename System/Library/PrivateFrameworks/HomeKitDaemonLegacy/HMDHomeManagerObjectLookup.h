//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeManager;

__attribute__((visibility("hidden")))
@interface HMDHomeManagerObjectLookup
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00600000003e3140
- (void).cxx_destruct;	// IMP=0x00000000003e312f
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)_scanAccounts;	// IMP=0x00000000003e2bda
- (void)_scanCloudZones;	// IMP=0x00000000003e29df
- (void)_scanHomes;	// IMP=0x00000000003e27e4
- (void)scanObjects;	// IMP=0x00000000003e2705
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000003e2673

@end

