//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSDRelayClientController
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005420f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)pullRemotelyHostedCallsForMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053b67
- (void)handleUpdateSupportsTTYWithVoiceMessageFromHost:(id)arg1;	// IMP=0x00100000000539f2
- (void)handleUpdateSupportsEmergencyFallbackMessageFromHost:(id)arg1;	// IMP=0x001000000005387d
- (void)handleUpdateFailureExpectedMessageFromHost:(id)arg1;	// IMP=0x0010000000053708
- (void)handleUpdateRoutesMessageFromHost:(id)arg1;	// IMP=0x001000000005348a
- (void)handleUpdateRemoteUplinkMutedMessageFromHost:(id)arg1;	// IMP=0x0010000000053315
- (void)handleUpdateCallDisplayContextMessageFromHost:(id)arg1;	// IMP=0x0010000000053107
- (void)handleInvitationSentMessageFromHost:(id)arg1;	// IMP=0x0010000000052f92
- (void)handleNeedsManualInCallSoundsChangeMessageFromHost:(id)arg1;	// IMP=0x0010000000052e00
- (void)handleUpdateCallContextAvailableMessageFromHost:(id)arg1;	// IMP=0x0010000000052ca5
- (void)handlePushHostedCallsMessageFromHost:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052b37
- (void)handleCallStartedConnectingMessageFromHost:(id)arg1;	// IMP=0x00100000000529c2
- (void)handleUpdateRemoteCallStateMessageFromHost:(id)arg1;	// IMP=0x0010000000052597
- (void)handleReceivedDTMFUpdateMessageFromHost:(id)arg1;	// IMP=0x0010000000052354
- (void)handleUpdateSupportsDTMFUpdatesMessageFromHost:(id)arg1;	// IMP=0x00100000000521df
- (void)handleHardPauseDigitsAvailabilityMessageFromHost:(id)arg1;	// IMP=0x0010000000051f9a
- (void)handleResetStateMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x00100000000518e1
- (void)handleDeviceUnavailableMessageFromHost:(id)arg1;	// IMP=0x00100000000516f5
- (void)handleUpdateCallModelMessageFromHost:(id)arg1;	// IMP=0x001000000005138c
- (void)handleResetWantsHoldMusicFromHost:(id)arg1;	// IMP=0x0010000000051215
- (void)handlePullRelayingCallsMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x0010000000050f00
- (void)handleCallConnectedMessageFromHost:(id)arg1;	// IMP=0x0010000000050d70
- (void)handleCallDisconnectedMessageFromHost:(id)arg1;	// IMP=0x0010000000050c6f
- (void)handleCallAnsweredElsewhereMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x00100000000508f5
- (void)handleCallDialedMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x00100000000505e1
- (void)handleOngoingConversationMessageFromHost:(id)arg1;	// IMP=0x001000000005053c
- (void)handleUpdateConversationsMessageFromHost:(id)arg1;	// IMP=0x0010000000050497
- (void)handleConversationProminenceMessageFromHost:(id)arg1;	// IMP=0x00100000000503f2
- (void)handleIncomingCallMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x001000000004fe24
- (id)callWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000004fd03
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000004fc95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

