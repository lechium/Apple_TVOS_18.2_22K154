//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDServiceController, IDSEncryptionQueueManager, IDSOTRController, IDSPeerIDManager, IDSPublicKeyStorage, IDSRateLimiter, IDSRegistrationKeyManager, MISSING_TYPE;

@interface IDSEncryptionController : NSObject
{
    IDSRateLimiter *_failedTokenCache;	// 8 = 0x8
    IDSEncryptionQueueManager *_queueManager;	// 16 = 0x10
    IDSPeerIDManager *_peerIDManager;	// 24 = 0x18
    IDSRegistrationKeyManager *_registrationKeyManager;	// 32 = 0x20
    IDSOTRController *_OTRController;	// 40 = 0x28
    IDSPublicKeyStorage *_publicKeyStorage;	// 48 = 0x30
    IDSDAccountController *_accountController;	// 56 = 0x38
    IDSDServiceController *_serviceController;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x004000000033a11a
- (void).cxx_destruct;	// IMP=0x002000000033d432
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPublicKeyStorage *publicKeyStorage; // @synthesize publicKeyStorage=_publicKeyStorage;
@property(retain, nonatomic) IDSOTRController *OTRController; // @synthesize OTRController=_OTRController;
@property(retain, nonatomic) IDSRegistrationKeyManager *registrationKeyManager; // @synthesize registrationKeyManager=_registrationKeyManager;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) IDSEncryptionQueueManager *queueManager; // @synthesize queueManager=_queueManager;
@property(retain, nonatomic) IDSRateLimiter *failedTokenCache; // @synthesize failedTokenCache=_failedTokenCache;
- (void)logRemoteDecryptionErrorForToken:(id)arg1 deviceID:(id)arg2 forURI:(id)arg3 fromURI:(id)arg4 forService:(id)arg5 messageData:(id)arg6 type:(long long)arg7;	// IMP=0x001000000033d180
- (void)logEncryptionErrorForToken:(id)arg1 deviceID:(id)arg2 forURI:(id)arg3 fromURI:(id)arg4 forService:(id)arg5 messageData:(id)arg6 type:(long long)arg7;	// IMP=0x001000000033cfa4
- (void)performSyncBlock:(CDUnknownBlockType)arg1 priority:(long long)arg2;	// IMP=0x001000000033cf2b
- (void)performAsyncBlock:(CDUnknownBlockType)arg1 priority:(long long)arg2;	// IMP=0x001000000033ceb2
- (id)_builderAvoidMainQueue:(_Bool)arg1 forceEncryptionType:(long long)arg2;	// IMP=0x001000000033ce68
- (void)_decryptData:(id)arg1 decryptionContext:(id)arg2 encrypter:(id)arg3 pkType:(long long)arg4 isRetry:(_Bool)arg5 priority:(long long)arg6 replayKey:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000033cb99
- (void)_decryptData:(id)arg1 encrypter:(id)arg2 pkType:(long long)arg3 isRetry:(_Bool)arg4 priority:(long long)arg5 replayKey:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000033c8ff
- (void)_legacyEncryptData:(id)arg1 withEncryptedAttributes:(id)arg2 encrypter:(id)arg3 priority:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000033c7bc
- (_Bool)markForStateResetWithOurURI:(id)arg1 ourPushToken:(id)arg2 theirURI:(id)arg3 theirPushToken:(id)arg4 service:(id)arg5;	// IMP=0x001000000033c220
- (id)OTRDecryptData:(id)arg1 OTRToken:(id)arg2 priority:(long long)arg3 error:(long long *)arg4;	// IMP=0x001000000033c11b
- (id)OTREncryptData:(id)arg1 OTRToken:(id)arg2 priority:(long long)arg3 error:(long long *)arg4;	// IMP=0x001000000033c016
- (_Bool)publicKeyVerifySignedData:(id)arg1 matchesData:(id)arg2 forSignatureType:(long long)arg3 endpoint:(id)arg4 withKeyType:(unsigned int)arg5 keyDiversifier:(id)arg6 priority:(long long)arg7 error:(id *)arg8;	// IMP=0x001000000033beba
- (_Bool)publicKeyVerifySignedData:(id)arg1 matchesData:(id)arg2 forSignatureType:(long long)arg3 endpoint:(id)arg4 priority:(long long)arg5 error:(id *)arg6;	// IMP=0x001000000033be86
- (void)publicKeyVerifySignedData:(id)arg1 matchesData:(id)arg2 forSignatureType:(long long)arg3 identity:(id)arg4 toURI:(id)arg5 pushToken:(id)arg6 service:(id)arg7 localURI:(id)arg8 withKeyType:(unsigned int)arg9 keyDiversifier:(id)arg10 priority:(long long)arg11 completion:(CDUnknownBlockType)arg12 avoidMainQueue:(_Bool)arg13;	// IMP=0x001000000033bc84
- (void)publicKeyVerifySignedData:(id)arg1 matchesData:(id)arg2 forSignatureType:(long long)arg3 identity:(id)arg4 forURI:(id)arg5 pushToken:(id)arg6 service:(id)arg7 localURI:(id)arg8 priority:(long long)arg9 completion:(CDUnknownBlockType)arg10 avoidMainQueue:(_Bool)arg11;	// IMP=0x001000000033bc36
- (id)publicKeyBatchSignDatas:(id)arg1 withSignatureType:(long long)arg2 keyType:(unsigned int)arg3 keyDiversifier:(id)arg4 service:(id)arg5 priority:(long long)arg6 error:(id *)arg7;	// IMP=0x001000000033bade
- (id)publicKeyBatchSignDatas:(id)arg1 withSignatureType:(long long)arg2 service:(id)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x001000000033bab1
- (MISSING_TYPE *)publicKeySignData:withSignatureType:keyType:keyDiversifier:service:priority:error: /* Error: Ran out of types for this method. */;	// IMP=0x001000000033b959
- (id)publicKeySignData:(id)arg1 withSignatureType:(long long)arg2 service:(id)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x001000000033b92c
- (id)legacyPublicKeyDecryptData:(id)arg1 toDeviceID:(id)arg2 priority:(long long)arg3 error:(id *)arg4;	// IMP=0x001000000033b816
- (void)legacyPublicKeyDecryptData:(id)arg1 toDeviceID:(id)arg2 priority:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000033b6bc
- (id)legacyPublicKeyEncryptData:(id)arg1 withEncryptedAttributes:(id)arg2 toDeviceID:(id)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x001000000033b598
- (void)legacyPublicKeyEncryptData:(id)arg1 withEncryptedAttributes:(id)arg2 toDeviceID:(id)arg3 priority:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000033b436
- (void)publicKeyDecryptData:(id)arg1 decryptionContext:(id)arg2 identity:(id)arg3 service:(id)arg4 priority:(long long)arg5 isRetry:(_Bool)arg6 replayKey:(id)arg7 publicKeyType:(long long)arg8 completionBlock:(CDUnknownBlockType)arg9 avoidMainQueue:(_Bool)arg10;	// IMP=0x001000000033b0f6
- (void)legacyPublicKeyDecryptData:(id)arg1 fromURI:(id)arg2 identity:(id)arg3 toURI:(id)arg4 pushToken:(id)arg5 service:(id)arg6 priority:(long long)arg7 isRetry:(_Bool)arg8 replayKey:(id)arg9 completionBlock:(CDUnknownBlockType)arg10 avoidMainQueue:(_Bool)arg11;	// IMP=0x001000000033aeda
- (void)legacyPublicKeyEncryptData:(id)arg1 withEncryptedAttributes:(id)arg2 fromURI:(id)arg3 identity:(id)arg4 toURI:(id)arg5 pushToken:(id)arg6 service:(id)arg7 priority:(long long)arg8 completionBlock:(CDUnknownBlockType)arg9 avoidMainQueue:(_Bool)arg10;	// IMP=0x001000000033acdb
- (void)publicKeyDecryptData:(id)arg1 fromEndpoint:(id)arg2 pkType:(long long)arg3 priority:(long long)arg4 replayKey:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000033aaa3
- (id)publicKeyDecryptData:(id)arg1 fromEndpoint:(id)arg2 pkType:(long long)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x001000000033a949
- (id)offGridKeyDistributionEncryptData:(id)arg1 encryptionContext:(id)arg2 toEndpoint:(id)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x001000000033a803
- (id)legacyPublicKeyEncryptData:(id)arg1 withEncryptedAttributes:(id)arg2 toEndpoint:(id)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x001000000033a6df
- (id)publicKeyEncryptData:(id)arg1 encryptionContext:(id)arg2 forceSizeOptimizations:(_Bool)arg3 resetState:(_Bool)arg4 withEncryptedAttributes:(id)arg5 toEndpoint:(id)arg6 usedEncryptionType:(long long *)arg7 priority:(long long)arg8 metadata:(id *)arg9 error:(id *)arg10;	// IMP=0x001000000033a52d
- (id)initWithPeerIDManager:(id)arg1 registrationKeyManager:(id)arg2 OTRController:(id)arg3 publicKeyStorage:(id)arg4 accountController:(id)arg5 serviceController:(id)arg6 queueManager:(id)arg7 failedTokenCache:(id)arg8;	// IMP=0x001000000033a3ce
- (id)init;	// IMP=0x001000000033a16f

@end

