//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDIDSServerBag, HMDPreferredResidentsList, HMDResidentSelectionInfo, NSBackgroundActivityScheduler, NSString, NSUUID;
@protocol HMDResidentDeviceManagerContext, HMDResidentSelectionManagerDataSource, HMDResidentSelectionManagerDelegate, HMDResidentSelectionMode, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDResidentSelectionManager : NSObject
{
    id <HMDResidentSelectionManagerDelegate> _delegate;	// 8 = 0x8
    id <HMDResidentSelectionMode> _currentResidentSelectionMode;	// 16 = 0x10
    unsigned long long _currentModeType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <HMDResidentSelectionManagerDataSource> _dataSource;	// 40 = 0x28
    id <HMDResidentDeviceManagerContext> _context;	// 48 = 0x30
    HMDResidentSelectionInfo *_residentSelectionInfoFromWorkingStore;	// 56 = 0x38
    NSBackgroundActivityScheduler *_backgroundScheduler;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000008c3c9e
- (void).cxx_destruct;	// IMP=0x00000000008c3156
@property(retain) NSBackgroundActivityScheduler *backgroundScheduler; // @synthesize backgroundScheduler=_backgroundScheduler;
@property(retain) HMDResidentSelectionInfo *residentSelectionInfoFromWorkingStore; // @synthesize residentSelectionInfoFromWorkingStore=_residentSelectionInfoFromWorkingStore;
@property(readonly) __weak id <HMDResidentDeviceManagerContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) id <HMDResidentSelectionManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property unsigned long long currentModeType; // @synthesize currentModeType=_currentModeType;
@property(retain) id <HMDResidentSelectionMode> currentResidentSelectionMode; // @synthesize currentResidentSelectionMode=_currentResidentSelectionMode;
@property __weak id <HMDResidentSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)shortDescription;	// IMP=0x00000000008c300b
- (id)logIdentifier;	// IMP=0x00000000008c2f6a
- (unsigned long long)messageTransportRestriction;	// IMP=0x00000000008c2f5d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) __weak HMDIDSServerBag *idsServerBag;
- (id)minimumHomeKitVersionForResidentSelection;	// IMP=0x00000000008c2d7e
- (void)primarySelectionMode:(id)arg1 didUpdatePreferredResidentsList:(id)arg2;	// IMP=0x00000000008c2d13
- (void)primarySelectionMode:(id)arg1 didUpdateResidentSelectionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c2c85
- (void)primarySelectionMode:(id)arg1 didReceivePrimaryResidentIdsIdentifier:(id)arg2 selectionTimestamp:(id)arg3;	// IMP=0x00000000008c2bf7
- (void)primarySelectionModeReadyAsResident:(id)arg1;	// IMP=0x00000000008c2bab
- (void)primarySelectionMode:(id)arg1 reassertAsCurrentPrimaryWithSelectionTimestamp:(id)arg2;	// IMP=0x00000000008c2b40
- (void)primarySelectionMode:(id)arg1 didUpdateResidentDevice:(id)arg2;	// IMP=0x00000000008c2ad5
- (void)primarySelectionMode:(id)arg1 didUpdateActiveNodes:(id)arg2;	// IMP=0x00000000008c2a6a
- (void)primarySelectionMode:(id)arg1 didFailToSelectWithError:(id)arg2;	// IMP=0x00000000008c29ff
- (void)primarySelectionMode:(id)arg1 didSelectPrimaryResident:(id)arg2 selectionInfo:(id)arg3 selectionLogEvent:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000008c27d2
- (unsigned long long)primaryChangedReason;	// IMP=0x00000000008c278e
- (void)didUpdateResidentSelectionModelTo:(id)arg1;	// IMP=0x00000000008c2554
- (id)residentWithIdentifier:(id)arg1;	// IMP=0x00000000008c2469
- (void)_processSelectedAsPreferredMessage:(id)arg1;	// IMP=0x00000000008c2068
- (void)handleSelectedAsPreferredMessage:(id)arg1;	// IMP=0x00000000008c1cc3
- (id)_idsIdentifierForResidentDeviceWithIdentifier:(id)arg1;	// IMP=0x00000000008c1a87
- (_Bool)residentIsPresentInCurrentAccount:(id)arg1;	// IMP=0x00000000008c1983
- (_Bool)devicesInHomeSupportResidentSelection;	// IMP=0x00000000008c1219
- (void)_removeScheduledAutoModeEvaluation;	// IMP=0x00000000008c11bf
- (void)_scheduleAutoModeEvaluationWithRetryNeeded:(_Bool)arg1;	// IMP=0x00000000008c0edb
- (void)triggerAutoModeEvaluationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c0dba
- (id)createResidentSelectionModeWithType:(unsigned long long)arg1;	// IMP=0x00000000008c0d34
- (void)_handleModeChangeWithPreviousMode:(unsigned long long)arg1;	// IMP=0x00000000008c0b54
- (void)makeSureCurrentModeIsOfType:(unsigned long long)arg1;	// IMP=0x00000000008c0886
- (_Bool)weAreTheOnlyActingResident;	// IMP=0x00000000008c0663
- (_Bool)weAreInResidentSelection;	// IMP=0x00000000008c0626
- (void)evaluateSelectionMode;	// IMP=0x00000000008c03be
- (double)preferredResidentEvaluationDelay;	// IMP=0x00000000008c033d
- (id)notificationCenter;	// IMP=0x00000000008c02ed
- (void)_registerForMessages;	// IMP=0x00000000008c0144
- (_Bool)allowExternalUpdateOfPrimaryResidentTo:(id)arg1 selectionTimestamp:(id)arg2;	// IMP=0x00000000008bff5c
- (id)residentsNotPresentInPreferredResidentsList:(id)arg1;	// IMP=0x00000000008bfebb
- (_Bool)residentIsLocallyReachable:(id)arg1;	// IMP=0x00000000008bfe4d
- (id)locallyReachableResidents;	// IMP=0x00000000008bfdfd
- (id)dumpState;	// IMP=0x00000000008bfdad
- (void)primaryResidentChanged:(id)arg1 previousResidentDevice:(id)arg2;	// IMP=0x00000000008bfbf4
- (void)performSelectionInMode:(unsigned long long)arg1 preferredPrimaryResident:(id)arg2 requireAutoUpdate:(_Bool)arg3 reason:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000008bf917
- (void)didUpdateResidentStatus:(id)arg1 residentsFound:(id)arg2 residentsLost:(id)arg3;	// IMP=0x00000000008bf87a
- (void)didUpdateResidentSelectionVersion;	// IMP=0x00000000008bf73b
- (void)didRemoveResidentsFromHome:(id)arg1;	// IMP=0x00000000008bf4d8
- (void)didAddResidentsToHome:(id)arg1;	// IMP=0x00000000008bf4d2
- (void)currentDeviceReadyAsAResident;	// IMP=0x00000000008bf348
- (void)stop;	// IMP=0x00000000008bf2a5
- (void)start;	// IMP=0x00000000008bf1b4
@property(readonly) HMDPreferredResidentsList *localPreferredResidentsList;
- (id)initWithContext:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000008bf07d
- (id)initWithContext:(id)arg1;	// IMP=0x00000000008bf019

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

