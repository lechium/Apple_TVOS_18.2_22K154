//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKIOHIDServiceMatcher, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchPadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_touchPadQueue;	// 8 = 0x8
    NSMutableDictionary *_queue_currentTouchPads;	// 16 = 0x10
    BKIOHIDServiceMatcher *_touchPadMatcher;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x002000000000be85
- (void).cxx_destruct;	// IMP=0x002000000000b8fc
- (void)_queue_sendCancelEventForTouchPad:(id)arg1;	// IMP=0x001000000000b5d9
- (void)_queue_handleEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000000af68
- (void)_queue_sendEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2 toDestination:(id)arg3 dispatcher:(id)arg4;	// IMP=0x001000000000acc0
- (void)_queue_touchPadsDetected:(id)arg1;	// IMP=0x001000000000ac1c
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x001000000000ab49
- (void)_queue_touchPadRemoved:(id)arg1;	// IMP=0x001000000000aa26
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x001000000000a9db
- (void)sendCancelEventForAllDisplays;	// IMP=0x001000000000a990
- (void)sendCancelEventForDisplay:(id)arg1;	// IMP=0x001000000000a903
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 display:(id)arg3 dispatcher:(id)arg4;	// IMP=0x001000000000a80d
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000000a7f5
- (void)dealloc;	// IMP=0x001000000000a7b3
- (id)init;	// IMP=0x001000000000a5cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

