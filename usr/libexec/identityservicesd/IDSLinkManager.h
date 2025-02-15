//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSBTLinkManager, IDSSockAddrWrapper, IDSWPLinkManager, MISSING_TYPE, NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol IDSLinkDelegate, OS_dispatch_source;

@interface IDSLinkManager : NSObject
{
    MISSING_TYPE *_cbuuidToLinks;	// 8 = 0x8
    NSMutableDictionary *_deviceIDToCurrentLink;	// 16 = 0x10
    NSDictionary *_deviceIDToUDPDestinations;	// 24 = 0x18
    IDSBTLinkManager *_btLinkManager;	// 32 = 0x20
    IDSWPLinkManager *_wpLinkManager;	// 40 = 0x28
    _Bool _isCentral;	// 48 = 0x30
    _Bool _mayBringUpWiFi;	// 49 = 0x31
    _Bool _isWiFiBroughtUp;	// 50 = 0x32
    _Bool _shouldBringWiFiDown;	// 51 = 0x33
    _Bool _shouldKeepWiFiUp;	// 52 = 0x34
    unsigned int _handshakeCounter;	// 56 = 0x38
    unsigned int _WiFiBringUpCounter;	// 60 = 0x3c
    double _addressRetransmissionInterval;	// 64 = 0x40
    _Bool _requireBT;	// 72 = 0x48
    _Bool _shouldStartBTLinkManager;	// 73 = 0x49
    NSMutableDictionary *_deviceIDToAllocRequests;	// 80 = 0x50
    NSMutableDictionary *_deviceIDToGlobalLinkUp;	// 88 = 0x58
    _Bool _delayedDefaultDeviceAllocateRequest;	// 96 = 0x60
    unsigned long long _totalBytesSent;	// 104 = 0x68
    unsigned long long _totalPacketsSent;	// 112 = 0x70
    unsigned long long _totalBytesReceived;	// 120 = 0x78
    unsigned long long _totalPacketsReceived;	// 128 = 0x80
    unsigned long long _totalPacketsDropped;	// 136 = 0x88
    unsigned long long _previousBytesSent;	// 144 = 0x90
    unsigned long long _previousPacketsSent;	// 152 = 0x98
    unsigned long long _previousBytesReceived;	// 160 = 0xa0
    unsigned long long _previousPacketsReceived;	// 168 = 0xa8
    unsigned long long _previousPacketsDropped;	// 176 = 0xb0
    double _previousReportTime;	// 184 = 0xb8
    double _previousReportFileOpenTime;	// 192 = 0xc0
    double _minReportFileOpenTimeInterval;	// 200 = 0xc8
    char _reporterFile[1025];	// 208 = 0xd0
    int _reporterFd;	// 1236 = 0x4d4
    _Bool _isInternalInstall;	// 1240 = 0x4d8
    _Bool _demoMode;	// 1241 = 0x4d9
    NSString *_fixedInterface;	// 1248 = 0x4e0
    NSString *_fixedInterfaceDestination;	// 1256 = 0x4e8
    _Bool _hasFixedDestination;	// 1264 = 0x4f0
    NSObject<OS_dispatch_source> *_reporterTimer;	// 1272 = 0x4f8
    struct __SCDynamicStore *_dynamicStore;	// 1280 = 0x500
    _Bool _cellularDataStatusListenerStarted;	// 1288 = 0x508
    id <IDSLinkDelegate> _delegate;	// 1296 = 0x510
    NSString *_defaultDeviceCbuuid;	// 1304 = 0x518
    _Bool _doesDefaultDevicePreferInfraWiFi;	// 1312 = 0x520
    _Bool _isDefaultDeviceUsingBTLink;	// 1313 = 0x521
    _Bool _isDefaultDeviceNearby;	// 1314 = 0x522
    _Bool _lastSentDefaultDeviceNearby;	// 1315 = 0x523
    _Bool _lastSentDefaultDeviceConnectivity;	// 1316 = 0x524
    _Bool _lastSentDefaultDeviceCloudConnectivity;	// 1317 = 0x525
    _Bool _lastSentDefaultPeerConnectivity;	// 1318 = 0x526
    _Bool _isDefaultDeviceOnPhoneCall;	// 1319 = 0x527
    _Bool _hasDelayedNoConnectivityNotification;	// 1320 = 0x528
    IDSSockAddrWrapper *_localWiFiAddressUsedForDefaultDevice;	// 1328 = 0x530
    unsigned long long _currentDefaultDeviceLinkType;	// 1336 = 0x538
    NSDate *_timeBase;	// 1344 = 0x540
    _Bool _isReliableUnicastSession;	// 1352 = 0x548
    _Bool _isReliableUnicastClient;	// 1353 = 0x549
    NSMutableDictionary *_sessionIDToSharedSessionHasJoined;	// 1360 = 0x550
    NSMutableDictionary *_sessionIDToPluginNameToPluginOptionsDict;	// 1368 = 0x558
    NSMutableDictionary *_sessionIDToCellInterfaceName;	// 1376 = 0x560
    NSMutableDictionary *_sessionIDToIDSContextBlob;	// 1384 = 0x568
}

- (void).cxx_destruct;	// IMP=0x00200000002b292b
@property(readonly, nonatomic) unsigned long long currentDefaultDeviceLinkType; // @synthesize currentDefaultDeviceLinkType=_currentDefaultDeviceLinkType;
- (void)cellularSoMaskDidChange:(unsigned int)arg1;	// IMP=0x00100000002b257d
- (void)cellularRadioAccessTechnologyDidChange:(_Bool)arg1;	// IMP=0x00100000002b211e
- (void)_unsubscribeFromWRMForLinkRecommendation;	// IMP=0x00100000002b2118
- (void)_subscribeToWRMForLinkRecommendation:(unsigned long long)arg1;	// IMP=0x00100000002b2112
- (void)_handleWRMLinkRecommendation:(unsigned long long)arg1;	// IMP=0x00100000002b2025
- (id)_getIDSLinkTypeString:(unsigned long long)arg1;	// IMP=0x00100000002b2006
- (unsigned long long)currentLinkType:(id)arg1;	// IMP=0x00100000002b1df2
- (id)linkForCBUUID:(id)arg1;	// IMP=0x00100000002b1dbe
- (void)currentLinkType:(unsigned long long *)arg1 andRATType:(unsigned int *)arg2 forDeviceID:(id)arg3;	// IMP=0x00100000002b1b44
- (void)_handleNetworkChanges:(id)arg1;	// IMP=0x00100000002b0d5d
- (void)manager:(id)arg1 didPairedDeviceChange:(_Bool)arg2;	// IMP=0x00100000002b08b0
- (void)manager:(id)arg1 linkDidDisconnect:(id)arg2;	// IMP=0x00100000002b068e
- (void)manager:(id)arg1 linkDidConnect:(id)arg2;	// IMP=0x00100000002b0405
- (void)manager:(id)arg1 didPowerStateChange:(_Bool)arg2;	// IMP=0x00100000002afff2
- (void)link:(id)arg1 didReceiveErrorIndicationWithCode:(unsigned int)arg2;	// IMP=0x00100000002aff8a
- (void)link:(id)arg1 didReceiveEncryptedDataBlobs:(id)arg2;	// IMP=0x00100000002aff08
- (void)didReceiveBlockedIndicationForLink:(id)arg1 reason:(unsigned int)arg2;	// IMP=0x00100000002afea0
- (void)link:(id)arg1 didReceiveSessionStateCounter:(unsigned int)arg2;	// IMP=0x00100000002afe38
- (void)link:(id)arg1 didReceiveMappedParticipantsDict:(id)arg2 forLinkID:(BOOL)arg3;	// IMP=0x00100000002afda6
- (void)link:(id)arg1 didReceivePluginDisconnect:(id)arg2;	// IMP=0x00100000002afd24
- (void)link:(id)arg1 didReceiveRequestToPurgeRegistration:(id)arg2;	// IMP=0x00100000002afca2
- (void)link:(id)arg1 didReceivePluginUnregistration:(unsigned long long)arg2 pluginName:(id)arg3;	// IMP=0x00100000002afc11
- (void)link:(id)arg1 didReceivePluginRegistration:(unsigned long long)arg2 pluginName:(id)arg3;	// IMP=0x00100000002afb80
- (void)link:(id)arg1 didReceiveParticipantUpdate:(id)arg2 status:(unsigned short)arg3;	// IMP=0x00100000002afaee
- (void)link:(id)arg1 didAddQREvent:(id)arg2;	// IMP=0x00100000002afa6c
- (void)link:(id)arg1 didReceiveReportEvent:(id)arg2;	// IMP=0x00100000002af8b8
- (void)link:(id)arg1 didReceiveSessionStats:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(_Bool)arg5;	// IMP=0x00100000002af68a
- (void)link:(id)arg1 didFinishConvergenceForRelaySessionID:(id)arg2;	// IMP=0x00100000002af4e7
- (void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 status:(unsigned int)arg5;	// IMP=0x00100000002af2e0
- (void)terminateCallDueToIdleClientForLink:(id)arg1;	// IMP=0x00100000002af15d
- (void)link:(id)arg1 didGetLinkProbingStatus:(id)arg2;	// IMP=0x00100000002af0db
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;	// IMP=0x00100000002aef34
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;	// IMP=0x00100000002aed76
- (void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x00100000002aebcf
- (void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x00100000002aea28
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(_Bool)arg2 currentDefaultLinkID:(BOOL)arg3;	// IMP=0x00100000002ae878
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(id)arg3 reason:(unsigned char)arg4;	// IMP=0x00100000002ae679
- (void)link:(id)arg1 didReceiveReliableUnicastServerMaterial:(id)arg2;	// IMP=0x00100000002ae4d6
- (void)link:(id)arg1 didReceiveChildConnections:(id)arg2 forLinkID:(BOOL)arg3;	// IMP=0x00100000002ae2ff
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5;	// IMP=0x00100000002ae0f2
- (void)link:(id)arg1 didDisconnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000002add4d
- (void)link:(id)arg1 didFailToConnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000002adabe
- (void)link:(id)arg1 didConnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000002ad755
- (void)link:(id)arg1 didReceiveMaterialInfo:(id)arg2 material:(id)arg3;	// IMP=0x00100000002ad587
- (void)link:(id)arg1 didReceiveKeyMaterialMessageData:(id)arg2 fromParticipantIDs:(id)arg3 toParticipantID:(id)arg4;	// IMP=0x00100000002ad38c
- (void)link:(id)arg1 didReceiveSKEData:(id)arg2;	// IMP=0x00100000002ad1a3
- (void)link:(id)arg1 hasSpaceAvailable:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000002ad00c
- (void)link:(id)arg1 hostAwakeDidChange:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000002acf06
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_90727270 *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000002acda3
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000002acbb6
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000002ac6b6
- (void)setIsOnPhoneCall:(_Bool)arg1 forDeviceID:(id)arg2;	// IMP=0x00100000002ac4f6
- (void)requestChildConnectionIDForLinkID:(BOOL)arg1 sessionID:(id)arg2;	// IMP=0x00100000002ac344
- (void)setClientUniquePID:(unsigned long long)arg1 sessionID:(id)arg2;	// IMP=0x00100000002ac196
- (void)reportLinkMetricsForSessionID:(id)arg1 linkID:(unsigned char)arg2 lastPacketReceivedTime:(double)arg3 lastPacketSentTime:(double)arg4;	// IMP=0x00100000002abf7d
- (void)reportLinkEventForSessionID:(id)arg1 eventName:(id)arg2 linkID:(unsigned char)arg3;	// IMP=0x00100000002abd7d
- (void)sendConnectedLinkInfoToAVCForSessionID:(id)arg1;	// IMP=0x00100000002abbd4
- (void)updateParticipantType:(unsigned short)arg1 forSessionID:(id)arg2 sessionStateCounter:(unsigned int)arg3;	// IMP=0x00100000002ab9f9
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000002ab820
- (unsigned long long)createAliasForParticipantID:(unsigned long long)arg1 salt:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000002ab647
- (void)updateSessionURIToParticipantIDs:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 sessionInfo:(id)arg4;	// IMP=0x00100000002ab431
- (void)clearReliableUnicastStateForSession:(id)arg1;	// IMP=0x00100000002ab2f7
- (void)clearPluginCacheForSession:(id)arg1;	// IMP=0x00100000002ab173
- (void)registerPluginForGroup:(id)arg1 relayGroupID:(id)arg2 options:(id)arg3;	// IMP=0x00100000002aae50
- (void)updateSessionParticipants:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participants:(id)arg4;	// IMP=0x00100000002aac3a
- (void)getSessionInfo:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4;	// IMP=0x00100000002aa6c3
- (void)removeParticipantIDsWithSessionID:(id)arg1 participantIDs:(id)arg2 sessionStateCounter:(unsigned int)arg3;	// IMP=0x00100000002aa4c9
- (void)manageDesignatedDestinationsWithSessionID:(id)arg1 destinations:(id)arg2 withType:(unsigned short)arg3 sessionStateCounter:(unsigned int)arg4;	// IMP=0x00100000002aa2aa
- (void)setUPlusOneModeForSessionID:(id)arg1 isUPlusOneEnabled:(_Bool)arg2;	// IMP=0x00100000002aa0bb
- (void)receiveJoinNotificationFromAParticipant:(id)arg1;	// IMP=0x00100000002a9f12
- (void)setRemoteDeviceVersion:(id)arg1 version:(unsigned int)arg2;	// IMP=0x00100000002a9d4e
- (void)sendStatsRequest:(id)arg1 options:(id)arg2;	// IMP=0x00100000002a9b74
- (void)sendStatsRequestForClient:(id)arg1 options:(id)arg2;	// IMP=0x00100000002a999a
- (void)flushLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x00100000002a97c0
- (void)queryLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x00100000002a95e6
- (void)stopLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x00100000002a940c
- (void)startLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x00100000002a9232
- (void)currentCellularSignalStrength:(id)arg1 signalRaw:(int *)arg2 signalStrength:(int *)arg3 signalGrade:(int *)arg4;	// IMP=0x00100000002a906d
- (void)setWiFiAssistState:(id)arg1 isWiFiAssistEnabled:(_Bool)arg2;	// IMP=0x00100000002a8e8f
- (void)stopKeepAlive:(id)arg1 linkIDs:(id)arg2;	// IMP=0x00100000002a8cb5
- (void)updateProtocolQualityOfService:(id)arg1 linkID:(BOOL)arg2 isGood:(_Bool)arg3;	// IMP=0x00100000002a8a97
- (void)dropIPPackets:(id)arg1 linkID:(BOOL)arg2 payloadArray:(id)arg3;	// IMP=0x00100000002a8897
- (void)setPacketNotificationFilter:(id)arg1 linkID:(BOOL)arg2 uniqueTag:(unsigned int)arg3 isEnabled:(_Bool)arg4;	// IMP=0x00100000002a8672
- (void)setDefaultUnderlyingLink:(id)arg1 linkID:(BOOL)arg2;	// IMP=0x00100000002a84a5
- (void)requestMaterialsForSession:(id)arg1 participantIDs:(id)arg2 materialType:(int)arg3;	// IMP=0x00100000002a8219
- (void)setServerDesiredMaterialsForSession:(id)arg1 materials:(id)arg2 signer:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a7f7b
- (void)sendKeyMaterialMessage:(id)arg1 relayGroupID:(id)arg2 keyMaterialMessageData:(id)arg3 destinationURIs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000002a7c7a
- (void)sendSKEData:(id)arg1 skeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a791d
- (void)clearIDSContextBlob:(id)arg1;	// IMP=0x00100000002a7779
- (void)clearCellInterfaceName:(id)arg1;	// IMP=0x00100000002a75d5
- (void)setIDSContextBlob:(id)arg1 forIDSSession:(id)arg2;	// IMP=0x00100000002a735a
- (void)setCellInterfaceName:(id)arg1 forIDSSession:(id)arg2;	// IMP=0x00100000002a70df
- (void)clearSharedSessionHasJoinedForIDSSession:(id)arg1;	// IMP=0x00100000002a6f3b
- (void)setSharedSessionHasJoined:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x00100000002a6c8e
- (void)setForceTCPFallbackOnCell:(id)arg1 forceTCPFallbackOnCell:(_Bool)arg2;	// IMP=0x00100000002a6a7a
- (void)setForceTCPFallbackOnWiFi:(id)arg1 forceTCPFallbackOnWiFi:(_Bool)arg2;	// IMP=0x00100000002a6866
- (void)setAllowP2PforIDSSession:(id)arg1 isEnabled:(_Bool)arg2;	// IMP=0x00100000002a6652
- (void)setIsReliableUnicastSession:(_Bool)arg1 isClient:(_Bool)arg2 forIDSSession:(id)arg3;	// IMP=0x00100000002a64a6
- (void)setTimeBase:(id)arg1 forIDSSession:(id)arg2;	// IMP=0x00100000002a631b
- (void)setHasPendingAllocation:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x00100000002a6107
- (void)setAcceptedRelaySession:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;	// IMP=0x00100000002a5f10
- (void)handleAllocateRequestFailureForDevice:(id)arg1 requestID:(id)arg2 errorCode:(int)arg3;	// IMP=0x00100000002a5d40
- (void)_removeAllocateRequestForDevice:(id)arg1 requestID:(id)arg2;	// IMP=0x00100000002a5ce3
- (void)_addAllocateRequestForDevice:(id)arg1 requestID:(id)arg2;	// IMP=0x00100000002a5ab4
- (void)disconnectGlobalLinkForDevice:(id)arg1 isReinitiating:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a57fc
- (void)connectGlobalLinkForDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3 withLocalInterfacePreference:(int)arg4;	// IMP=0x00100000002a4f68
- (void)stopGlobalLinkForDevice:(id)arg1;	// IMP=0x00100000002a4a19
- (void)startGlobalLinkForDevice:(id)arg1;	// IMP=0x00100000002a4a13
- (void)_startAllocateRequestForDevice:(id)arg1;	// IMP=0x00100000002a4a0d
- (void)stopBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x00100000002a489d
- (void)startBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x00100000002a472d
- (void)startConnectionForDevice:(id)arg1 isInitiator:(_Bool)arg2 remotePartyID:(id)arg3 useStunMICheck:(_Bool)arg4;	// IMP=0x00100000002a44ed
- (void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a4104
- (void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a3d02
- (void)stopUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x00100000002a3a87
- (void)startUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x00100000002a3960
- (void)stopLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 disconnectWP:(_Bool)arg3;	// IMP=0x00100000002a376d
- (void)startLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x00100000002a3459
- (void)setShouldStartBTLinkManager:(_Bool)arg1;	// IMP=0x00100000002a32bc
- (void)setRequireBT:(_Bool)arg1;	// IMP=0x00100000002a3169
- (void)triggerBTCorruptionRecoveryForCBUUID:(id)arg1;	// IMP=0x00100000002a30a0
- (_Bool)isConnectedToDeviceID:(id)arg1;	// IMP=0x00100000002a307c
- (void)setLinkPreferences:(id)arg1;	// IMP=0x00100000002a3066
- (void)setPreferInfraWiFi:(_Bool)arg1;	// IMP=0x00100000002a2b90
- (void)deletePairedDevice:(id)arg1;	// IMP=0x00100000002a26b9
- (void)connectPairedDevice:(id)arg1;	// IMP=0x00100000002a250a
- (void)addPairedDevice:(id)arg1;	// IMP=0x00100000002a2117
- (void)obliterateConnectionInfo;	// IMP=0x00100000002a1bb1
- (void)startLocalSetup;	// IMP=0x00100000002a1a7f
- (void)flushBuffer:(unsigned long long)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000002a1a79
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000002a1883
- (unsigned long long)_sendPacketBuffer:(CDStruct_90727270 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 link:(id)arg4;	// IMP=0x00100000002a1635
- (unsigned long long)sendPacketBuffer:(CDStruct_90727270 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000002a07b2
- (void)_startCellularDataStatusListener:(_Bool)arg1;	// IMP=0x00100000002a07ac
- (void)_startNetworkInterfaceListener:(_Bool)arg1;	// IMP=0x00100000002a0468
- (_Bool)_hasGlobalLinkConnectingOrConnected;	// IMP=0x00100000002a00e5
- (void)_removeAllLinksForDeviceID:(id)arg1;	// IMP=0x00100000002a0025
- (void)_removeLinkForDeviceID:(id)arg1 linkKey:(id)arg2 verifyWithLink:(id)arg3;	// IMP=0x001000000029fd8e
- (void)_bringUpWiFi:(_Bool)arg1;	// IMP=0x001000000029fd88
- (id)_newGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 options:(id)arg3;	// IMP=0x001000000029f3d7
- (id)_newUDPGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x001000000029f0dc
- (id)_newUDPLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 IPVersion:(unsigned long long)arg3 port:(unsigned short)arg4;	// IMP=0x001000000029eccb
- (void)_setBestLinkToCurrent:(id)arg1;	// IMP=0x001000000029e5e0
- (id)_selectBestLink:(id)arg1;	// IMP=0x001000000029e3ec
- (void)_processLinkChangeForDefaultDeviceFrom:(id)arg1 to:(id)arg2;	// IMP=0x001000000029ddeb
- (_Bool)_startUDPLinkHandshakeForDefaultDevice:(_Bool)arg1 immediately:(_Bool)arg2;	// IMP=0x001000000029cfb1
- (void)_sendUDPLinkInterfaceAddresses:(id)arg1 toDeviceID:(id)arg2 isRetransmission:(_Bool)arg3 isReply:(_Bool)arg4;	// IMP=0x001000000029c354
- (void)_processLMCommandPacket:(CDStruct_90727270 *)arg1 fromLink:(id)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x001000000029b458
- (void)_nearbyChangedForDefaultDevice;	// IMP=0x001000000029b247
- (void)_connectivityChangedForDefaultDevice:(_Bool)arg1 isCloudConnected:(_Bool)arg2;	// IMP=0x001000000029a88d
- (void)injectFakePacketInBTLink:(CDStruct_90727270 *)arg1 cbuuid:(id)arg2;	// IMP=0x001000000029a887
- (void)_suspendBTLink:(_Bool)arg1 cbuuid:(id)arg2;	// IMP=0x001000000029a5b0
- (id)_linkKeyForLink:(id)arg1;	// IMP=0x001000000029a4a7
- (void)_createWiFiManagerClient;	// IMP=0x001000000029a4a1
- (void)_startReporter;	// IMP=0x0010000000299ef1
- (id)generateLinkReport:(double)arg1 forceReport:(_Bool)arg2;	// IMP=0x001000000029807a
- (id)copyLinkStatsDict;	// IMP=0x0010000000297d12
- (void)triggerFixedInterfaceLinksDidConnect;	// IMP=0x0010000000297aaa
- (void)start;	// IMP=0x0010000000297863
- (void)dealloc;	// IMP=0x00100000002976e5
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000297224

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

