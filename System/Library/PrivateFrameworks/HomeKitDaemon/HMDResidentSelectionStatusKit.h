//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDPreferredResidentsList, HMDResidentDevice, HMDResidentSelectionInfo, HMDResidentStatus, NSArray, NSDictionary, NSSet, NSString;
@protocol HMDResidentDeviceManagerContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDResidentSelectionStatusKit : NSObject
{
    NSDictionary *_residentIDSIdentifierToLocationMap;	// 8 = 0x8
    HMDResidentSelectionInfo *_selectionInfo;	// 16 = 0x10
    NSSet *_wiredResidentIDSIdentifiers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <HMDResidentDeviceManagerContext> _context;	// 40 = 0x28
    NSSet *_residentStatusList;	// 48 = 0x30
    NSArray *_sortedResidentStatuses;	// 56 = 0x38
    HMDResidentStatus *_sourceForPreferredResidentsList;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x001000000070ba0e
- (void).cxx_destruct;	// IMP=0x000000000070b3f8
@property(readonly, nonatomic) HMDResidentStatus *sourceForPreferredResidentsList; // @synthesize sourceForPreferredResidentsList=_sourceForPreferredResidentsList;
@property(readonly, nonatomic) NSArray *sortedResidentStatuses; // @synthesize sortedResidentStatuses=_sortedResidentStatuses;
@property(readonly, nonatomic) NSSet *residentStatusList; // @synthesize residentStatusList=_residentStatusList;
@property(readonly, nonatomic) __weak id <HMDResidentDeviceManagerContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSSet *wiredResidentIDSIdentifiers; // @synthesize wiredResidentIDSIdentifiers=_wiredResidentIDSIdentifiers;
@property(readonly, nonatomic) HMDResidentSelectionInfo *selectionInfo; // @synthesize selectionInfo=_selectionInfo;
@property(readonly, nonatomic) NSDictionary *residentIDSIdentifierToLocationMap; // @synthesize residentIDSIdentifierToLocationMap=_residentIDSIdentifierToLocationMap;
- (id)logIdentifier;	// IMP=0x000000000070b2fb
- (id)wiredResidentIDSIdentifiersIn:(id)arg1;	// IMP=0x000000000070b165
- (id)selectionInfoWithLatestTimestampIn:(id)arg1;	// IMP=0x000000000070afd2
- (id)residentIDSIdentifierToLocationMapFrom:(id)arg1;	// IMP=0x000000000070aefe
- (CDUnknownBlockType)comparatorForPreferredResidentsListSource;	// IMP=0x000000000070aef1
- (id)sortResidentStatuses:(id)arg1;	// IMP=0x000000000070ae6e
@property(readonly) HMDResidentDevice *elector;
- (id)residentStatusWithValidPreferredResidentsListIn:(id)arg1;	// IMP=0x000000000070ab39
@property(readonly, nonatomic) HMDPreferredResidentsList *preferredResidentsList;
- (id)initWithWithContext:(id)arg1 residentStatusList:(id)arg2;	// IMP=0x000000000070a94c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

