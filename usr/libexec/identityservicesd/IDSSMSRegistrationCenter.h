//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, IDSRateLimiter, IDSRegistrationReasonTracker, IDSRestoreMonitor, IDSUserStore, IMSystemMonitor, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSPreflightStackStore;

@interface IDSSMSRegistrationCenter : NSObject
{
    NSMutableDictionary *_stateMachineByUserID;	// 8 = 0x8
    NSMutableArray *_registrations;	// 16 = 0x10
    NSMutableArray *_handlers;	// 24 = 0x18
    id <IDSPreflightStackStore> _preflightStackStore;	// 32 = 0x20
    IDSPushHandler *_pushHandler;	// 40 = 0x28
    NSMutableSet *_userConsentDeniedForCTPNR;	// 48 = 0x30
    IMSystemMonitor *_systemMonitor;	// 56 = 0x38
    IDSRestoreMonitor *_restoreMonitor;	// 64 = 0x40
    NSMapTable *_CTPNRByConsentCompletion;	// 72 = 0x48
    IDSRateLimiter *_smallWindowSMSTimeoutRateLimiter;	// 80 = 0x50
    IDSRateLimiter *_wideWindowSMSTimeoutRateLimiter;	// 88 = 0x58
    IDSRateLimiter *_registrationAttemptRateLimiter;	// 96 = 0x60
    IDSRegistrationReasonTracker *_registrationReasonTracker;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x00200000001b287b
- (void).cxx_destruct;	// IMP=0x00200000001b6e8e
@property(retain, nonatomic) IDSRegistrationReasonTracker *registrationReasonTracker; // @synthesize registrationReasonTracker=_registrationReasonTracker;
@property(retain, nonatomic) IDSRateLimiter *registrationAttemptRateLimiter; // @synthesize registrationAttemptRateLimiter=_registrationAttemptRateLimiter;
@property(retain, nonatomic) IDSRateLimiter *wideWindowSMSTimeoutRateLimiter; // @synthesize wideWindowSMSTimeoutRateLimiter=_wideWindowSMSTimeoutRateLimiter;
@property(retain, nonatomic) IDSRateLimiter *smallWindowSMSTimeoutRateLimiter; // @synthesize smallWindowSMSTimeoutRateLimiter=_smallWindowSMSTimeoutRateLimiter;
@property(retain, nonatomic) NSMapTable *CTPNRByConsentCompletion; // @synthesize CTPNRByConsentCompletion=_CTPNRByConsentCompletion;
@property(retain, nonatomic) IDSRestoreMonitor *restoreMonitor; // @synthesize restoreMonitor=_restoreMonitor;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(retain, nonatomic) NSMutableSet *userConsentDeniedForCTPNR; // @synthesize userConsentDeniedForCTPNR=_userConsentDeniedForCTPNR;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(readonly, nonatomic) id <IDSPreflightStackStore> preflightStackStore; // @synthesize preflightStackStore=_preflightStackStore;
@property(readonly, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) NSMutableDictionary *stateMachineByUserID; // @synthesize stateMachineByUserID=_stateMachineByUserID;
- (void)_postPendingConsentAlerts;	// IMP=0x00100000001b6aec
- (void)requestUserConsentToValidatePhoneNumberForCTPNR:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b5f89
- (void)_sendABCForFailureForIdentifier:(id)arg1 WithEvent:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001b5de7
- (void)_resetRateLimitersForSMSTimeoutForIdentifier:(id)arg1;	// IMP=0x00100000001b5d88
- (_Bool)_hasThresholdReachedForSMSTimeoutForIdentifier:(id)arg1;	// IMP=0x00100000001b5cff
- (void)validator:(id)arg1 handleABCEvent:(long long)arg2;	// IMP=0x00100000001b5bef
- (void)validator:(id)arg1 failedIdentificationWithRegistrationError:(long long)arg2;	// IMP=0x00100000001b5b46
- (void)validator:(id)arg1 identifiedPhoneNumber:(id)arg2 token:(id)arg3 phoneBookNumber:(id)arg4;	// IMP=0x00100000001b592d
- (id)_identifierForValidator:(id)arg1;	// IMP=0x00100000001b5787
- (void)_notifyNeedsNewIdentification;	// IMP=0x00100000001b558d
- (void)_notifySuccess:(id)arg1 token:(id)arg2 identifier:(id)arg3;	// IMP=0x00100000001b4b14
- (void)_notifyFailureWithError:(long long)arg1 registration:(id)arg2 identifier:(id)arg3;	// IMP=0x00100000001b449b
- (void)removeListener:(id)arg1;	// IMP=0x00100000001b4485
- (void)addListener:(id)arg1;	// IMP=0x00100000001b4403
- (void)_noteRegistrationAttemptForIdentifier:(id)arg1 withRegistrationInfo:(id)arg2;	// IMP=0x00100000001b40ce
- (void)notePhoneNumberRegistrationReset;	// IMP=0x00100000001b3f7e
- (void)_reportDailyPNRStatusForSimSlot:(unsigned long long)arg1;	// IMP=0x00100000001b3a59
- (void)reportDailyMetric;	// IMP=0x00100000001b3a1c
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x00100000001b399e
- (void)_clearConsentDenialsForUniqueIdentifier:(id)arg1;	// IMP=0x00100000001b3841
- (void)clearConsentDenialsForPhoneUser:(id)arg1;	// IMP=0x00100000001b37f2
- (void)clearConsentDenialsForRegistration:(id)arg1;	// IMP=0x00100000001b37a3
- (void)_cleanupUntrackedValidators;	// IMP=0x00100000001b33d3
- (void)sendRegistration:(id)arg1;	// IMP=0x00100000001b2d23
- (void)dealloc;	// IMP=0x00100000001b2b72
- (id)initWithRestoreMonitor:(id)arg1 systemMonitor:(id)arg2;	// IMP=0x00100000001b29b4
- (id)init;	// IMP=0x00100000001b2933
@property(readonly, nonatomic) IDSUserStore *userStore;
@property(readonly, nonatomic) NSArray *validators;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

