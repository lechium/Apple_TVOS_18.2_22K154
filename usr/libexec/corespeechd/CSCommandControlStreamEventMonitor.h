//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSString;

@interface CSCommandControlStreamEventMonitor : CSEventMonitor
{
    _Bool _isCommandControlStreaming;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00200000000fba2c
- (void)_notifyStopCommandControl;	// IMP=0x00200000000fb99d
- (void)commandControlBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;	// IMP=0x00100000000fb98b
- (void)commandControlBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x00100000000fb979
- (void)commandControlBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;	// IMP=0x00100000000fb91d
- (void)commandControlBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000000fb917
- (_Bool)isStreaming;	// IMP=0x00100000000fb872
- (void)_stopMonitoring;	// IMP=0x00100000000fb813
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000fb7b4
- (id)init;	// IMP=0x00100000000fb775

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

