//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAPAccessoryServerBTLE.h"

@class HAPAccessoryProtocolInfo, HAPAuthSession, HAPBLEAccessoryCache, HAPCharacteristic, HAPPairSetupSession, HAPSecuritySession, HMFTimer, NSError, NSMapTable, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, _HAPBTLEDiscoveryContext;

__attribute__((visibility("hidden")))
@interface _HAPAccessoryServerBTLE200 : HAPAccessoryServerBTLE
{
    _Bool _hasValidCache;	// 32 = 0x20
    _Bool _hasBeenDiscovered;	// 33 = 0x21
    _Bool _verified;	// 34 = 0x22
    _Bool _badPairSetupCode;	// 35 = 0x23
    _Bool _pairing;	// 36 = 0x24
    _Bool _authenticated;	// 37 = 0x25
    unsigned char _featureFlags;	// 38 = 0x26
    HAPSecuritySession *_securitySession;	// 40 = 0x28
    long long _connectionState;	// 48 = 0x30
    HAPBLEAccessoryCache *_accessoryCache;	// 56 = 0x38
    CDUnknownBlockType _connectionCompletionHandler;	// 64 = 0x40
    HMFTimer *_connectionIdleTimer;	// 72 = 0x48
    _HAPBTLEDiscoveryContext *_discoveryContext;	// 80 = 0x50
    long long _discoveryRetries;	// 88 = 0x58
    HAPCharacteristic *_identifyCharacteristic;	// 96 = 0x60
    HAPPairSetupSession *_pairSetupSession;	// 104 = 0x68
    double _pairSetupBackoffTimeInterval;	// 112 = 0x70
    CDUnknownBlockType _setupCodeCompletionHandler;	// 120 = 0x78
    NSError *_pairingDisconnectionError;	// 128 = 0x80
    HAPAuthSession *_authSession;	// 136 = 0x88
    HAPAccessoryProtocolInfo *_authenticatedProtocolInfo;	// 144 = 0x90
    HAPCharacteristic *_pairingFeaturesCharacteristic;	// 152 = 0x98
    HAPCharacteristic *_pairSetupCharacteristic;	// 160 = 0xa0
    HAPCharacteristic *_pairVerifyCharacteristic;	// 168 = 0xa8
    NSOperationQueue *_pairVerifyOperationQueue;	// 176 = 0xb0
    HAPCharacteristic *_pairingsCharacteristic;	// 184 = 0xb8
    NSMutableArray *_pendingRequests;	// 192 = 0xc0
    NSOperationQueue *_requestOperationQueue;	// 200 = 0xc8
    NSMutableArray *_pendingResponses;	// 208 = 0xd0
    NSMapTable *_characteristicWriteCompletionHandlers;	// 216 = 0xd8
    NSMapTable *_characteristicEnableEventCompletionHandlers;	// 224 = 0xe0
    NSMutableSet *_discoveredAccessoryCharacteristicsPendingRead;	// 232 = 0xe8
    NSMutableArray *_operationsReceivedDuringConnectionStateChange;	// 240 = 0xf0
}

+ (id)logCategory;	// IMP=0x00100000000e4e99
+ (_Bool)parseCharacteristicConfigurationResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e4a99
+ (id)configurationRequestForCharacteristic:(id)arg1 isBroadcasted:(_Bool)arg2 interval:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00100000000e487f
+ (_Bool)parseProtocolConfigurationResponse:(id)arg1 key:(id *)arg2 stateNumber:(id *)arg3 error:(id *)arg4;	// IMP=0x00100000000e3ff9
+ (id)configurationRequestForService:(id)arg1 configRequestType:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x00100000000e3c13
+ (_Bool)parseWriteResponse:(id)arg1 value:(id *)arg2 error:(id *)arg3;	// IMP=0x00100000000e3949
+ (id)executeWriteRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e3770
+ (id)prepareWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 error:(id *)arg6;	// IMP=0x00100000000e3499
+ (id)writeRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 error:(id *)arg6;	// IMP=0x00100000000e31b1
+ (id)extractNotificationContextFromBodyData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e305c
+ (id)extractSerializedRequestValueFromBodyData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e2f14
+ (_Bool)parseReadResponse:(id)arg1 value:(id *)arg2 notificationContext:(id *)arg3 error:(id *)arg4;	// IMP=0x00100000000e297c
+ (id)readRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e27c8
+ (_Bool)isHAPDescriptor:(id)arg1;	// IMP=0x00100000000e2749
+ (_Bool)isHAPService:(id)arg1;	// IMP=0x00100000000e20e6
+ (id)parseServiceSignatureResponse:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000e1bb0
+ (id)parseSignatureResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e0d7d
+ (id)signatureRequestForService:(id)arg1 characteristic:(id)arg2 requiresAuthentication:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000e0d11
+ (id)signatureRequestForCharacteristic:(id)arg1 requiresAuthentication:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000e0ca6
- (void).cxx_destruct;	// IMP=0x00000000000ce818
@property(retain, nonatomic) NSMutableArray *operationsReceivedDuringConnectionStateChange; // @synthesize operationsReceivedDuringConnectionStateChange=_operationsReceivedDuringConnectionStateChange;
@property(retain, nonatomic) NSMutableSet *discoveredAccessoryCharacteristicsPendingRead; // @synthesize discoveredAccessoryCharacteristicsPendingRead=_discoveredAccessoryCharacteristicsPendingRead;
@property(nonatomic) unsigned char featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) NSMapTable *characteristicEnableEventCompletionHandlers; // @synthesize characteristicEnableEventCompletionHandlers=_characteristicEnableEventCompletionHandlers;
@property(readonly, nonatomic) NSMapTable *characteristicWriteCompletionHandlers; // @synthesize characteristicWriteCompletionHandlers=_characteristicWriteCompletionHandlers;
@property(readonly, nonatomic) NSMutableArray *pendingResponses; // @synthesize pendingResponses=_pendingResponses;
@property(readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) __weak HAPCharacteristic *pairingsCharacteristic; // @synthesize pairingsCharacteristic=_pairingsCharacteristic;
@property(readonly, nonatomic) NSOperationQueue *pairVerifyOperationQueue; // @synthesize pairVerifyOperationQueue=_pairVerifyOperationQueue;
@property(nonatomic) __weak HAPCharacteristic *pairVerifyCharacteristic; // @synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic;
@property(nonatomic) __weak HAPCharacteristic *pairSetupCharacteristic; // @synthesize pairSetupCharacteristic=_pairSetupCharacteristic;
@property(nonatomic) __weak HAPCharacteristic *pairingFeaturesCharacteristic; // @synthesize pairingFeaturesCharacteristic=_pairingFeaturesCharacteristic;
@property(retain, nonatomic) HAPAccessoryProtocolInfo *authenticatedProtocolInfo; // @synthesize authenticatedProtocolInfo=_authenticatedProtocolInfo;
@property(retain, nonatomic) HAPAuthSession *authSession; // @synthesize authSession=_authSession;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSError *pairingDisconnectionError; // @synthesize pairingDisconnectionError=_pairingDisconnectionError;
@property(nonatomic, getter=isPairing) _Bool pairing; // @synthesize pairing=_pairing;
@property(copy, nonatomic) CDUnknownBlockType setupCodeCompletionHandler; // @synthesize setupCodeCompletionHandler=_setupCodeCompletionHandler;
@property(nonatomic, getter=isBadSetupCode) _Bool badPairSetupCode; // @synthesize badPairSetupCode=_badPairSetupCode;
@property(nonatomic) double pairSetupBackoffTimeInterval; // @synthesize pairSetupBackoffTimeInterval=_pairSetupBackoffTimeInterval;
@property(retain, nonatomic) HAPPairSetupSession *pairSetupSession; // @synthesize pairSetupSession=_pairSetupSession;
@property(nonatomic) __weak HAPCharacteristic *identifyCharacteristic; // @synthesize identifyCharacteristic=_identifyCharacteristic;
@property(nonatomic, getter=isVerified) _Bool verified; // @synthesize verified=_verified;
@property(nonatomic) long long discoveryRetries; // @synthesize discoveryRetries=_discoveryRetries;
@property(retain, nonatomic) _HAPBTLEDiscoveryContext *discoveryContext; // @synthesize discoveryContext=_discoveryContext;
@property(retain, nonatomic) HMFTimer *connectionIdleTimer; // @synthesize connectionIdleTimer=_connectionIdleTimer;
@property(copy, nonatomic) CDUnknownBlockType connectionCompletionHandler; // @synthesize connectionCompletionHandler=_connectionCompletionHandler;
@property(retain, nonatomic) HAPBLEAccessoryCache *accessoryCache; // @synthesize accessoryCache=_accessoryCache;
- (void)disconnect;	// IMP=0x00000000000ce39b
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000000ce06c
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x00000000000cdf8e
- (void)_updateLastKeyBagIdentityIndexFailingPVWithError:(id)arg1;	// IMP=0x00000000000cddcc
- (_Bool)_shouldIgnoreRetryDiscoveryError:(id)arg1;	// IMP=0x00000000000cdd01
- (void)securitySessionDidOpen:(id)arg1;	// IMP=0x00000000000cdc49
- (void)securitySessionIsOpening:(id)arg1;	// IMP=0x00000000000cdb91
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;	// IMP=0x00000000000cdab3
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000cd61d
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;	// IMP=0x00000000000cd4fb
- (void)submitPairVerifyMetricWithError:(id)arg1;	// IMP=0x00000000000cd3e0
- (void)authSession:(id)arg1 authComplete:(id)arg2;	// IMP=0x00000000000cd328
- (void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;	// IMP=0x00000000000cd21b
- (void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;	// IMP=0x00000000000cd10e
- (void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;	// IMP=0x00000000000cd001
- (void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;	// IMP=0x00000000000ccf49
- (void)_notifyDelegatesOfConnectionState:(_Bool)arg1 withError:(id)arg2;	// IMP=0x00000000000cce76
- (void)_notifyDelegatesPairingStopped:(id)arg1;	// IMP=0x00000000000ccda8
- (void)_continuePairingAfterMFiCertValidation;	// IMP=0x00000000000ccd3b
- (void)tearDownSessionOnAuthCompletion;	// IMP=0x00000000000cccca
- (void)provisionToken:(id)arg1;	// IMP=0x00000000000ccb4c
- (void)continueAuthAfterValidation:(_Bool)arg1;	// IMP=0x00000000000cc9a7
- (void)authenticateAccessory;	// IMP=0x00000000000cc936
- (_Bool)_validateProtocolInfo:(id)arg1;	// IMP=0x00000000000cc5d7
- (void)getAccessoryInfo:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cc4db
- (_Bool)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;	// IMP=0x00000000000cc410
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;	// IMP=0x00000000000cc358
- (void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cc27a
- (void)pairSetupSession:(id)arg1 didReceiveProductData:(id)arg2;	// IMP=0x00000000000cc19c
- (void)pairSetupSession:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x00000000000cc0be
- (_Bool)pairSetupSession:(id)arg1 didPairWithPeer:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000cbae8
- (id)pairSetupSession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;	// IMP=0x00000000000cb8fb
- (void)pairSetupSession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;	// IMP=0x00000000000cb81d
- (void)controlOutputStreamDidComplete:(id)arg1;	// IMP=0x00000000000cb774
- (void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x00000000000cb6a1
- (void)controlOutputStreamDidOpen:(id)arg1;	// IMP=0x00000000000cb69b
- (void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cb590
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000cb480
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000cb370
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000cb260
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;	// IMP=0x00000000000cb150
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000cb040
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x00000000000caf30
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;	// IMP=0x00000000000cae52
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x00000000000cac51
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x00000000000cab04
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x00000000000ca9b7
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x00000000000ca86a
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x00000000000ca6f5
- (_Bool)_validateGeneratedBroadcastKey:(id)arg1;	// IMP=0x00000000000ca321
- (void)_generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ca1e1
- (void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ca0fa
- (unsigned long long)numActiveSessionClients;	// IMP=0x00000000000ca0f2
- (unsigned long long)sessionCheckInterval;	// IMP=0x00000000000ca0ea
- (_Bool)doesPeriodicSessionChecks;	// IMP=0x00000000000ca0e2
- (_Bool)isBLELinkConnected;	// IMP=0x00000000000ca0c8
- (void)_handleConnectionIdleTimeout;	// IMP=0x00000000000c9de9
- (void)_suspendConnectionIdleTimer;	// IMP=0x00000000000c9cd6
- (void)_resumeConnectionIdleTimer;	// IMP=0x00000000000c9bc3
- (void)_kickConnectionIdleTimer;	// IMP=0x00000000000c9b86
- (void)handleDisconnectionWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c99e8
- (_Bool)isReadyForOperation:(long long)arg1;	// IMP=0x00000000000c9912
- (void)_handleConnectionWithError:(id)arg1;	// IMP=0x00000000000c96e6
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000c9608
- (void)_restartConnectionIdleTimer:(double)arg1;	// IMP=0x00000000000c9418
- (void)_updateConnectionIdleTime:(unsigned char)arg1;	// IMP=0x00000000000c93aa
- (void)updateConnectionIdleTime:(unsigned char)arg1;	// IMP=0x00000000000c9330
- (void)_disconnectWithDisconnectionError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c8d7f
- (void)_cancelConnectionWithError:(id)arg1;	// IMP=0x00000000000c8a9d
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c89ab
- (id)_decryptData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c8745
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c84ec
- (id)protocolInfoServiceSignatureCharacteristics;	// IMP=0x00000000000c841f
- (void)_handleSecuritySessionSetupExchangeData:(id)arg1;	// IMP=0x00000000000c8097
- (void)_establishSecureSession;	// IMP=0x00000000000c7cf4
- (void)setSecuritySessionOpen:(_Bool)arg1;	// IMP=0x00000000000c7c4c
- (_Bool)isSecuritySessionOpen;	// IMP=0x00000000000c7c08
@property(retain, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
- (void)_invokeOperationsReceivedDuringConnectionStateChangeWithError:(id)arg1;	// IMP=0x00000000000c7851
- (void)evaluateConnectionStateForOperation:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7799
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;	// IMP=0x00000000000c7590
- (void)_resumeAllOperations;	// IMP=0x00000000000c743a
- (void)_suspendAllOperations;	// IMP=0x00000000000c72e1
- (unsigned long long)_outstandingRequests;	// IMP=0x00000000000c7172
- (void)_enqueueRequest:(id)arg1 shouldPrioritize:(_Bool)arg2;	// IMP=0x00000000000c6dfb
- (void)_sendProtocolInfoServiceExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c692f
- (void)_handleResponseData:(id)arg1 fromCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000c5865
- (void)_requestResponseForRequest:(id)arg1;	// IMP=0x00000000000c564f
- (void)_handleWriteCompletionForCharacteristic:(id)arg1 error:(id)arg2;	// IMP=0x00000000000c547a
- (void)_sendData:(id)arg1 toCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5096
- (void)_sendControlPacket:(id)arg1 forRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4cc0
- (unsigned long long)_maximumControlWriteLengthForRequest:(id)arg1;	// IMP=0x00000000000c48b1
- (void)_reallySendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c47d3
- (void)_sendRequest:(id)arg1 shouldPrioritize:(_Bool)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4584
- (id)_pendingResponseForRequest:(id)arg1;	// IMP=0x00000000000c43b1
- (id)_pendingRequestForCharacteristic:(id)arg1;	// IMP=0x00000000000c41de
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3fe0
- (unsigned long long)_getPairSetupType;	// IMP=0x00000000000c3f6f
- (void)_sendPairingRequestData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3d02
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3c24
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2 serverPairingCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3852
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c383d
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3732
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3622
- (void)_pairingCompletedWithError:(id)arg1;	// IMP=0x00000000000c2eb3
- (_Bool)tryPairingPassword:(id)arg1 onboardingSetupPayloadString:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c2df9
- (void)_handlePairingSetupCodeRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2b6f
- (void)_handlePairSetupSessionExchangeData:(id)arg1;	// IMP=0x00000000000c28d9
- (_Bool)stopPairingWithError:(id *)arg1;	// IMP=0x00000000000c2866
- (void)continuePairingAfterAuthPrompt;	// IMP=0x00000000000c27f5
- (_Bool)_parsePairingFeaturesCharacteristic:(id)arg1 authMethod:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000000000c2588
- (void)_getPairingFeaturesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2282
- (void)_checkForAuthPrompt:(_Bool)arg1;	// IMP=0x00000000000c222e
- (void)startPairingWithRequest:(id)arg1;	// IMP=0x00000000000c2142
- (void)_enableBroadcastEvent:(_Bool)arg1 interval:(unsigned long long)arg2 forCharacteristic:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c1cff
- (void)_configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c1739
- (void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c162e
- (void)_configureBroadcastKeyGeneration:(unsigned char)arg1 service:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c12f3
- (void)_handleEventIndicationForCharacteristic:(id)arg1;	// IMP=0x00000000000c1131
- (void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2;	// IMP=0x00000000000c0f5c
- (void)_enableEvent:(_Bool)arg1 toCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c0cfc
- (void)_performEnableEvent:(_Bool)arg1 toCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c0b98
- (void)_enableEvent:(_Bool)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x00000000000c048a
- (void)_enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x00000000000bf32e
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x00000000000bebbf
- (void)markNotifyingCharacteristicUpdatedforCharacteristic:(id)arg1;	// IMP=0x00000000000be8d5
- (void)_performTimedWriteExecuteForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000be507
- (void)_performTimedWritePrepareWithValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000be0dd
- (void)_performTimedWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000bdf95
- (void)_performWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000bdb62
- (void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000bd750
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000bd596
- (void)_readValueForCharacteristic:(id)arg1 options:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bd097
- (void)_updatePropertiesFromCharacteristic:(id)arg1;	// IMP=0x00000000000bcf5b
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bcbbb
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000bca03
- (id)_parseCharacteristic:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bb9c9
- (id)_parseService:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ba565
- (_Bool)shouldVerifyHAPService:(id)arg1;	// IMP=0x00000000000ba324
- (_Bool)shouldVerifyHAPCharacteristic:(id)arg1;	// IMP=0x00000000000b9e87
- (_Bool)isHAPCharacteristic:(id)arg1;	// IMP=0x00000000000b9c36
- (void)_handleReadServiceSignature:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b9a8d
- (void)_handleReadCharacteristicSignature:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b98e4
- (void)_readServiceSignature:(id)arg1;	// IMP=0x00000000000b86ad
- (void)_readCharacteristicSignature:(id)arg1;	// IMP=0x00000000000b77ec
- (id)_getProtocolInfoService;	// IMP=0x00000000000b7629
- (id)_getServiceInstanceID:(id)arg1;	// IMP=0x00000000000b73cf
- (id)_getCharacteristicInstanceID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b7148
- (void)_readCharacteristicSignatures;	// IMP=0x00000000000b6ddb
- (void)_handleUpdateValueForCharacteristic:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b680a
- (void)_handleReadDescriptorValue:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b65ad
- (void)_readDescriptorValue:(id)arg1;	// IMP=0x00000000000b638d
- (void)_handleReadCharacteristicValue:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b6249
- (void)_readCharacteristicValue:(id)arg1;	// IMP=0x00000000000b6028
- (void)_handleDiscoveredDescriptors:(id)arg1;	// IMP=0x00000000000b5ebc
- (void)_handleDiscoveredCharacteristic:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b5c2d
- (void)_discoverCharacteristic:(id)arg1;	// IMP=0x00000000000b5a9c
- (void)_handleReadServiceInstanceId:(id)arg1;	// IMP=0x00000000000b5827
- (void)_handleDiscoveredCharacteristicsForService:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b5427
- (void)_discoverCharacteristicsForService:(id)arg1;	// IMP=0x00000000000b529a
- (void)_handleDiscoveredServices:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b4c9a
- (void)_discoverServices;	// IMP=0x00000000000b4c5b
- (void)_cacheServices:(id)arg1;	// IMP=0x00000000000b47f3
- (id)_serviceCacheFromHAPService:(id)arg1 serviceOrder:(unsigned long long)arg2;	// IMP=0x00000000000b4457
- (id)_hapServicesFromCache;	// IMP=0x00000000000b37f3
- (id)_getCachedService:(id)arg1;	// IMP=0x00000000000b35fa
- (id)_getCBService:(id)arg1 instanceOrder:(unsigned long long)arg2;	// IMP=0x00000000000b31b0
- (id)_getCBCharacteristic:(id)arg1 instanceId:(id)arg2 service:(id)arg3;	// IMP=0x00000000000b2e86
- (void)_handleCompletedDiscovery;	// IMP=0x00000000000b1ac3
- (void)_retryDiscovery;	// IMP=0x00000000000b1921
- (_Bool)_cancelDiscoveryWithError:(id)arg1;	// IMP=0x00000000000b12ff
- (void)_discoverWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0eea
- (void)_readPendingDiscoveredCharacteristicTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b0910
- (void)discoverAccessoriesAndReadCharacteristicTypes:(id)arg1;	// IMP=0x00000000000b0858
- (void)discoverAccessories;	// IMP=0x00000000000b0844
- (void)_removePairingOfAccessoryServerCancelledMidPairing;	// IMP=0x00000000000b0741
- (id)_characteristicForCBCharacteristic:(id)arg1;	// IMP=0x00000000000b051a
- (id)_serviceForCBService:(id)arg1;	// IMP=0x00000000000b0201
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;	// IMP=0x00000000000b014d
- (void)_createPrimaryAccessoryFromAdvertisementData;	// IMP=0x00000000000affc6
- (unsigned long long)hapBLEProtocolVersion;	// IMP=0x00000000000affbb
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
- (void)setHasBeenDiscovered:(_Bool)arg1;	// IMP=0x00000000000aff01
@property(readonly, nonatomic) _Bool hasBeenDiscovered; // @synthesize hasBeenDiscovered=_hasBeenDiscovered;
@property(nonatomic) _Bool hasValidCache; // @synthesize hasValidCache=_hasValidCache;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000000afcfe
- (void)dealloc;	// IMP=0x00000000000afc91
- (void)_resetWithError:(id)arg1;	// IMP=0x00000000000af415
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(_Bool)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13 whbStableIdentifier:(id)arg14;	// IMP=0x00000000000aeadf

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

