//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDFetchRecordZonesOperation, CKDFetchRecordsOperation, CKDMarkAssetBrokenURLRequestWrapperOperation, CKDModifyRecordZonesOperation, CKDModifyRecordsOperation, CKRecord, CKRecordID, CKRecordZone, CKUploadRequestConfiguration, NSError, NSString;
@protocol CKMarkAssetBrokenOperationCallbacks><CKDOperationCallbackProxy;

@interface CKDMarkAssetBrokenOperation
{
    _Bool _touchRepairZone;	// 8 = 0x8
    _Bool _bypassPCSEncryptionForTouchRepairZone;	// 9 = 0x9
    _Bool _simulateCorruptAsset;	// 10 = 0xa
    _Bool _writeRepairRecord;	// 11 = 0xb
    CDUnknownBlockType _assetOrPackageMarkedBrokenBlock;	// 16 = 0x10
    CKUploadRequestConfiguration *_uploadRequestConfiguration;	// 24 = 0x18
    CKRecordID *_recordID;	// 32 = 0x20
    NSString *_field;	// 40 = 0x28
    long long _listIndex;	// 48 = 0x30
    CKDFetchRecordsOperation *_fetchOperation;	// 56 = 0x38
    CKDFetchRecordZonesOperation *_zoneFetchOperation;	// 64 = 0x40
    CKDModifyRecordZonesOperation *_zoneCreateOperation;	// 72 = 0x48
    CKDModifyRecordsOperation *_corruptOperation;	// 80 = 0x50
    CKDMarkAssetBrokenURLRequestWrapperOperation *_wrapperOperation;	// 88 = 0x58
    CKRecordZone *_repairZone;	// 96 = 0x60
    CKRecord *_record;	// 104 = 0x68
    unsigned long long _numMarkAssetBrokenFailures;	// 112 = 0x70
    NSError *_markAssetBrokenError;	// 120 = 0x78
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x00600000002deda0
- (void).cxx_destruct;	// IMP=0x00000000002e3426
@property(retain, nonatomic) NSError *markAssetBrokenError; // @synthesize markAssetBrokenError=_markAssetBrokenError;
@property(nonatomic) unsigned long long numMarkAssetBrokenFailures; // @synthesize numMarkAssetBrokenFailures=_numMarkAssetBrokenFailures;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) CKRecordZone *repairZone; // @synthesize repairZone=_repairZone;
@property(retain, nonatomic) CKDMarkAssetBrokenURLRequestWrapperOperation *wrapperOperation; // @synthesize wrapperOperation=_wrapperOperation;
@property(retain, nonatomic) CKDModifyRecordsOperation *corruptOperation; // @synthesize corruptOperation=_corruptOperation;
@property(retain, nonatomic) CKDModifyRecordZonesOperation *zoneCreateOperation; // @synthesize zoneCreateOperation=_zoneCreateOperation;
@property(retain, nonatomic) CKDFetchRecordZonesOperation *zoneFetchOperation; // @synthesize zoneFetchOperation=_zoneFetchOperation;
@property(retain, nonatomic) CKDFetchRecordsOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(nonatomic) long long listIndex; // @synthesize listIndex=_listIndex;
@property(retain, nonatomic) NSString *field; // @synthesize field=_field;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) _Bool writeRepairRecord; // @synthesize writeRepairRecord=_writeRepairRecord;
@property(nonatomic) _Bool simulateCorruptAsset; // @synthesize simulateCorruptAsset=_simulateCorruptAsset;
@property(nonatomic) _Bool bypassPCSEncryptionForTouchRepairZone; // @synthesize bypassPCSEncryptionForTouchRepairZone=_bypassPCSEncryptionForTouchRepairZone;
@property(nonatomic) _Bool touchRepairZone; // @synthesize touchRepairZone=_touchRepairZone;
@property(retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // @synthesize uploadRequestConfiguration=_uploadRequestConfiguration;
@property(copy, nonatomic) CDUnknownBlockType assetOrPackageMarkedBrokenBlock; // @synthesize assetOrPackageMarkedBrokenBlock=_assetOrPackageMarkedBrokenBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002e30f9
- (void)main;	// IMP=0x00000000002e30e5
- (id)checkPreconditions;	// IMP=0x00000000002e300b
- (id)assetOrPackageForFetchedRecord;	// IMP=0x00000000002e2e56
- (id)repairContainer;	// IMP=0x00000000002e2a3b
- (void)_markAssetBroken;	// IMP=0x00000000002e15af
- (int)operationType;	// IMP=0x00000000002e15a4
- (void)_breakAsset;	// IMP=0x00000000002e0811
- (void)_touchCreateRepairZone;	// IMP=0x00000000002dff11
- (void)_touchFetchRepairZone;	// IMP=0x00000000002df5fc
- (void)_fetchRecord;	// IMP=0x00000000002dedf6
- (_Bool)makeStateTransition;	// IMP=0x00000000002de92e
- (id)activityCreate;	// IMP=0x00000000002de905
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002de7a0

// Remaining properties
@property(retain, nonatomic) id <CKMarkAssetBrokenOperationCallbacks><CKDOperationCallbackProxy> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

