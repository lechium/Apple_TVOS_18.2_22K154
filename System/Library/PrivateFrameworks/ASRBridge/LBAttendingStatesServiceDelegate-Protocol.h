//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ASRBridge/NSObject-Protocol.h>

@class NSError, NSString;

@protocol LBAttendingStatesServiceDelegate <NSObject>
- (void)localAttendingStoppedUnexpectedlyWithError:(NSError *)arg1;

@optional
- (void)localAttendingStopped;
- (void)localAttendingAlreadyStarted;
- (void)localAttendingWillStartWithRootRequestId:(NSString *)arg1;
- (void)localAttendingStartedWithRootRequestId:(NSString *)arg1;
- (void)speechRecognizerReadyForNewTurnWithSpeechStartDetectedAtHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(NSString *)arg3;
- (void)speechStartDetectedWithShouldDuckTTS:(_Bool)arg1;
- (void)speechStartDetectedWithHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(NSString *)arg3;
@end

