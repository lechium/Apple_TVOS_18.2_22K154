//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSDictionary, NSMutableSet, SFRemoteTextInputClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDSharedRemoteTextInputClient : NSObject
{
    MISSING_TYPE *_activateCalled;	// 8 = 0x8
    NSMutableSet *_delegates;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_overrunTimer;	// 24 = 0x18
    SFRemoteTextInputClient *_rtiClient;	// 32 = 0x20
    NSDate *_sessionClock;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
}

+ (id)sharedClient;	// IMP=0x00400000000a95b0
- (void).cxx_destruct;	// IMP=0x00200000000aa4be
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)_updatedSessionInfoWithAppIcon:(id)arg1;	// IMP=0x00100000000aa3aa
- (void)_stopClock:(unsigned long long)arg1;	// IMP=0x00100000000aa393
- (void)_startClockWithResetIfNeeded;	// IMP=0x00100000000aa163
- (void)_logEvent:(unsigned long long)arg1 stopClock:(_Bool)arg2;	// IMP=0x00100000000a9f46
- (void)_rtiHandleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00100000000a9de7
- (void)_rtiHandleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00100000000a9c8d
- (void)_rtiHandleEventWithData:(id)arg1;	// IMP=0x00100000000a9b3d
- (void)prefsChanged;	// IMP=0x00100000000a9b37
- (void)handleUsername:(id)arg1 password:(id)arg2;	// IMP=0x00100000000a9b21
- (void)handleTextInputData:(id)arg1;	// IMP=0x00100000000a9b0b
- (void)removeAllDelegates;	// IMP=0x00100000000a9ad9
- (void)removeDelegate:(id)arg1;	// IMP=0x00100000000a9a57
- (void)addDelegate:(id)arg1;	// IMP=0x00100000000a99b2
- (void)invalidate;	// IMP=0x00100000000a98bf
@property(readonly, copy, nonatomic) NSDictionary *currentPayload;
- (void)activate;	// IMP=0x00100000000a9840
- (void)_ensureStarted;	// IMP=0x00100000000a965c
- (id)init;	// IMP=0x00100000000a9605

@end

