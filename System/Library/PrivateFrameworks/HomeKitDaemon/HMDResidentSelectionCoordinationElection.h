//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDPreferredResidentsList, HMDPrimaryElectionCoordinationAddOn, NSSet, NSString;
@protocol HMDResidentDeviceManagerContext, HMDResidentSelectionModeDelegate;

__attribute__((visibility("hidden")))
@interface HMDResidentSelectionCoordinationElection : NSObject
{
    id <HMDResidentSelectionModeDelegate> _delegate;	// 8 = 0x8
    unsigned long long _primaryChangedReason;	// 16 = 0x10
    HMDPrimaryElectionCoordinationAddOn *_coordinationAddOn;	// 24 = 0x18
    id <HMDResidentDeviceManagerContext> _context;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003ebc03
@property(readonly) __weak id <HMDResidentDeviceManagerContext> context; // @synthesize context=_context;
@property(retain) HMDPrimaryElectionCoordinationAddOn *coordinationAddOn; // @synthesize coordinationAddOn=_coordinationAddOn;
@property(readonly) unsigned long long primaryChangedReason; // @synthesize primaryChangedReason=_primaryChangedReason;
@property __weak id <HMDResidentSelectionModeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)primaryElectionAddOn:(id)arg1 didUpdateResidentDevice:(id)arg2;	// IMP=0x00000000003ebb2e
- (void)primaryElectionAddOn:(id)arg1 didUpdateActiveNodes:(id)arg2;	// IMP=0x00000000003ebac3
- (void)primaryElectionAddOn:(id)arg1 didReceivePrimaryResidentUUIDFromLeader:(id)arg2;	// IMP=0x00000000003eba09
- (void)primaryElectionAddOn:(id)arg1 didFailToElectWithError:(id)arg2;	// IMP=0x00000000003eb99e
- (void)primaryElectionAddOn:(id)arg1 didElectPrimaryResident:(id)arg2 confirmed:(_Bool)arg3 electionLogEvent:(id)arg4;	// IMP=0x00000000003eb905
- (id)_residentDeviceWithIdentifier:(id)arg1;	// IMP=0x00000000003eb70c
- (id)sortedResidents;	// IMP=0x00000000003eb5f6
- (void)didUpdateResidentStatus:(id)arg1 residentsFound:(id)arg2 residentsLost:(id)arg3;	// IMP=0x00000000003eb4ad
- (void)didReceiveSelectionMessage:(id)arg1;	// IMP=0x00000000003eb38c
- (void)configureAsAResidentWithRunPrimaryEvaluation:(_Bool)arg1;	// IMP=0x00000000003eb278
- (void)currentDeviceReadyAsAResident;	// IMP=0x00000000003eb164
- (void)didUpdateResidentSelectionModelTo:(id)arg1;	// IMP=0x00000000003eb043
- (void)performSelectionWithPreferredPrimaryResident:(id)arg1 requireAutoUpdate:(_Bool)arg2 reason:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003eaf09
- (_Bool)allowExternalUpdateOfPrimaryResidentTo:(id)arg1 selectionTimestamp:(id)arg2;	// IMP=0x00000000003eae9b
- (id)dumpState;	// IMP=0x00000000003eae4b
- (id)residentsNotPresentInPreferredResidentsList:(id)arg1;	// IMP=0x00000000003ead28
- (_Bool)residentIsLocallyReachable:(id)arg1;	// IMP=0x00000000003eacba
- (void)registerForMessages;	// IMP=0x00000000003eac7d
- (void)primaryResidentChanged:(id)arg1 previousResidentDevice:(id)arg2;	// IMP=0x00000000003eabf2
@property(readonly) HMDPreferredResidentsList *localPreferredResidentsList;
@property(readonly, nonatomic) NSSet *locallyReachableResidents;
- (void)stop;	// IMP=0x00000000003eab5d
- (void)start;	// IMP=0x00000000003eaadc
@property(readonly) unsigned long long currentModeType;
- (id)createElectionAddOnWithContext:(id)arg1;	// IMP=0x00000000003eaa84
- (id)initWithContext:(id)arg1;	// IMP=0x00000000003ea9d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

