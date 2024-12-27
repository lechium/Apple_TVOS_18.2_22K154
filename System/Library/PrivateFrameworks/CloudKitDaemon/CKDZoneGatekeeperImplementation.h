//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface CKDZoneGatekeeperImplementation : NSObject
{
    NSMutableDictionary *_zoneIDsToGateHolders;	// 8 = 0x8
    NSMutableArray *_waiterWrappers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000963b7
@property(retain, nonatomic) NSMutableArray *waiterWrappers; // @synthesize waiterWrappers=_waiterWrappers;
@property(retain, nonatomic) NSMutableDictionary *zoneIDsToGateHolders; // @synthesize zoneIDsToGateHolders=_zoneIDsToGateHolders;
- (id)CKStatusReportArray;	// IMP=0x0000000000095c09
- (_Bool)hasStatusToReport;	// IMP=0x0000000000095b3d
- (void)relinquishLocksForWaiter:(id)arg1 deferRelinquish:(_Bool)arg2;	// IMP=0x0000000000094a65
- (void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000943e9
- (id)init;	// IMP=0x0000000000094374

@end

