//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class SSRVoiceActivityDetector;

@protocol SSRVoiceActivityDetectorDelegate <NSObject>

@optional
- (void)SSRVoiceActivityDetector:(SSRVoiceActivityDetector *)arg1 didDetectEndPointAt:(unsigned long long)arg2;
- (void)SSRVoiceActivityDetector:(SSRVoiceActivityDetector *)arg1 didDetectStartPointAt:(unsigned long long)arg2;
@end

