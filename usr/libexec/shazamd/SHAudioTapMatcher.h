//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, SHAudioTap, SHMatcherRequest, SHSession;
@protocol SHAudioRecordingManager, SHMatcherDelegate;

@interface SHAudioTapMatcher : NSObject
{
    id <SHMatcherDelegate> delegate;	// 8 = 0x8
    id <SHAudioRecordingManager> _audioRecordingManager;	// 16 = 0x10
    SHAudioTap *_audioTap;	// 24 = 0x18
    SHSession *_session;	// 32 = 0x20
    NSRecursiveLock *_lock;	// 40 = 0x28
    SHMatcherRequest *_matcherRequest;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000031828
@property(retain, nonatomic) SHMatcherRequest *matcherRequest; // @synthesize matcherRequest=_matcherRequest;
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) SHSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) SHAudioTap *audioTap; // @synthesize audioTap=_audioTap;
@property(readonly, nonatomic) id <SHAudioRecordingManager> audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
- (_Bool)shouldGenerateSpectralOutput;	// IMP=0x0010000000031739
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x00100000000314fe
- (void)stopRecognition;	// IMP=0x0010000000031490
- (void)_stop;	// IMP=0x001000000003130c
- (_Bool)finishSessionConditionsMetForRequest:(id)arg1 response:(id)arg2;	// IMP=0x0010000000031158
- (void)session:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x0010000000030f62
- (_Bool)session:(id)arg1 shouldAttemptToMatchSignature:(id)arg2;	// IMP=0x0010000000030e0c
- (_Bool)isRunning;	// IMP=0x0010000000030dd9
- (id)errorResponseSignature;	// IMP=0x0010000000030d39
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0010000000030a16
- (id)initWithAudioTap:(id)arg1 audioRecordingManager:(id)arg2 session:(id)arg3;	// IMP=0x001000000003067e
- (id)initWithAudioTap:(id)arg1 audioRecordingManager:(id)arg2 catalog:(id)arg3;	// IMP=0x00100000000305cd
- (id)initWithAudioTap:(id)arg1 sessionDriver:(id)arg2 audioRecordingManager:(id)arg3 catalog:(id)arg4;	// IMP=0x00100000000304d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

