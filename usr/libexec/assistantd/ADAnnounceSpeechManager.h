//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADOpportuneSpeakingModuleEdgeDetector, CSAttendingServiceClient, NSString;
@protocol ADAnnounceSpeechManagerDelegate, OS_dispatch_queue;

@interface ADAnnounceSpeechManager : NSObject
{
    ADOpportuneSpeakingModuleEdgeDetector *_osmedDetector;	// 8 = 0x8
    CSAttendingServiceClient *_attendingServiceClient;	// 16 = 0x10
    long long _speechType;	// 24 = 0x18
    NSString *_deviceID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _isAttendingWithCSOSL;	// 48 = 0x30
    _Bool _isAttendingWithAttendingService;	// 49 = 0x31
    id <ADAnnounceSpeechManagerDelegate> _delegate;	// 56 = 0x38
}

+ (double)lookbackTimeForSpeechObservingType:(long long)arg1;	// IMP=0x00200000000b6e30
+ (double)_bargeInTimeThresholdForType:(long long)arg1;	// IMP=0x00100000000b6d74
- (void).cxx_destruct;	// IMP=0x00200000000b5a27
@property(nonatomic) __weak id <ADAnnounceSpeechManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_resetDetector;	// IMP=0x00100000000b5890
- (_Bool)isAttending;	// IMP=0x00100000000b5802
- (void)stopAttending;	// IMP=0x00100000000b573c
- (void)didTransitionToTriggerlessListening;	// IMP=0x00100000000b5676
- (id)_osmedDetector;	// IMP=0x00100000000b55cc
- (id)_attendingServiceClient;	// IMP=0x00100000000b557d
- (void)speechPauseDetected;	// IMP=0x00100000000b5577
- (void)speechStartDetectedWithEventInfo:(id)arg1;	// IMP=0x00100000000b5571
- (void)_attendingStoppedWithReason:(long long)arg1;	// IMP=0x00100000000b5500
- (void)attendingStoppedWithReason:(long long)arg1;	// IMP=0x00100000000b5424
- (void)_startAttendingForSpeechPauseWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b52bc
- (void)_startAttendingForSpeechWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b4fb8
- (void)startAttendingForPauseInSpeechWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b4e9e
- (void)startAttendingForSpeechWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b4d9c
- (id)init;	// IMP=0x00100000000b4cd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

