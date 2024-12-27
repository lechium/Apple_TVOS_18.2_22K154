//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHome, HMDSharedUserInviteOwnerSendLogEvent, NSString;

__attribute__((visibility("hidden")))
@interface HMDSharedUserInviteOwnerSendLogEventBuilder
{
    unsigned long long createShareBeginTime;	// 32 = 0x20
    unsigned long long addUserToShareBeginTime;	// 40 = 0x28
    unsigned long long sendInvitationBeginTime;	// 48 = 0x30
    HMDHome *_home;	// 56 = 0x38
    HMDSharedUserInviteOwnerSendLogEvent *_inviteLogEvent;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000afbe03
- (void).cxx_destruct;	// IMP=0x0000000000afbd7a
@property(readonly) HMDSharedUserInviteOwnerSendLogEvent *inviteLogEvent; // @synthesize inviteLogEvent=_inviteLogEvent;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (void)submit;	// IMP=0x0000000000afbb71
- (_Bool)isReady;	// IMP=0x0000000000afb9d9
- (void)cancel;	// IMP=0x0000000000afb8a4
- (void)markSendInviteEnd;	// IMP=0x0000000000afb63f
- (void)markSendInviteBegin;	// IMP=0x0000000000afb4b7
- (void)markUserAlreadyAddedToShare;	// IMP=0x0000000000afb2ac
- (void)markAddUserEnd;	// IMP=0x0000000000afb0bb
- (void)markAddUserBegin;	// IMP=0x0000000000afaf33
- (void)markCreateShareEnd;	// IMP=0x0000000000afad42
- (void)markCreateShareBegin;	// IMP=0x0000000000afabba
- (id)initWithHome:(id)arg1 sessionIdentifier:(id)arg2 invitationType:(unsigned long long)arg3;	// IMP=0x0000000000afab0a
- (id)initWithHome:(id)arg1 sessionIdentifier:(id)arg2 invitationType:(unsigned long long)arg3 logEventSubmitter:(id)arg4 currentUpTicksBlock:(CDUnknownBlockType)arg5 submissionTimerFactory:(CDUnknownBlockType)arg6;	// IMP=0x0000000000afa94f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

