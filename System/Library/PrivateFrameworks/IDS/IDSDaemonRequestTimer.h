//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDaemonRequestTimer : NSObject
{
    NSMutableDictionary *_requestContextMap;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _requestContextMapLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c3abb
- (id)invalidateTimeoutsAndReturnHandlersForAllRequests;	// IMP=0x00000000000c380b
- (id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;	// IMP=0x00000000000c375f
- (id)invalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;	// IMP=0x00000000000c3609
- (void)_criticalInvokeTimeoutBlockForRequestID:(id)arg1;	// IMP=0x00000000000c34b3
- (void)_handleSystemTimerFired:(id)arg1;	// IMP=0x00000000000c33f1
- (id)_criticalFindRequestContextWithResponseHandler:(id)arg1;	// IMP=0x00000000000c323d
- (id)scheduleTimeoutWithResponseHandler:(id)arg1 timeoutInterval:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c2f67
- (long long)inFlightRequestCount;	// IMP=0x00000000000c2e93
- (id)init;	// IMP=0x00000000000c2e2f
- (void)dealloc;	// IMP=0x00000000000c2df5
- (void)_accessRequestContextMapInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2db7

@end

