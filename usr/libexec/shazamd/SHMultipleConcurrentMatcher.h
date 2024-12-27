//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSRecursiveLock, NSString;
@protocol SHAudioRecordingManager, SHMatcherDelegate;

@interface SHMultipleConcurrentMatcher : NSObject
{
    _Bool _recognitionHasStopped;	// 8 = 0x8
    id <SHMatcherDelegate> delegate;	// 16 = 0x10
    NSArray *_matchers;	// 24 = 0x18
    id <SHAudioRecordingManager> _audioRecordingManager;	// 32 = 0x20
    NSRecursiveLock *_lock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000038eb2
@property(nonatomic) _Bool recognitionHasStopped; // @synthesize recognitionHasStopped=_recognitionHasStopped;
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) id <SHAudioRecordingManager> audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
@property(readonly, nonatomic) NSArray *matchers; // @synthesize matchers=_matchers;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x0010000000038ce5
- (_Bool)session:(id)arg1 shouldAttemptToMatchSignature:(id)arg2;	// IMP=0x0010000000038b27
- (void)stopRecognition;	// IMP=0x00100000000388fe
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x00100000000386b5
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x00100000000384b2
- (id)initWithMatchers:(id)arg1 audioRecordingManager:(id)arg2;	// IMP=0x00100000000382c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

