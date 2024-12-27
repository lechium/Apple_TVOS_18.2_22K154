//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSAWDLogging.h>

@interface IDSAWDLogging (IDSDeviceConnection)
- (void)IDSDeviceConnectionForService:(id)arg1 wasSuccessful:(_Bool)arg2 clientInitTime:(id)arg3 clientOpenSocketCompletionTime:(id)arg4 daemonOpenSocketTime:(id)arg5 daemonOpenSocketCompletionTime:(id)arg6 firstPacketReceiveTime:(id)arg7 connectionInitTime:(id)arg8;	// IMP=0x00100000000470b6
- (void)registrationCompletedForRegistrationType:(int)arg1 serviceIdentifier:(id)arg2 wasSuccessful:(_Bool)arg3 registrationError:(long long)arg4;	// IMP=0x001000000019680e
- (void)_submitRegistrationAccountStatusMetric:(id)arg1;	// IMP=0x0010000000196808
- (void)queryAndSubmitStatusForAccounts;	// IMP=0x00100000001964a8
- (_Bool)_shouldSubmitRegistrationCompletedForServiceIdentifier:(id)arg1;	// IMP=0x001000000019648f
- (void)IDSGenericConnectionForLink:(unsigned long long)arg1 connectionSetupStartTime:(id)arg2 firstPacketReceiveTime:(id)arg3 connectionType:(id)arg4 success:(_Bool)arg5 errorCode:(id)arg6;	// IMP=0x00100000001b9328
- (void)sessionEndedWithGuid:(id)arg1 endedReason:(unsigned int)arg2 genericError:(unsigned int)arg3 gameKitError:(unsigned int)arg4 conferenceMiscError:(unsigned int)arg5 callDuration:(id)arg6 isNetworkEnabled:(_Bool)arg7 isNetworkActive:(_Bool)arg8 isNetworkReachable:(_Bool)arg9 networkCheckResult:(unsigned int)arg10 dataRate:(id)arg11 gksError:(id)arg12 connectDuration:(id)arg13 remoteNetworkConnection:(unsigned int)arg14 localNetworkConnection:(unsigned int)arg15 connectionType:(unsigned int)arg16 usesRelay:(_Bool)arg17 currentNATType:(id)arg18 remoteNATType:(id)arg19 relayConnectDuration:(id)arg20 isInitiator:(_Bool)arg21 linkQuality:(id)arg22 gksReturnCode:(id)arg23;	// IMP=0x0010000000200c00
- (void)sessionCompletedWithAWDGUID:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(long long)arg4 isQREnabled:(_Bool)arg5 isUsingQRDirectly:(_Bool)arg6 isInitiator:(_Bool)arg7 isScreenSharingSessionType:(_Bool)arg8 isWithDefaultPairedDevice:(_Bool)arg9 transportType:(long long)arg10 linkType:(unsigned long long)arg11 linkProtocol:(long long)arg12 endedReason:(unsigned int)arg13 destinationType:(int)arg14 durationOfSession:(id)arg15 durationToConnect:(id)arg16 isNetworkEnabled:(_Bool)arg17 isNetworkActive:(_Bool)arg18 isNetworkReachable:(_Bool)arg19 isWifiInterfaceDisallowed:(_Bool)arg20 isCellularInterfaceDisallowed:(_Bool)arg21;	// IMP=0x0010000000200bfa
- (void)sessionReinitiateConnectedWithAWDGUID:(id)arg1;	// IMP=0x0010000000200bf4
- (void)sessionReinitiateStartedWithAWDGUID:(id)arg1;	// IMP=0x0010000000200bee
- (void)sessionReinitiateRequestedWithAWDGUID:(id)arg1;	// IMP=0x0010000000200be8
- (void)sessionConnectedWithAWDGUID:(id)arg1;	// IMP=0x0010000000200be2
- (void)sessionAcceptReceivedWithAWDGUID:(id)arg1;	// IMP=0x0010000000200bdc
- (void)sessionAcceptSentWithAWDGUID:(id)arg1;	// IMP=0x0010000000200bd6
- (void)sessionDeclineReceivedWithAWDGUID:(id)arg1;	// IMP=0x0010000000200bd0
- (void)sessionDeclineSentWithAWDGUID:(id)arg1;	// IMP=0x0010000000200bca
- (void)sessionCancelReceivedWithAWDGUID:(id)arg1;	// IMP=0x0010000000200bc4
- (void)sessionCancelSentWithAWDGUID:(id)arg1 numberOfRecipients:(id)arg2 remoteSessionEndReason:(unsigned int)arg3;	// IMP=0x0010000000200bbe
- (void)sessionInvitationReceivedWithAWDGUID:(id)arg1;	// IMP=0x0010000000200bb8
- (void)sessionInvitationSentWithAWDGUID:(id)arg1 numberOfRecipients:(id)arg2;	// IMP=0x0010000000200bb2
- (void)sessionStartedWithAWDGUID:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(long long)arg4;	// IMP=0x0010000000200bac
- (void)_submitIDSSessionAWDMetric:(id)arg1 withContainer:(id)arg2;	// IMP=0x0010000000200b9a
- (void)IDSRealTimeEncryptionServiceName:(id)arg1 activeParticipants:(long long)arg2 membershipChangeMKMTimeDelta:(long long)arg3;	// IMP=0x001000000034456e
- (void)IDSRealTimeEncryptionServiceName:(id)arg1 activeParticipants:(long long)arg2 firstReceivedPacketMKMtimeDelta:(long long)arg3;	// IMP=0x0010000000344568
- (void)IDSRealTimeEncryptionServiceName:(id)arg1 activeParticipants:(unsigned long long)arg2 missingPrekeys:(unsigned long long)arg3;	// IMP=0x0010000000344562
- (void)IDSSocketPairConnectionTCPInfoLinkType:(unsigned long long)arg1 currentRTT:(unsigned long long)arg2 bandwidth:(unsigned long long)arg3;	// IMP=0x0010000000344fef
- (void)noteServerStorageStateMachineEndedFor:(id)arg1 linkType:(long long)arg2 wasPrimary:(_Bool)arg3 timeTaken:(double)arg4 numberProcessed:(long long)arg5;	// IMP=0x00100000003a3e27
- (void)IDSMagnetCorruptionDetailedEvent:(unsigned long long)arg1 correctRawBytesSinceLastCorruption:(unsigned long long)arg2 discardedRawBytes:(unsigned long long)arg3 recoveryTimeInMs:(unsigned long long)arg4 linkType:(unsigned long long)arg5;	// IMP=0x00100000003a3e21
- (void)noteMessageReceivedForService:(id)arg1 accountType:(id)arg2 fromStorage:(_Bool)arg3 serverTimestamp:(double)arg4 localTimeDelta:(double)arg5;	// IMP=0x00100000003a3e1b
- (void)IDSCoreAnalyticsWiProxDidSendData:(unsigned long long)arg1;	// IMP=0x00100000003a3e15
- (void)IDSWiProxDidSendData:(unsigned long long)arg1;	// IMP=0x00100000003a3e0f
- (void)IDSCoreAnalyticsWiProxConnectionEvent:(id)arg1 duration:(unsigned long long)arg2 resultCode:(unsigned long long)arg3;	// IMP=0x00100000003a3e09
- (void)IDSWiProxDidDisconnectFromPeer:(unsigned long long)arg1 resultCode:(unsigned long long)arg2;	// IMP=0x00100000003a3e03
- (void)IDSWiProxDidConnectToPeer:(unsigned long long)arg1 resultCode:(unsigned long long)arg2;	// IMP=0x00100000003a3dfd
- (void)IDSQRAllocation:(unsigned long long)arg1 result:(unsigned int)arg2 hasRecipientAccepted:(unsigned int)arg3 payloadSize:(unsigned int)arg4 topic:(id)arg5 service:(id)arg6;	// IMP=0x00100000003a3df7
- (void)WRMLinkRecommendation:(unsigned int)arg1 primaryLinkType:(unsigned int)arg2 magnetState:(unsigned int)arg3 infraWiFiState:(unsigned int)arg4;	// IMP=0x00100000003a3df1
- (void)OTRSessionNegotiation:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 result:(unsigned int)arg4;	// IMP=0x00100000003a3deb
- (void)wifiSetupAttemptType:(unsigned long long)arg1 duration:(unsigned long long)arg2 result:(unsigned long long)arg3 client:(id)arg4;	// IMP=0x00100000003a3de5
- (void)socketClosedForService:(id)arg1 isToDefaultPairedDevice:(_Bool)arg2 closeError:(unsigned long long)arg3 socketError:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 packetsSent:(unsigned long long)arg6 bytesReceived:(unsigned long long)arg7 packetsReceived:(unsigned long long)arg8;	// IMP=0x00100000003a3ddf
- (void)socketOpenedForService:(id)arg1 isToDefaultPairedDevice:(_Bool)arg2 openError:(unsigned long long)arg3 socketError:(unsigned long long)arg4;	// IMP=0x00100000003a3dd9
- (void)messageReceivedForService:(id)arg1 isFromDefaultPairedDevice:(_Bool)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 priority:(long long)arg5;	// IMP=0x00100000003a3dd3
- (void)messageDeliveredForService:(id)arg1 isToDefaultPairedDevice:(_Bool)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 deliveryError:(unsigned long long)arg5 RTT:(unsigned long long)arg6 priority:(unsigned long long)arg7;	// IMP=0x00100000003a3dcd
- (void)clientProcessReceivedMessage:(id)arg1 messageSize:(unsigned long long)arg2 deltaTime:(unsigned long long)arg3 priority:(unsigned long long)arg4;	// IMP=0x00100000003a3dc7
- (void)messageSentForService:(id)arg1 isToDefaultPairedDevice:(_Bool)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 priority:(unsigned long long)arg5;	// IMP=0x00100000003a3dc1
@end

