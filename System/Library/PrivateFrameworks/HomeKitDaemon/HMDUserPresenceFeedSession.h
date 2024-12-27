//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, HMDUserPresenceFeedRetryTimer, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, HMFMessageDispatcher, HMUserPresenceAuthorization, HMUserPresenceCompute, NSDate, NSObject, NSString, NSUUID;
@protocol HMDUserPresenceFeedSessionDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDUserPresenceFeedSession : HMFObject
{
    _Bool _activityStateEnabled;	// 8 = 0x8
    id <HMDUserPresenceFeedSessionDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSUUID *_targetUUID;	// 32 = 0x20
    HMFMessageDispatcher *_messageDispatcher;	// 40 = 0x28
    HMDUser *_user;	// 48 = 0x30
    HMUserPresenceAuthorization *_presenceAuthStatus;	// 56 = 0x38
    HMUserPresenceCompute *_presenceComputeStatus;	// 64 = 0x40
    HMDUserPresenceRegion *_presenceRegionStatus;	// 72 = 0x48
    HMDUserPresenceUpdateReason *_reason;	// 80 = 0x50
    NSDate *_statusChangeDate;	// 88 = 0x58
    NSUUID *_sessionID;	// 96 = 0x60
    HMDUserPresenceFeedRetryTimer *_statusUpdateRetryTimer;	// 104 = 0x68
    NSString *_logIdentifierString;	// 112 = 0x70
}

+ (id)logCategory;	// IMP=0x0010000000576d13
- (void).cxx_destruct;	// IMP=0x000000000057687e
@property(readonly, nonatomic, getter=isActivityStateEnabled) _Bool activityStateEnabled; // @synthesize activityStateEnabled=_activityStateEnabled;
@property(copy, nonatomic) NSString *logIdentifierString; // @synthesize logIdentifierString=_logIdentifierString;
@property(retain, nonatomic) HMDUserPresenceFeedRetryTimer *statusUpdateRetryTimer; // @synthesize statusUpdateRetryTimer=_statusUpdateRetryTimer;
@property(readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSDate *statusChangeDate; // @synthesize statusChangeDate=_statusChangeDate;
@property(retain, nonatomic) HMDUserPresenceUpdateReason *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDUserPresenceRegion *presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
@property(readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // @synthesize presenceComputeStatus=_presenceComputeStatus;
@property(readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak id <HMDUserPresenceFeedSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005765cc
- (id)logIdentifier;	// IMP=0x00000000005765ba
- (void)_callDelegate;	// IMP=0x00000000005764f9
- (void)_handleStatusUpdateMessageError:(id)arg1 responseTime:(double)arg2;	// IMP=0x00000000005763e1
- (void)_send;	// IMP=0x00000000005754e4
- (void)send;	// IMP=0x0000000000575473
- (id)attributeDescriptions;	// IMP=0x0000000000575243
- (void)dealloc;	// IMP=0x00000000005750e1
- (id)initWithDelegate:(id)arg1 workQueue:(id)arg2 targetUUID:(id)arg3 messageDispatcher:(id)arg4 user:(id)arg5 presenceAuthStatus:(id)arg6 presenceComputeStatus:(id)arg7 presenceRegionStatus:(id)arg8 reason:(id)arg9;	// IMP=0x0000000000574d75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

