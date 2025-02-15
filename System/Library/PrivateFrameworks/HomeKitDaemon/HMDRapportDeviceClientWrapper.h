//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, RPCompanionLinkClient;

__attribute__((visibility("hidden")))
@interface HMDRapportDeviceClientWrapper : NSObject
{
    RPCompanionLinkClient *_client;	// 8 = 0x8
    long long _activateState;	// 16 = 0x10
    NSMutableArray *_requestQueue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000004250a1
- (void).cxx_destruct;	// IMP=0x0000000000424f04
- (void)_completeQueuedRequestsWithError:(id)arg1;	// IMP=0x0000000000424bea
- (void)_queueRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000424906
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000424683
- (void)invalidate;	// IMP=0x00000000004245bb
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000424258
- (id)initWithClient:(id)arg1;	// IMP=0x00000000004241d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

