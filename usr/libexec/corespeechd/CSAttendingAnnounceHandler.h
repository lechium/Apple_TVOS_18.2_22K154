//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol LBAttendingStatesServiceDelegate, OS_dispatch_queue;

@interface CSAttendingAnnounceHandler : NSObject
{
    id <LBAttendingStatesServiceDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001052dd
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <LBAttendingStatesServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldDuckTTSAtSpeechStartDetected:(long long)arg1;	// IMP=0x00100000001051fa
- (void)speechStartDetectedWithEventInfo:(id)arg1;	// IMP=0x00100000001050ea
- (void)speechPauseDetected;	// IMP=0x00100000001050e4
- (void)attendingStoppedWithReason:(long long)arg1;	// IMP=0x0010000000105095
- (id)init;	// IMP=0x0010000000105023

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

