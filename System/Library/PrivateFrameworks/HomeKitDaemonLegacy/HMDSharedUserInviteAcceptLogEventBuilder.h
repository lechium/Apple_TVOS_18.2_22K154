//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeManager, HMDSharedUserInviteAcceptLogEvent, NSString;

__attribute__((visibility("hidden")))
@interface HMDSharedUserInviteAcceptLogEventBuilder
{
    unsigned long long joinOwnerShareBeginTime;	// 32 = 0x20
    unsigned long long createMKFCKSharedUserDataRootBeginTime;	// 40 = 0x28
    unsigned long long createReverseShareBeginTime;	// 48 = 0x30
    unsigned long long addUserToShareBeginTime;	// 56 = 0x38
    unsigned long long sendAcceptanceToOwnerBeginTime;	// 64 = 0x40
    unsigned long long discoverPrimaryResidentBeginTime;	// 72 = 0x48
    unsigned long long residentSyncBeginTime;	// 80 = 0x50
    HMDHomeManager *_homeManager;	// 88 = 0x58
    HMDSharedUserInviteAcceptLogEvent *_acceptLogEvent;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x0010000000b20351
- (void).cxx_destruct;	// IMP=0x0000000000b202c8
@property(readonly) HMDSharedUserInviteAcceptLogEvent *acceptLogEvent; // @synthesize acceptLogEvent=_acceptLogEvent;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)submit;	// IMP=0x0000000000b20084
- (_Bool)isReady;	// IMP=0x0000000000b1fd39
- (void)markResidentSyncEnd;	// IMP=0x0000000000b1fad4
- (void)markResidentSyncBegin;	// IMP=0x0000000000b1f94c
- (void)markDiscoverPrimaryResidentEnd;	// IMP=0x0000000000b1f75b
- (void)markDiscoverPrimaryResidentBegin;	// IMP=0x0000000000b1f5d3
- (void)markCreatedHome;	// IMP=0x0000000000b1f3ec
- (void)markSendAcceptanceToOwnerEnd;	// IMP=0x0000000000b1f187
- (void)markSendAcceptanceToOwnerBegin;	// IMP=0x0000000000b1efff
- (void)markAddUserEnd;	// IMP=0x0000000000b1ee0e
- (void)markAddUserBegin;	// IMP=0x0000000000b1ec86
- (void)markCreateReverseShareEnd;	// IMP=0x0000000000b1ea95
- (void)markCreateReverseShareBegin;	// IMP=0x0000000000b1e90d
- (void)markCreateMKFCKSharedUserDataRootEnd;	// IMP=0x0000000000b1e71c
- (void)markCreateMKFCKSharedUserDataRootBegin;	// IMP=0x0000000000b1e594
- (void)markJoinOwnerShareEnd;	// IMP=0x0000000000b1e3a3
- (void)markJoinOwnerShareBegin;	// IMP=0x0000000000b1e21b
- (id)initWithHomeUUID:(id)arg1 homeManager:(id)arg2 sessionIdentifier:(id)arg3 invitationType:(unsigned long long)arg4 wifiManager:(id)arg5;	// IMP=0x0000000000b1e127
- (id)initWithHomeUUID:(id)arg1 homeManager:(id)arg2 sessionIdentifier:(id)arg3 invitationType:(unsigned long long)arg4 logEventSubmitter:(id)arg5 wifiManager:(id)arg6 currentUpTicksBlock:(CDUnknownBlockType)arg7 submissionTimerFactory:(CDUnknownBlockType)arg8;	// IMP=0x0000000000b1df9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

