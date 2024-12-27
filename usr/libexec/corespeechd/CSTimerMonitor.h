//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSTimerMonitor : CSEventMonitor
{
    long long _timerFiringState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000037c63
- (void).cxx_destruct;	// IMP=0x0020000000037c2f
- (long long)timerState;	// IMP=0x0010000000037b9c
- (void)_stopMonitoring;	// IMP=0x0010000000037ab6
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000379b5
- (void)initializeTimerState;	// IMP=0x00100000000379af
- (id)init;	// IMP=0x0010000000037941

@end

