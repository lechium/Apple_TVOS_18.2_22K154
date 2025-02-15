//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserPresenceFeedRetryTimer : HMFObject
{
    HMFTimer *_retryTimer;	// 8 = 0x8
    unsigned long long _retryCount;	// 16 = 0x10
    NSUUID *_timerID;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000001c35d8
- (void).cxx_destruct;	// IMP=0x00000000001c35a7
@property(readonly, copy) NSUUID *timerID; // @synthesize timerID=_timerID;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
- (id)logIdentifier;	// IMP=0x00000000001c34f8
- (_Bool)shouldRetryImmediately:(double)arg1;	// IMP=0x00000000001c34cc
@property(readonly) double retryTimeInterval;
- (void)cancel;	// IMP=0x00000000001c344a
- (void)startWithDelegate:(id)arg1 delegateQueue:(id)arg2 responseTime:(double)arg3;	// IMP=0x00000000001c3030
- (id)attributeDescriptions;	// IMP=0x00000000001c2efc
- (id)init;	// IMP=0x00000000001c2e8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

