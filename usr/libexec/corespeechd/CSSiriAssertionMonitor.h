//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSSiriAssertionMonitor : CSEventMonitor
{
    unsigned char _assertionState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000f8513
- (void).cxx_destruct;	// IMP=0x00200000000f82b4
- (_Bool)isEnabled;	// IMP=0x00100000000f82a0
- (void)_notifyObserverBacklightOn:(_Bool)arg1 atHostTime:(unsigned long long)arg2;	// IMP=0x00100000000f824a
- (void)_notifyObserver:(_Bool)arg1;	// IMP=0x00100000000f81f8
- (void)backlightOnAssertionReceived:(_Bool)arg1 atHostTime:(unsigned long long)arg2;	// IMP=0x00100000000f81e6
- (void)disableAssertionReceived;	// IMP=0x00100000000f8194
- (void)enableAssertionReceived;	// IMP=0x00100000000f8142
- (void)_stopMonitoring;	// IMP=0x00100000000f80c3
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000f80bd
- (void)dealloc;	// IMP=0x00100000000f807f
- (id)init;	// IMP=0x00100000000f7fa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

