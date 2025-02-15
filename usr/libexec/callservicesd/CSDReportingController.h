//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClientManager, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CSDReportingController : NSObject
{
    NSMutableArray *_reporters;	// 8 = 0x8
    NSMutableDictionary *_reportingSessionByStreamToken;	// 16 = 0x10
    NSMutableSet *_conversationUUIDs;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CSDClientManager *_clientManager;	// 40 = 0x28
}

+ (id)sharedInstanceWithQueue:(id)arg1;	// IMP=0x00200000001d4799
+ (id)sharedInstance;	// IMP=0x00100000001d4779
- (void).cxx_destruct;	// IMP=0x00200000001db34f
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableSet *conversationUUIDs; // @synthesize conversationUUIDs=_conversationUUIDs;
@property(readonly, nonatomic) NSMutableDictionary *reportingSessionByStreamToken; // @synthesize reportingSessionByStreamToken=_reportingSessionByStreamToken;
@property(retain, nonatomic) NSMutableArray *reporters; // @synthesize reporters=_reporters;
- (void)conversationManager:(id)arg1 addedActivatedLink:(id)arg2;	// IMP=0x00100000001db18b
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x00100000001daf17
- (void)reportingController:(id)arg1 letMeInRequestStateChangedForConversation:(id)arg2;	// IMP=0x00100000001dad96
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x00100000001dac15
- (void)conversationManager:(id)arg1 remoteMembersChangedForConversation:(id)arg2;	// IMP=0x00100000001daa94
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;	// IMP=0x00100000001da913
- (void)conversationsChangedForConversationManager:(id)arg1;	// IMP=0x00100000001da53f
@property(readonly, copy, nonatomic) NSArray *calls;
- (void)momentsReportingSession:(id)arg1 didGenerateUsageReport:(id)arg2;	// IMP=0x00100000001da278
- (void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001da266
- (void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001da254
- (void)didCleanUpForStream:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001da242
- (void)registeredStream:(long long)arg1 withAvailability:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001da230
- (void)momentsController:(id)arg1 didReceiveResultsForStream:(long long)arg2 withTransactionID:(id)arg3;	// IMP=0x00100000001da218
- (void)momentsController:(id)arg1 didStartRequestForStream:(long long)arg2 withTransactionID:(id)arg3;	// IMP=0x00100000001da200
- (void)momentsController:(id)arg1 didCleanUpForStream:(long long)arg2;	// IMP=0x00100000001da1eb
- (void)momentsController:(id)arg1 registeredStream:(long long)arg2 withAvailability:(int)arg3;	// IMP=0x00100000001da1d3
- (void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2;	// IMP=0x00100000001da115
- (void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2;	// IMP=0x00100000001da057
- (void)didCleanUpForStream:(long long)arg1;	// IMP=0x00100000001d9fba
- (void)registeredStream:(long long)arg1 withAvailability:(int)arg2;	// IMP=0x00100000001d9eec
- (void)didEndSession:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00100000001d9ca7
- (void)sendUserScoreToRTCReporting:(id)arg1 withScore:(int)arg2;	// IMP=0x00100000001d9aac
- (void)sentLetMeInRequestForConversation:(id)arg1 isApproved:(_Bool)arg2;	// IMP=0x00100000001d98aa
- (void)receivedLetMeInRequestForConversation:(id)arg1;	// IMP=0x00100000001d96cb
- (void)voipDOSCallIgnored:(id)arg1;	// IMP=0x00100000001d94ec
- (void)voipPushDroppedOnTheFloor:(id)arg1;	// IMP=0x00100000001d930d
- (void)voipAppBecameDisabledFromLaunching:(id)arg1;	// IMP=0x00100000001d912e
- (void)voipAppFailedToPostIncomingCall:(id)arg1;	// IMP=0x00100000001d8f4f
- (void)avcBlobRequestMessageRetrySucceededForConversationGroupUUID:(id)arg1;	// IMP=0x00100000001d8d70
- (void)avcBlobRequestMessageRetryFailedForConversationGroupUUID:(id)arg1;	// IMP=0x00100000001d8b91
- (void)avcBlobRequestMessageRetryStartedForConversationGroupUUID:(id)arg1;	// IMP=0x00100000001d89b2
- (void)messageRetrySucceededForConversationGroupUUID:(id)arg1;	// IMP=0x00100000001d87d3
- (void)messageRetryFailedForConversationGroupUUID:(id)arg1;	// IMP=0x00100000001d85f4
- (void)messageRetryStartedForConversationGroupUUID:(id)arg1;	// IMP=0x00100000001d8415
- (void)oneToOneModeSwitchFailureForConversation:(id)arg1 isOneToOneMode:(_Bool)arg2;	// IMP=0x00100000001d8204
- (void)avcBlobRecoveryTimedOutForConversation:(id)arg1;	// IMP=0x00100000001d8025
- (void)transitionAttemptForConversation:(id)arg1;	// IMP=0x00100000001d7e46
- (void)remoteMemberNotInMemberListForConversation:(id)arg1;	// IMP=0x00100000001d7c67
- (void)avcBlobRecoveryStartedForConversation:(id)arg1;	// IMP=0x00100000001d7a88
- (void)groupActivitiesReportsReceived:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000001d7887
- (void)connectionSetupReportReceived:(id)arg1 eventType:(long long)arg2 forConversation:(id)arg3;	// IMP=0x00100000001d7617
- (void)handoffReportReceived:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000001d73e3
- (void)chatReceived:(id)arg1;	// IMP=0x00100000001d7204
- (void)idsReportsReceived:(id)arg1 forSessionWithUUID:(id)arg2;	// IMP=0x00100000001d705f
- (void)idsReportsReceived:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000001d6eba
- (void)createConversationReportingSession:(id)arg1;	// IMP=0x00100000001d6bdc
- (void)createOneToOneFTReportingSessionForCallWithUUID:(id)arg1 withReportingHierarchyToken:(id)arg2 withVideo:(_Bool)arg3;	// IMP=0x00100000001d68c4
- (void)reportTimedOutPickingRoute:(id)arg1;	// IMP=0x00100000001d65c1
- (void)reportRouteWasPickedByAnyTrigger:(id)arg1;	// IMP=0x00100000001d62be
- (void)reportRouteWasPicked:(id)arg1;	// IMP=0x00100000001d5fbb
- (void)reportProviderFailedWithAction:(id)arg1 forCall:(id)arg2;	// IMP=0x00100000001d5da8
- (void)reportTransactionGroupCompleted:(id)arg1;	// IMP=0x00100000001d5bc9
- (void)reportRelayMessageReceived:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x00100000001d59d8
- (void)reportAllCallsBackgrounded;	// IMP=0x00100000001d5825
- (void)reportCallEnteredForeground:(id)arg1;	// IMP=0x00100000001d5646
- (void)reportJoinDurationLongerThanThreasholdForCallUUID:(id)arg1 report:(id)arg2;	// IMP=0x00100000001d5445
- (void)handleCallStatusChanged:(id)arg1;	// IMP=0x00100000001d5111
- (void)handleScreeningChanged:(id)arg1;	// IMP=0x00100000001d4e64
- (void)addReporter:(id)arg1;	// IMP=0x00100000001d4d56
- (void)dealloc;	// IMP=0x00100000001d4ce1
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001d487b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

