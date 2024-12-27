//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDDecryptRecordsOperation
{
    _Bool _forcePCSDecrypt;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    _Bool _markedToFinish;	// 10 = 0xa
    NSMutableArray *_outstandingDecryptions;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_recordDecryptGroup;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_recordDecryptQueue;	// 32 = 0x20
    unsigned long long _maxUnwrapAttempts;	// 40 = 0x28
    NSDictionary *_webSharingIdentityDataByRecordID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000036a5f4
@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(nonatomic) unsigned long long maxUnwrapAttempts; // @synthesize maxUnwrapAttempts=_maxUnwrapAttempts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordDecryptQueue; // @synthesize recordDecryptQueue=_recordDecryptQueue;
@property(getter=isMarkedToFinish) _Bool markedToFinish; // @synthesize markedToFinish=_markedToFinish;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup; // @synthesize recordDecryptGroup=_recordDecryptGroup;
@property(retain, nonatomic) NSMutableArray *outstandingDecryptions; // @synthesize outstandingDecryptions=_outstandingDecryptions;
@property(nonatomic) _Bool forcePCSDecrypt; // @synthesize forcePCSDecrypt=_forcePCSDecrypt;
- (_Bool)supportsClearAssetEncryption;	// IMP=0x000000000036a4d2
- (void)main;	// IMP=0x000000000036a266
- (id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4;	// IMP=0x000000000036a04c
- (void)_finishDecryptOperation;	// IMP=0x0000000000369c57
- (void)finishDecryption;	// IMP=0x0000000000369ad0
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000036965b
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x0000000000368b85
- (id)_unwrapEncryptedPropertiesForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x0000000000367f27
- (id)_unwrapMergeableRecordValue:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;	// IMP=0x0000000000367bfa
- (id)_unwrapPackageAssets:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;	// IMP=0x0000000000367a3d
- (id)_unwrapAssetKeyForAsset:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;	// IMP=0x0000000000367655
- (void)_handleProtectionDataForRecordInfo:(id)arg1;	// IMP=0x000000000036727e
- (void)_handleShareProtectionDataForRecordInfo:(id)arg1;	// IMP=0x0000000000365c95
- (id)_decryptRecordPCSForRecord:(id)arg1 usingChainPCS:(id)arg2;	// IMP=0x00000000003655ce
- (id)_decryptRecordPCSForRecord:(id)arg1 usingSharePCS:(id)arg2;	// IMP=0x000000000036519e
- (id)_decryptRecordPCSForRecord:(id)arg1 usingZonePCS:(id)arg2;	// IMP=0x000000000036485f
- (void)_handleZoneProtectionDataForRecordInfo:(id)arg1;	// IMP=0x0000000000363d3e
- (void)_decryptRecordInfo:(id)arg1 usingWebSharingIdentityData:(id)arg2;	// IMP=0x0000000000363891
- (void)_decryptRecordInfo:(id)arg1;	// IMP=0x000000000036318f
- (void)_clearProtectionDataForRecordInfo:(id)arg1;	// IMP=0x0000000000362f2f
- (_Bool)shouldCheckAppVersion;	// IMP=0x0000000000362f27
- (void)_recordInfoWasDecrypted:(id)arg1 nextSteps:(CDUnknownBlockType)arg2;	// IMP=0x0000000000362956
- (void)decryptRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000036250e
- (id)activityCreate;	// IMP=0x00000000003624e5
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000003623a3

@end

