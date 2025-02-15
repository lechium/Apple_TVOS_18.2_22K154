//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CUBLEScanner, HAPBTLECentralManager, HMDAccessoryQueues, HMFTimer, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BTLEScanner : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMFTimer *_scanTimer;	// 16 = 0x10
    CUBLEScanner *_cubleScanner;	// 24 = 0x18
    HAPBTLECentralManager *_centralManager;	// 32 = 0x20
    HMDAccessoryQueues *_scanQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000594a4d
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005949cf
- (void)_stopScan;	// IMP=0x0000000000594951
- (void)_checkCanScan;	// IMP=0x0000000000594515
- (void)_stopTimer;	// IMP=0x00000000005944db
- (void)_flushQueue;	// IMP=0x0000000000594458
- (id)init;	// IMP=0x000000000059431e
- (void)didUpdateBTLEState:(long long)arg1;	// IMP=0x00000000005942bf

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

