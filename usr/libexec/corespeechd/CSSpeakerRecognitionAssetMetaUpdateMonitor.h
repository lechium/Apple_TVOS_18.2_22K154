//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSSpeakerRecognitionAssetMetaUpdateMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000085f8
- (void)_notifyObserver:(id)arg1;	// IMP=0x002000000000856f
- (void)_didReceiveSpeakerRecognitionAssetMetaData;	// IMP=0x00100000000084a8
- (void)_stopMonitoring;	// IMP=0x0010000000008405
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000082fc
- (const char *)_asssetMetaUpdatedKey;	// IMP=0x00100000000082ef
- (id)init;	// IMP=0x00100000000082ad

@end

