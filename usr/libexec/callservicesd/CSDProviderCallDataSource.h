//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSDCallFilterController, CSDCallProviderManager, CSDCallSourceFetcher, CSDCoreTelephonyClient, CSDFaceTimeProviderDelegate, CSDRelayCallDataSource, CSDVoIPProcessAssertionManager, CXCallControllerHost, CXCallSource, CXCallSourceManager, CXInProcessCallSource, NSMutableDictionary, NSString, _TtC13callservicesd27CSDSuperboxProviderDelegate;
@protocol CSDProtectedAppsUtilitiesProtocol, CSDRouteManager;

@interface CSDProviderCallDataSource
{
    _Bool _deferCommittingTransactions;	// 8 = 0x8
    _Bool _sharingModeEnabled;	// 9 = 0x9
    CSDCoreTelephonyClient *_coreTelephonyClient;	// 16 = 0x10
    CSDFaceTimeProviderDelegate *_faceTimeProviderDelegate;	// 24 = 0x18
    CSDCallProviderManager *_callProviderManager;	// 32 = 0x20
    CSDCallFilterController *_callFilterController;	// 40 = 0x28
    CXCallControllerHost *_callControllerHost;	// 48 = 0x30
    CXInProcessCallSource *_faceTimeCallSource;	// 56 = 0x38
    CXInProcessCallSource *_superboxCallSource;	// 64 = 0x40
    _TtC13callservicesd27CSDSuperboxProviderDelegate *_superboxProviderDelegate;	// 72 = 0x48
    CSDCallSourceFetcher *_callSourceFetcher;	// 80 = 0x50
    NSMutableDictionary *_pendingCallsToChatUUIDs;	// 88 = 0x58
    NSMutableDictionary *_pendingPulledCallContexts;	// 96 = 0x60
    CXCallSourceManager *_callSourceManager;	// 104 = 0x68
    CSDVoIPProcessAssertionManager *_processAssertionManager;	// 112 = 0x70
    CSDRelayCallDataSource *;	// 120 = 0x78
    id <CSDRouteManager> _routeManager;	// 128 = 0x80
    CDUnknownBlockType _dndAllowsCall;	// 136 = 0x88
    CDUnknownBlockType _supportsPrimaryCalling;	// 144 = 0x90
    CDUnknownBlockType _shouldPreferRelayOverDirectSecondaryCalling;	// 152 = 0x98
    CDUnknownBlockType _shouldFilterCall;	// 160 = 0xa0
    CDUnknownBlockType _lowPowerModeEnabledBlock;	// 168 = 0xa8
    CDUnknownBlockType _callDirectoryAllowsCallFromSourceAddress;	// 176 = 0xb0
    CDUnknownBlockType _blockedByExtension;	// 184 = 0xb8
    double _dispatchDelay;	// 192 = 0xc0
    id <CSDProtectedAppsUtilitiesProtocol> _protectedAppsUtilities;	// 200 = 0xc8
}

+ (_Bool)_isSystemProviderForIdentifier:(id)arg1;	// IMP=0x002000000020078c
+ (Class)callClass;	// IMP=0x00100000001f3e19
- (void).cxx_destruct;	// IMP=0x0020000000200a96
@property(retain, nonatomic) id <CSDProtectedAppsUtilitiesProtocol> protectedAppsUtilities; // @synthesize protectedAppsUtilities=_protectedAppsUtilities;
@property(nonatomic) double dispatchDelay; // @synthesize dispatchDelay=_dispatchDelay;
@property(copy, nonatomic) CDUnknownBlockType blockedByExtension; // @synthesize blockedByExtension=_blockedByExtension;
@property(copy, nonatomic) CDUnknownBlockType callDirectoryAllowsCallFromSourceAddress; // @synthesize callDirectoryAllowsCallFromSourceAddress=_callDirectoryAllowsCallFromSourceAddress;
@property(copy, nonatomic) CDUnknownBlockType lowPowerModeEnabledBlock; // @synthesize lowPowerModeEnabledBlock=_lowPowerModeEnabledBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldFilterCall; // @synthesize shouldFilterCall=_shouldFilterCall;
@property(copy, nonatomic) CDUnknownBlockType shouldPreferRelayOverDirectSecondaryCalling; // @synthesize shouldPreferRelayOverDirectSecondaryCalling=_shouldPreferRelayOverDirectSecondaryCalling;
@property(copy, nonatomic) CDUnknownBlockType supportsPrimaryCalling; // @synthesize supportsPrimaryCalling=_supportsPrimaryCalling;
@property(copy, nonatomic) CDUnknownBlockType dndAllowsCall; // @synthesize dndAllowsCall=_dndAllowsCall;
@property(retain, nonatomic) id <CSDRouteManager> routeManager; // @synthesize routeManager=_routeManager;
@property(nonatomic) _Bool sharingModeEnabled; // @synthesize sharingModeEnabled=_sharingModeEnabled;
@property(nonatomic) __weak CSDRelayCallDataSource *relayCallDataSource; // @synthesize relayCallDataSource=_relayCallDataSource;
@property(readonly, nonatomic) CSDVoIPProcessAssertionManager *processAssertionManager; // @synthesize processAssertionManager=_processAssertionManager;
@property(readonly, nonatomic) CXCallSourceManager *callSourceManager; // @synthesize callSourceManager=_callSourceManager;
@property(readonly, nonatomic) NSMutableDictionary *pendingPulledCallContexts; // @synthesize pendingPulledCallContexts=_pendingPulledCallContexts;
@property(readonly, nonatomic) NSMutableDictionary *pendingCallsToChatUUIDs; // @synthesize pendingCallsToChatUUIDs=_pendingCallsToChatUUIDs;
@property(readonly, nonatomic) CSDCallSourceFetcher *callSourceFetcher; // @synthesize callSourceFetcher=_callSourceFetcher;
@property(readonly, nonatomic) _TtC13callservicesd27CSDSuperboxProviderDelegate *superboxProviderDelegate; // @synthesize superboxProviderDelegate=_superboxProviderDelegate;
@property(readonly, nonatomic) CXInProcessCallSource *superboxCallSource; // @synthesize superboxCallSource=_superboxCallSource;
@property(readonly, nonatomic) CXInProcessCallSource *faceTimeCallSource; // @synthesize faceTimeCallSource=_faceTimeCallSource;
@property(nonatomic) _Bool deferCommittingTransactions; // @synthesize deferCommittingTransactions=_deferCommittingTransactions;
@property(readonly, nonatomic) CXCallControllerHost *callControllerHost; // @synthesize callControllerHost=_callControllerHost;
@property(retain, nonatomic) CSDCallFilterController *callFilterController; // @synthesize callFilterController=_callFilterController;
@property(retain, nonatomic) CSDCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) CSDFaceTimeProviderDelegate *faceTimeProviderDelegate; // @synthesize faceTimeProviderDelegate=_faceTimeProviderDelegate;
@property(readonly, nonatomic) CSDCoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
- (id)callSourceWithIdentifier:(id)arg1;	// IMP=0x0010000000200712
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x001000000020058b
- (void)callControllerHost:(id)arg1 clientWithIdentifier:(id)arg2 requestedTransaction:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000020022d
- (void)callSourcesChangedForCallSourceManager:(id)arg1;	// IMP=0x00100000001ffd99
- (void)callSourceManager:(id)arg1 completedTransactionGroup:(id)arg2;	// IMP=0x00100000001ff434
- (void)callSource:(id)arg1 requestedTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ff336
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 crossDeviceIdentifier:(id)arg3 changedBytesOfDataUsed:(long long)arg4;	// IMP=0x00100000001ff1cb
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedMeterLevel:(float)arg3 forDirection:(long long)arg4;	// IMP=0x00100000001ff0a7
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedFrequencyData:(id)arg3 forDirection:(long long)arg4;	// IMP=0x00100000001fef6c
- (void)callSource:(id)arg1 reportedAudioFinishedForCallWithUUID:(id)arg2;	// IMP=0x00100000001fecf2
- (void)callSource:(id)arg1 reportedNewOutgoingCallWithUUID:(id)arg2 update:(id)arg3;	// IMP=0x00100000001febd4
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 connectedAtDate:(id)arg3;	// IMP=0x00100000001fe876
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;	// IMP=0x00100000001fe530
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 sentInvitationAtDate:(id)arg3;	// IMP=0x00100000001fe1ea
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 endedAtDate:(id)arg3 privateReason:(long long)arg4 failureContext:(id)arg5;	// IMP=0x00100000001fd767
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 receivedDTMFUpdate:(id)arg3;	// IMP=0x00100000001fd4aa
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 updated:(id)arg3;	// IMP=0x00100000001fcdb2
- (void)callSource:(id)arg1 reportedNewIncomingCallWithUUID:(id)arg2 update:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001fae27
- (void)updateFilteredOutReasonForCall:(id)arg1 WithError:(id)arg2;	// IMP=0x00100000001fab44
- (_Bool)callSource:(id)arg1 shouldProcessAction:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001faa57
- (void)callSource:(id)arg1 registeredWithConfiguration:(id)arg2;	// IMP=0x00100000001fa7a8
- (void)performStartCallAction:(id)arg1 forCall:(id)arg2;	// IMP=0x00100000001fa60e
- (void)holdOrEndOtherCallsBecauseCallWillBeginOutgoing:(id)arg1;	// IMP=0x00100000001f9dfc
- (void)performCallActions:(id)arg1 forCall:(id)arg2;	// IMP=0x00100000001f9c0e
- (void)performCallAction:(id)arg1 forCall:(id)arg2;	// IMP=0x00100000001f9a07
- (id)providerWithIdentifier:(id)arg1;	// IMP=0x00100000001f9964
- (id)callSourceForJoinConversationRequest:(id)arg1;	// IMP=0x00100000001f9952
- (id)callSourceForDialRequest:(id)arg1;	// IMP=0x00100000001f9761
- (void)pullCallWithHandoffActivityUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f9402
- (void)sendMMIOrUSSDCodeWithRequest:(id)arg1;	// IMP=0x00100000001f91c1
- (void)setTTYType:(int)arg1 forCalls:(id)arg2;	// IMP=0x00100000001f90f2
- (void)setUplinkMuted:(_Bool)arg1 forCalls:(id)arg2;	// IMP=0x00100000001f9022
- (void)disconnectCalls:(id)arg1 whileHoldingCalls:(id)arg2 andUnholdingCalls:(id)arg3 andUngroupingCalls:(id)arg4;	// IMP=0x00100000001f8eda
- (void)ungroupCall:(id)arg1 fromOtherCallsInGroup:(id)arg2;	// IMP=0x00100000001f8deb
- (void)groupCalls:(id)arg1 withCalls:(id)arg2;	// IMP=0x00100000001f8cfc
- (void)holdCalls:(id)arg1 whileUnholdingCalls:(id)arg2;	// IMP=0x00100000001f8c0d
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileDisconnectingCalls:(id)arg3 andHoldingCalls:(id)arg4;	// IMP=0x00100000001f8ac5
- (void)_addSupplementalActionsForRequestedTransaction:(id)arg1 onCallSource:(id)arg2;	// IMP=0x00100000001f84a5
- (void)_performRequestedTransaction:(id)arg1 onCallSource:(id)arg2;	// IMP=0x00100000001f7f18
- (void)_processRequestedTransaction:(id)arg1 fromCallSource:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f7d8b
- (_Bool)_shouldAllowRequestedTransaction:(id)arg1 forCallSource:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001f7ad1
- (_Bool)_shouldAllowRequestedAction:(id)arg1 forCallSource:(id)arg2 shouldValidateUserIntent:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000001f718e
- (_Bool)_actionRequiresReasonableUserIntent:(id)arg1;	// IMP=0x00100000001f70e4
- (void)_processCompletedCallAction:(id)arg1 forCall:(id)arg2 allowRevertingState:(_Bool)arg3 isOnenessActive:(_Bool)arg4;	// IMP=0x00100000001f5e73
- (id)_endMutuallyExclusiveCalls:(id)arg1;	// IMP=0x00100000001f5aa2
- (void)_endCall:(id)arg1;	// IMP=0x00100000001f596c
- (_Bool)_allowRevertingStateForCompletedTransactionGroup:(id)arg1;	// IMP=0x00100000001f5802
- (void)_commitUncommittedTransactions;	// IMP=0x00100000001f57c5
- (void)_deferCommittingTransactionsUntilAfterRunningBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f575d
- (_Bool)_shouldBlockIfScreenSharing;	// IMP=0x00100000001f5608
- (id)_identifiersForCalls:(id)arg1;	// IMP=0x00100000001f5439
- (id)_ISOCountryCodeForCallWithUUID:(id)arg1 provider:(id)arg2 callUpdate:(id)arg3;	// IMP=0x00100000001f52ea
- (id)_ISOCountryCodeForCall:(id)arg1;	// IMP=0x00100000001f51b2
- (id)_localProviderForCallSource:(id)arg1;	// IMP=0x00100000001f50eb
- (id)_providerForCallSource:(id)arg1;	// IMP=0x00100000001f5024
- (id)_callGroupsWithBackingCallSource:(id)arg1;	// IMP=0x00100000001f4be1
- (id)_callWithUUID:(id)arg1 controllableByCallSource:(id)arg2;	// IMP=0x00100000001f498f
- (id)_callWithUUID:(id)arg1 backingCallSource:(id)arg2;	// IMP=0x00100000001f4734
- (id)_relayCallWithUUID:(id)arg1;	// IMP=0x00100000001f4693
- (id)_callWithUUID:(id)arg1;	// IMP=0x00100000001f4631
@property(readonly, nonatomic) CXCallSource *telephonyCallSource;
- (id)callGroupUUIDToCalls;	// IMP=0x00100000001f4267
- (void)stopTrackingCall:(id)arg1;	// IMP=0x00100000001f4020
- (void)startTrackingCall:(id)arg1;	// IMP=0x00100000001f3efe
- (void)registerCall:(id)arg1;	// IMP=0x00100000001f3e2a
- (id)initWithCallStateController:(id)arg1 queue:(id)arg2 coreTelephonyClient:(id)arg3 chManager:(id)arg4 callSourceManager:(id)arg5 protectedAppsUtilities:(id)arg6;	// IMP=0x00100000001f3425

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

