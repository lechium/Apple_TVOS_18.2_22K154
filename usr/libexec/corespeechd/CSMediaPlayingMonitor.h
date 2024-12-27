//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class MISSING_TYPE, NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor : CSEventMonitor
{
    long long _mediaIsPlaying;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000010718d
- (void).cxx_destruct;	// IMP=0x0020000000106f44
- (void)mediaPlayingStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000106ea6
- (long long)mediaPlayingState;	// IMP=0x0010000000106e13
- (void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2;	// IMP=0x0010000000106d9f
- (void)_notePossiblePlayPausedStateChange:(id)arg1;	// IMP=0x0010000000106c35
- (void)_stopMonitoring;	// IMP=0x0010000000106b62
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000106a52
- (MISSING_TYPE *)initializeMediaPlayingState;	// IMP=0x0010000000106a00
- (id)init;	// IMP=0x0010000000106992

@end

