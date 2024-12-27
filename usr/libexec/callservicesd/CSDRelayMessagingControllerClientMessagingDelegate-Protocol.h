//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDMessagingRelayMessage;

@protocol CSDRelayMessagingControllerClientMessagingDelegate <NSObject>
- (void)pullRemotelyHostedCallsForMessage:(CSDMessagingRelayMessage *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)handleReceivedDTMFUpdateMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateSupportsDTMFUpdatesMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateSupportsEmergencyFallbackMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateFailureExpectedMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateSupportsTTYWithVoiceMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateRoutesMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateRemoteUplinkMutedMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateCallDisplayContextMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleInvitationSentMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleNeedsManualInCallSoundsChangeMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateCallContextAvailableMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handlePushHostedCallsMessageFromHost:(CSDMessagingRelayMessage *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)handleCallStartedConnectingMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateRemoteCallStateMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleHardPauseDigitsAvailabilityMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleResetStateMessageFromHost:(CSDMessagingRelayMessage *)arg1 fromPairedDevice:(_Bool)arg2;
- (void)handleDeviceUnavailableMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateCallModelMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleResetWantsHoldMusicFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handlePullRelayingCallsMessageFromHost:(CSDMessagingRelayMessage *)arg1 fromPairedDevice:(_Bool)arg2;
- (void)handleCallConnectedMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleCallDisconnectedMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleCallAnsweredElsewhereMessageFromHost:(CSDMessagingRelayMessage *)arg1 fromPairedDevice:(_Bool)arg2;
- (void)handleCallDialedMessageFromHost:(CSDMessagingRelayMessage *)arg1 fromPairedDevice:(_Bool)arg2;
- (void)handleConversationProminenceMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleOngoingConversationMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleUpdateConversationsMessageFromHost:(CSDMessagingRelayMessage *)arg1;
- (void)handleIncomingCallMessageFromHost:(CSDMessagingRelayMessage *)arg1 fromPairedDevice:(_Bool)arg2;
@end

