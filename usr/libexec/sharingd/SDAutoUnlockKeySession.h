//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDate, NSMutableData, NSNumber, NSObject, SDAutoUnlockMacIconCache, SDUnlockMotionDetector, SDUnlockSessionKeyExchangeResponse;
@protocol OS_dispatch_source, OS_os_transaction;

@interface SDAutoUnlockKeySession
{
    _Bool _wifiEnabled;	// 8 = 0x8
    _Bool _needsStrictMotionCheck;	// 9 = 0x9
    _Bool _localDeviceNeedsArming;	// 10 = 0xa
    _Bool _invalidated;	// 11 = 0xb
    _Bool _sentAWDLInfo;	// 12 = 0xc
    _Bool _userRequestRequired;	// 13 = 0xd
    _Bool _sessionCompleted;	// 14 = 0xe
    _Bool _alerted;	// 15 = 0xf
    _Bool _shouldAlertOnNotify;	// 16 = 0x10
    _Bool _promptedForApproval;	// 17 = 0x11
    _Bool _promptingForApproval;	// 18 = 0x12
    _Bool _oldApproveProtocol;	// 19 = 0x13
    _Bool _needsImageData;	// 20 = 0x14
    _Bool _usingImageCache;	// 21 = 0x15
    _Bool _shouldDelayWorkDueToPowerAssertion;	// 22 = 0x16
    _Bool _didDelayWorkDueToPowerAssertion;	// 23 = 0x17
    _Bool _suppressWatchNotification;	// 24 = 0x18
    _Bool _authenticatingForSiri;	// 25 = 0x19
    int _errorRequestingUnlock;	// 28 = 0x1c
    unsigned int _powerAssertionID;	// 32 = 0x20
    int _powerAssertionState;	// 36 = 0x24
    NSArray *_wakeGestureDates;	// 40 = 0x28
    NSDate *_unlockedOnWristDate;	// 48 = 0x30
    NSDate *_phoneUnlockDate;	// 56 = 0x38
    NSNumber *_unlockAllowed;	// 64 = 0x40
    NSObject<OS_os_transaction> *_transaction;	// 72 = 0x48
    CDUnknownBlockType _wifiRequestStartedHandler;	// 80 = 0x50
    long long _remoteCacheID;	// 88 = 0x58
    NSArray *_peerList;	// 96 = 0x60
    NSData *_proxyRequestData;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_assertionTimer;	// 112 = 0x70
    SDUnlockSessionKeyExchangeResponse *_exchangeResponse;	// 120 = 0x78
    NSMutableData *_authPromptIconData;	// 128 = 0x80
    SDAutoUnlockMacIconCache *_iconCache;	// 136 = 0x88
    NSData *_authPromptIconHash;	// 144 = 0x90
    SDUnlockMotionDetector *_motionDetector;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00200000000169c1
@property(retain, nonatomic) SDUnlockMotionDetector *motionDetector; // @synthesize motionDetector=_motionDetector;
@property(nonatomic) _Bool authenticatingForSiri; // @synthesize authenticatingForSiri=_authenticatingForSiri;
@property(nonatomic) _Bool suppressWatchNotification; // @synthesize suppressWatchNotification=_suppressWatchNotification;
@property(nonatomic) _Bool didDelayWorkDueToPowerAssertion; // @synthesize didDelayWorkDueToPowerAssertion=_didDelayWorkDueToPowerAssertion;
@property(nonatomic) _Bool shouldDelayWorkDueToPowerAssertion; // @synthesize shouldDelayWorkDueToPowerAssertion=_shouldDelayWorkDueToPowerAssertion;
@property(nonatomic) _Bool usingImageCache; // @synthesize usingImageCache=_usingImageCache;
@property(nonatomic) _Bool needsImageData; // @synthesize needsImageData=_needsImageData;
@property(retain, nonatomic) NSData *authPromptIconHash; // @synthesize authPromptIconHash=_authPromptIconHash;
@property(retain, nonatomic) SDAutoUnlockMacIconCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) NSMutableData *authPromptIconData; // @synthesize authPromptIconData=_authPromptIconData;
@property(retain, nonatomic) SDUnlockSessionKeyExchangeResponse *exchangeResponse; // @synthesize exchangeResponse=_exchangeResponse;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimer; // @synthesize assertionTimer=_assertionTimer;
@property(copy, nonatomic) NSData *proxyRequestData; // @synthesize proxyRequestData=_proxyRequestData;
@property(copy, nonatomic) NSArray *peerList; // @synthesize peerList=_peerList;
@property(nonatomic) long long remoteCacheID; // @synthesize remoteCacheID=_remoteCacheID;
@property(copy, nonatomic) CDUnknownBlockType wifiRequestStartedHandler; // @synthesize wifiRequestStartedHandler=_wifiRequestStartedHandler;
@property(nonatomic) int powerAssertionState; // @synthesize powerAssertionState=_powerAssertionState;
@property(nonatomic) unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) int errorRequestingUnlock; // @synthesize errorRequestingUnlock=_errorRequestingUnlock;
@property(retain, nonatomic) NSNumber *unlockAllowed; // @synthesize unlockAllowed=_unlockAllowed;
@property(nonatomic) _Bool oldApproveProtocol; // @synthesize oldApproveProtocol=_oldApproveProtocol;
@property(nonatomic) _Bool promptingForApproval; // @synthesize promptingForApproval=_promptingForApproval;
@property(nonatomic) _Bool promptedForApproval; // @synthesize promptedForApproval=_promptedForApproval;
@property(nonatomic) _Bool shouldAlertOnNotify; // @synthesize shouldAlertOnNotify=_shouldAlertOnNotify;
@property(nonatomic) _Bool alerted; // @synthesize alerted=_alerted;
@property(nonatomic) _Bool sessionCompleted; // @synthesize sessionCompleted=_sessionCompleted;
@property(nonatomic) _Bool userRequestRequired; // @synthesize userRequestRequired=_userRequestRequired;
@property(nonatomic) _Bool sentAWDLInfo; // @synthesize sentAWDLInfo=_sentAWDLInfo;
@property(retain, nonatomic) NSDate *phoneUnlockDate; // @synthesize phoneUnlockDate=_phoneUnlockDate;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) _Bool localDeviceNeedsArming; // @synthesize localDeviceNeedsArming=_localDeviceNeedsArming;
@property(nonatomic) _Bool needsStrictMotionCheck; // @synthesize needsStrictMotionCheck=_needsStrictMotionCheck;
@property(retain, nonatomic) NSDate *unlockedOnWristDate; // @synthesize unlockedOnWristDate=_unlockedOnWristDate;
@property(copy, nonatomic) NSArray *wakeGestureDates; // @synthesize wakeGestureDates=_wakeGestureDates;
@property(nonatomic) _Bool wifiEnabled; // @synthesize wifiEnabled=_wifiEnabled;
- (void)logAutoUnlockEnd;	// IMP=0x00100000000164ff
- (void)logAutoUnlockStart;	// IMP=0x00100000000164f9
- (void)invalidateAssertionTimer;	// IMP=0x0010000000016423
- (void)restartAssertionTimer;	// IMP=0x0010000000016212
- (void)releaseIdleSleepAssertion;	// IMP=0x0010000000016173
- (void)declareSystemActivityAssertion;	// IMP=0x0010000000015edf
- (void)sendConfirmationACK;	// IMP=0x0010000000015cc8
- (void)sendSessionAuthToken:(id)arg1 error:(id)arg2;	// IMP=0x00100000000157ff
- (void)sendKeyExchangeRequestWithData:(id)arg1 error:(id)arg2;	// IMP=0x0010000000015511
- (void)sendAuthPromptResponseWithData:(id)arg1 error:(id)arg2;	// IMP=0x0010000000015225
- (void)sendAWDLInfoWithKeyData:(id)arg1 error:(id)arg2;	// IMP=0x0010000000014c17
- (void)handleCleanUpAWDL;	// IMP=0x0010000000014b89
- (void)handleUnlockConfirmation:(id)arg1;	// IMP=0x001000000001473c
- (void)createAuthTokenIfReady;	// IMP=0x0010000000013ec9
- (void)handleSessionKeyExchangeResponse:(id)arg1;	// IMP=0x0010000000013cab
- (void)handleAuthPromptImageData:(id)arg1;	// IMP=0x00100000000139e6
- (void)handleAuthPromptRequest:(id)arg1;	// IMP=0x00100000000134e7
- (_Bool)handleAWDLInfo:(id)arg1;	// IMP=0x0010000000012f00
- (void)handleMessageWithWrapper:(id)arg1;	// IMP=0x0010000000012734
- (void)nq_handleWiFiRequestInvalidated;	// IMP=0x0010000000012695
- (void)nq_handleWiFiRequestStartedWithStartAWDLHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000125dd
- (void)nq_awdlNetworkStarted;	// IMP=0x00100000000123fd
- (void)createWiFiRequest;	// IMP=0x0010000000011c05
- (void)alertOfUnlock;	// IMP=0x0010000000011ae9
- (void)promptForApproval;	// IMP=0x0010000000011ae3
- (void)systemIsActive:(id)arg1;	// IMP=0x001000000001192f
- (void)deviceDisconnected:(id)arg1;	// IMP=0x00100000000116e5
- (void)removeObservers;	// IMP=0x0010000000011692
- (void)addObservers;	// IMP=0x0010000000011594
- (void)postBeganUnlockingNotification;	// IMP=0x0010000000011501
- (void)beginAKSSession;	// IMP=0x00100000000114fb
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x0010000000011335
- (void)keyCanUnlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001132f
- (_Bool)keyInState;	// IMP=0x0010000000011199
- (void)_invalidate;	// IMP=0x0010000000010f05
- (void)invalidateOnQueue;	// IMP=0x0010000000010ec6
- (void)invalidate;	// IMP=0x0010000000010e45
- (id)initWithBLEDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x0010000000010b98

@end

