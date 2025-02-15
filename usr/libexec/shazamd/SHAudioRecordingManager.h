//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSRecursiveLock, NSString, SHAudioEnvironment;
@protocol OS_dispatch_group, SHAudioRecordingManagerDelegate;

@interface SHAudioRecordingManager : NSObject
{
    id <SHAudioRecordingManagerDelegate> _delegate;	// 8 = 0x8
    NSArray *_recorders;	// 16 = 0x10
    NSMutableSet *_activeTaps;	// 24 = 0x18
    NSMutableSet *_silentRecorders;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_startRecognitionGroup;	// 40 = 0x28
    SHAudioEnvironment *_audioEnvironment;	// 48 = 0x30
    NSRecursiveLock *_lock;	// 56 = 0x38
    long long _previouslySuggestedAudioRecordingSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000004105c
@property(nonatomic) long long previouslySuggestedAudioRecordingSource; // @synthesize previouslySuggestedAudioRecordingSource=_previouslySuggestedAudioRecordingSource;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) SHAudioEnvironment *audioEnvironment; // @synthesize audioEnvironment=_audioEnvironment;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *startRecognitionGroup; // @synthesize startRecognitionGroup=_startRecognitionGroup;
@property(readonly, nonatomic) NSMutableSet *silentRecorders; // @synthesize silentRecorders=_silentRecorders;
@property(readonly, nonatomic) NSMutableSet *activeTaps; // @synthesize activeTaps=_activeTaps;
@property(readonly, nonatomic) NSArray *recorders; // @synthesize recorders=_recorders;
@property(nonatomic) __weak id <SHAudioRecordingManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recorder:(id)arg1 failedToStartWithError:(id)arg2;	// IMP=0x0010000000040f38
- (void)recorder:(id)arg1 producedAudioBuffer:(id)arg2 atTime:(id)arg3;	// IMP=0x0010000000040a9a
- (id)recorderForSource:(long long)arg1;	// IMP=0x001000000004093a
- (_Bool)isAudioSourceSupported:(long long)arg1;	// IMP=0x0010000000040907
@property(readonly, nonatomic) long long suggestedAudioRecordingSource;
- (_Bool)hasActiveTapsForRecordingSource:(long long)arg1;	// IMP=0x0010000000040389
@property(readonly, nonatomic) _Bool hasActiveTaps;
- (void)detachTap:(id)arg1;	// IMP=0x00100000000400f3
- (void)attachTap:(id)arg1;	// IMP=0x001000000003ff23
- (void)stopRecordingForReason:(long long)arg1;	// IMP=0x001000000003f8bd
- (void)startRecording;	// IMP=0x001000000003f2f5
- (_Bool)shouldStartRecorder:(id)arg1;	// IMP=0x001000000003f285
- (id)initWithRecorders:(id)arg1;	// IMP=0x001000000003f17b
- (void)dealloc;	// IMP=0x001000000003f0dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

