//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SPNetworkMonitor;
@protocol OS_dispatch_queue, SPMonitorsWrapperDelegate;

__attribute__((visibility("hidden")))
@interface SPMonitorsWrapper : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    id <SPMonitorsWrapperDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    SPNetworkMonitor *_networkMonitor;	// 32 = 0x20
    NSDate *_lastStateChangeDate;	// 40 = 0x28
    NSDate *_nextStateChangeDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001469b
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSDate *nextStateChangeDate; // @synthesize nextStateChangeDate=_nextStateChangeDate;
@property(retain, nonatomic) NSDate *lastStateChangeDate; // @synthesize lastStateChangeDate=_lastStateChangeDate;
@property(retain, nonatomic) SPNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <SPMonitorsWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resume;	// IMP=0x0000000000014579
- (void)pause;	// IMP=0x0000000000014501
- (void)stop;	// IMP=0x000000000001449a
- (void)start;	// IMP=0x000000000001431c
- (unsigned long long)powerState;	// IMP=0x0000000000014314
- (_Bool)isNetworkUp;	// IMP=0x00000000000142d0
- (_Bool)useLegacyMacBeaconing;	// IMP=0x00000000000142b7
- (int)_cpuType;	// IMP=0x0000000000014214
- (id)initWithBeaconManager:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x0000000000014139

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

