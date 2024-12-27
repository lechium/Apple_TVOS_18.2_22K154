//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAccountInfo, CKContainer, CKKSCondition, CKKSNearFutureScheduler, NSError, NSMapTable, NSString, OTCliqueStatusWrapper, SOSAccountStatus;
@protocol OS_dispatch_queue;

@interface CKKSAccountStateTracker : NSObject
{
    _Bool _firstCKAccountFetch;	// 8 = 0x8
    NSString *_octagonPeerID;	// 16 = 0x10
    CKKSCondition *_finishedInitialDispatches;	// 24 = 0x18
    CKKSNearFutureScheduler *_fetchCKAccountStatusScheduler;	// 32 = 0x20
    CKContainer *_container;	// 40 = 0x28
    CKAccountInfo *_currentCKAccountInfo;	// 48 = 0x30
    CKKSCondition *_ckAccountInfoInitialized;	// 56 = 0x38
    NSString *_ckdeviceID;	// 64 = 0x40
    NSError *_ckdeviceIDError;	// 72 = 0x48
    CKKSCondition *_ckdeviceIDInitialized;	// 80 = 0x50
    SOSAccountStatus *_currentCircleStatus;	// 88 = 0x58
    NSString *_accountCirclePeerID;	// 96 = 0x60
    NSError *_accountCirclePeerIDError;	// 104 = 0x68
    CKKSCondition *_accountCirclePeerIDInitialized;	// 112 = 0x70
    OTCliqueStatusWrapper *_octagonStatus;	// 120 = 0x78
    CKKSCondition *_octagonInformationInitialized;	// 128 = 0x80
    long long _cdpCapableiCloudAccountStatus;	// 136 = 0x88
    CKKSCondition *_cdpCapableiCloudAccountInitialized;	// 144 = 0x90
    Class _nsnotificationCenterClass;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_queue;	// 160 = 0xa0
    NSMapTable *_ckChangeListeners;	// 168 = 0xa8
}

+ (id)stringFromAccountStatus:(long long)arg1;	// IMP=0x002000000003b43e
+ (id)getCircleStatus;	// IMP=0x001000000003b31c
+ (void)fetchCirclePeerID:(CDUnknownBlockType)arg1;	// IMP=0x001000000003b27d
- (void).cxx_destruct;	// IMP=0x0020000000039283
@property _Bool firstCKAccountFetch; // @synthesize firstCKAccountFetch=_firstCKAccountFetch;
@property(retain) NSMapTable *ckChangeListeners; // @synthesize ckChangeListeners=_ckChangeListeners;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) Class nsnotificationCenterClass; // @synthesize nsnotificationCenterClass=_nsnotificationCenterClass;
@property(retain) CKKSCondition *cdpCapableiCloudAccountInitialized; // @synthesize cdpCapableiCloudAccountInitialized=_cdpCapableiCloudAccountInitialized;
@property long long cdpCapableiCloudAccountStatus; // @synthesize cdpCapableiCloudAccountStatus=_cdpCapableiCloudAccountStatus;
@property(retain) CKKSCondition *octagonInformationInitialized; // @synthesize octagonInformationInitialized=_octagonInformationInitialized;
@property(retain) OTCliqueStatusWrapper *octagonStatus; // @synthesize octagonStatus=_octagonStatus;
@property(retain) CKKSCondition *accountCirclePeerIDInitialized; // @synthesize accountCirclePeerIDInitialized=_accountCirclePeerIDInitialized;
@property(retain) NSError *accountCirclePeerIDError; // @synthesize accountCirclePeerIDError=_accountCirclePeerIDError;
@property(retain) NSString *accountCirclePeerID; // @synthesize accountCirclePeerID=_accountCirclePeerID;
@property(retain) SOSAccountStatus *currentCircleStatus; // @synthesize currentCircleStatus=_currentCircleStatus;
@property(retain) CKKSCondition *ckdeviceIDInitialized; // @synthesize ckdeviceIDInitialized=_ckdeviceIDInitialized;
@property(retain) NSError *ckdeviceIDError; // @synthesize ckdeviceIDError=_ckdeviceIDError;
@property(copy) NSString *ckdeviceID; // @synthesize ckdeviceID=_ckdeviceID;
@property(retain) CKKSCondition *ckAccountInfoInitialized; // @synthesize ckAccountInfoInitialized=_ckAccountInfoInitialized;
@property(retain) CKAccountInfo *currentCKAccountInfo; // @synthesize currentCKAccountInfo=_currentCKAccountInfo;
@property(retain) CKContainer *container; // @synthesize container=_container;
@property(readonly) CKKSNearFutureScheduler *fetchCKAccountStatusScheduler; // @synthesize fetchCKAccountStatusScheduler=_fetchCKAccountStatusScheduler;
@property(retain) CKKSCondition *finishedInitialDispatches; // @synthesize finishedInitialDispatches=_finishedInitialDispatches;
@property(retain) NSString *octagonPeerID; // @synthesize octagonPeerID=_octagonPeerID;
- (void)setCDPCapableiCloudAccountStatus:(long long)arg1;	// IMP=0x0010000000038f1e
- (void)triggerOctagonStatusFetch;	// IMP=0x0010000000038d22
- (id)checkForAllDeliveries;	// IMP=0x0010000000038c00
- (void)notifyCircleStatusChangeAndWaitForSignal;	// IMP=0x0010000000038bc2
- (void)notifyCKAccountStatusChangeAndWaitForSignal;	// IMP=0x0010000000038ba9
- (_Bool)notifyCKAccountStatusChangeAndWait:(unsigned long long)arg1;	// IMP=0x0010000000038b5a
- (void)recheckCKAccountStatus;	// IMP=0x0010000000038b1d
- (void)_onqueueDeliverCurrentCloudKitState:(id)arg1 listenerQueue:(id)arg2 oldStatus:(id)arg3 group:(id)arg4;	// IMP=0x00100000000389d5
- (void)_onqueueDeliverCloudKitStateChanges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x0010000000038825
- (void)_onqueueUpdateAccountState:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00100000000383fc
- (void)_onqueueUpdateAccountState:(id)arg1 deliveredSemaphore:(id)arg2;	// IMP=0x0010000000038270
- (void)_onqueueUpdateCirclePeerID:(id)arg1;	// IMP=0x0010000000038086
- (id)notifyCircleChange:(id)arg1;	// IMP=0x0010000000037f8b
- (void)_onqueueUpdateCKDeviceID:(id)arg1;	// IMP=0x0010000000037e06
- (id)notifyCKAccountStatusChange:(id)arg1;	// IMP=0x0010000000037ccb
- (id)registerForNotificationsOfCloudKitAccountStatusChange:(id)arg1;	// IMP=0x0010000000037be2
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)descriptionInternal:(id)arg1;	// IMP=0x0010000000037a46
- (void)dealloc;	// IMP=0x00100000000379cb
- (void)performInitialDispatches;	// IMP=0x0010000000037941
- (id)init:(id)arg1 nsnotificationCenterClass:(Class)arg2;	// IMP=0x0010000000037476

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

