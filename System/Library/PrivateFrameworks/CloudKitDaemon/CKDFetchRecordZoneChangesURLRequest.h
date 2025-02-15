//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest
{
    _Bool _shouldFetchAssetContent;	// 8 = 0x8
    _Bool _fetchChangesForMergeableValues;	// 9 = 0x9
    NSArray *_recordZoneIDs;	// 16 = 0x10
    NSDictionary *_configurationsByRecordZoneID;	// 24 = 0x18
    long long _changeTypes;	// 32 = 0x20
    NSSet *_desiredAssetKeys;	// 40 = 0x28
    NSDictionary *_supplementalChangeTokenByZoneID;	// 48 = 0x30
    CDUnknownBlockType _recordsChangedBlock;	// 56 = 0x38
    CDUnknownBlockType _recordDeletedBlock;	// 64 = 0x40
    CDUnknownBlockType _zoneAttributesChangedBlock;	// 72 = 0x48
    NSMutableDictionary *_zoneIDsByRequestOperationUUID;	// 80 = 0x50
    NSMutableDictionary *_requestResultsByRecordZoneID;	// 88 = 0x58
    NSMutableDictionary *_nodeErrorsByZoneID;	// 96 = 0x60
    NSMutableArray *_recordResponses;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000003480a4
@property(retain, nonatomic) NSMutableArray *recordResponses; // @synthesize recordResponses=_recordResponses;
@property(retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID; // @synthesize nodeErrorsByZoneID=_nodeErrorsByZoneID;
@property(retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID; // @synthesize requestResultsByRecordZoneID=_requestResultsByRecordZoneID;
@property(retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID; // @synthesize zoneIDsByRequestOperationUUID=_zoneIDsByRequestOperationUUID;
@property(copy, nonatomic) CDUnknownBlockType zoneAttributesChangedBlock; // @synthesize zoneAttributesChangedBlock=_zoneAttributesChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordDeletedBlock; // @synthesize recordDeletedBlock=_recordDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordsChangedBlock; // @synthesize recordsChangedBlock=_recordsChangedBlock;
@property(nonatomic) _Bool fetchChangesForMergeableValues; // @synthesize fetchChangesForMergeableValues=_fetchChangesForMergeableValues;
@property(retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID; // @synthesize supplementalChangeTokenByZoneID=_supplementalChangeTokenByZoneID;
@property(retain, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property(retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void)requestDidComplete;	// IMP=0x0000000000347e33
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000347925
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000347060
- (id)_handleRecordChanges:(id)arg1 deltaChanges:(id)arg2 zoneAttributesChange:(id)arg3 forZoneID:(id)arg4;	// IMP=0x0000000000344e85
- (void)recordUsageForRecordID:(id)arg1 at:(id)arg2;	// IMP=0x0000000000344d88
- (void)recordUsageForDeletedRecordID:(id)arg1 at:(id)arg2;	// IMP=0x0000000000344c8b
- (id)generateRequestOperations;	// IMP=0x0000000000343a1c
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x0000000000343a14
- (_Bool)requestGETPreAuth;	// IMP=0x00000000003439a7
- (id)requestOperationClasses;	// IMP=0x000000000034393b
- (id)zoneIDsToLock;	// IMP=0x0000000000343929
- (_Bool)allowsAnonymousAccount;	// IMP=0x000000000034390f
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x000000000034387e
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x0000000000343555
@property(readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property(readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
- (_Bool)isFullZoneRequest;	// IMP=0x00000000003434bd
- (id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2 configurationsByRecordZoneID:(id)arg3;	// IMP=0x0000000000343366

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

