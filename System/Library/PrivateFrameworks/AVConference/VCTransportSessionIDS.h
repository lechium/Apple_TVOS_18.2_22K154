//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCDatagramChannelIDS;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDS
{
    VCDatagramChannelIDS *_datagramChannel;	// 176 = 0xb0
    int _socket;	// 184 = 0xb8
    NSString *_destination;	// 192 = 0xc0
    _Bool _requireEncryptionInfo;	// 200 = 0xc8
    int _dataPath;	// 204 = 0xcc
    _Bool _useIDSLinkSuggestionFeatureFlag;	// 208 = 0xd0
    unsigned int _linkPreferSuggestionFromDefaults;	// 212 = 0xd4
    _Bool _sessionBasedServerExperimentsProcessed;	// 216 = 0xd8
}

+ (int)transportTypeForConnectionType:(int)arg1;	// IMP=0x006000000019a2b2
@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void)handleEncryptionConfig:(id)arg1;	// IMP=0x000000000019a23c
- (void)handleStatResponse:(id)arg1;	// IMP=0x000000000019a1c6
- (void)handleReportingBlob:(id)arg1;	// IMP=0x000000000019a015
- (void)processSessionBasedServerExperiments:(id)arg1;	// IMP=0x0000000000199c58
- (void)handleLinkPreferSuggestion:(id)arg1;	// IMP=0x0000000000199c38
- (void)setQuickRelayServerProvider:(int)arg1;	// IMP=0x0000000000199c32
- (void)handleChannelInfoReport:(id)arg1;	// IMP=0x0000000000199a7e
- (void)setConnectionSetupTime;	// IMP=0x000000000019994d
- (void)handleLinkConstrainsChanged:(id)arg1;	// IMP=0x0000000000199933
- (void)handleCellularSoMaskChanged:(id)arg1;	// IMP=0x000000000019992d
- (void)handleProbingResponse:(id)arg1;	// IMP=0x00000000001998cc
- (void)handleSessionInfoResponse:(id)arg1;	// IMP=0x00000000001998c6
- (void)handleIDSMembershipChangeInfoEvent:(id)arg1;	// IMP=0x00000000001997bf
- (void)handleIDSEncryptionInfoEvent:(id)arg1;	// IMP=0x00000000001996b8
- (void)handleCellularMTUChanged:(id)arg1;	// IMP=0x000000000019969e
- (void)handleRATChanged:(id)arg1;	// IMP=0x0000000000199513
- (void)handlePreConnectionDataReceived:(id)arg1;	// IMP=0x00000000001994f9
- (void)handleDefaultLinkUpdatedWithInfo:(id)arg1;	// IMP=0x00000000001993fb
- (void)handleLinkDisconnectedWithInfo:(id)arg1;	// IMP=0x000000000019939a
- (void)handleLinkConnectedWithInfo:(id)arg1;	// IMP=0x0000000000199339
- (void)onStop;	// IMP=0x0000000000199333
- (int)onStart;	// IMP=0x000000000019932b
- (id)connectionSetupPiggybackBlob;	// IMP=0x00000000001991f3
- (void)setPiggybackBlobPreference;	// IMP=0x000000000019908d
- (void)setConnectionSetupPiggybackBlob:(id)arg1;	// IMP=0x0000000000198ece
- (void)startMKMRecoveryForParticipantIDs:(id)arg1;	// IMP=0x0000000000198ddf
- (void)cleanupDatagramChannel;	// IMP=0x0000000000198d85
- (void)stop;	// IMP=0x0000000000198cac
- (void)start;	// IMP=0x000000000019832f
- (unsigned int)remoteDeviceVersionIDS;	// IMP=0x0000000000198188
- (void)dispatchedProcessDatagramChannelEventInfo:(id)arg1;	// IMP=0x000000000019785e
- (void)datagramChannelEventLogForInfo:(id)arg1 eventInfo:(id)arg2;	// IMP=0x0000000000197583
- (void)processDatagramChannelEventInfo:(id)arg1;	// IMP=0x00000000001974e7
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001974bf
- (id)copyActiveConnection;	// IMP=0x000000000019745e
- (int)networkInterfaceType;	// IMP=0x0000000000197403
- (unsigned int)networkMTU;	// IMP=0x00000000001973c7
- (_Bool)isIPv6;	// IMP=0x0000000000197390
- (id)datagramChannel;	// IMP=0x0000000000197372
- (void)dealloc;	// IMP=0x00000000001972e0
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 dataPath:(int)arg5;	// IMP=0x000000000019716c
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4;	// IMP=0x000000000019714a
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;	// IMP=0x0000000000197130

@end

