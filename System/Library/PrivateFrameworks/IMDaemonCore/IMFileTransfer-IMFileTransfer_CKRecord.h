//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMFileTransfer.h>

@interface IMFileTransfer (IMFileTransfer_CKRecord)
+ (_Bool)validateMD5HashForRecord:(id)arg1;	// IMP=0x0080000000171ccd
+ (id)md5HashForRecord:(id)arg1;	// IMP=0x0080000000171b5b
+ (void)cleanUpAssetsOnDiskForRecord:(id)arg1;	// IMP=0x00800000001719dd
+ (_Bool)attachmentRecordHasAsset:(id)arg1;	// IMP=0x008000000017180c
+ (id)transferGUIDOfRecord:(id)arg1;	// IMP=0x008000000017169a
+ (long long)sizeOfAssetForRecord:(id)arg1;	// IMP=0x008000000017150b
+ (id)utiTypeForRecord:(id)arg1;	// IMP=0x0080000000171399
+ (_Bool)_recordIsInvalid:(id)arg1;	// IMP=0x008000000017131a
+ (void)cleanUpAssetURL:(id)arg1;	// IMP=0x008000000016e7a2
+ (void)cleanUpAsset:(id)arg1;	// IMP=0x008000000016e753
+ (id)transferMetaDataFromRecord:(id)arg1;	// IMP=0x008000000016e580
+ (id)_recordType;	// IMP=0x008000000016c86e
- (id)_fileManager;	// IMP=0x00100000001723f6
- (id)initWithCKRecord:(id)arg1 writeAssetToDisk:(_Bool)arg2;	// IMP=0x0010000000170b4d
- (void)moveAssetFromRecord:(id)arg1;	// IMP=0x001000000016f8d1
- (_Bool)hasPreferredAssetOverRecord:(id)arg1;	// IMP=0x001000000016f243
- (_Bool)wantsAssetFromRecord:(id)arg1;	// IMP=0x001000000016e9d1
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x001000000016d2d2
- (long long)backwardsCompatibleTransferState;	// IMP=0x001000000016d298
- (id)recordIDWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x001000000016cf6c
- (void)_setRecordPropertiesBasedOnExistingRecord:(id)arg1;	// IMP=0x001000000016ce9e
- (id)md5HashForTransfer;	// IMP=0x001000000016ce3f
- (id)md5HashForURL:(id)arg1;	// IMP=0x001000000016cc2f
- (id)ckRecordIDFromExistingMetadata;	// IMP=0x001000000016cbc5
- (id)_copyCKRecordFromExistingCKMetadata;	// IMP=0x001000000016ca1f
- (id)_assetURLToInsertToRecord;	// IMP=0x001000000016c87b
- (id)_ckUniqueID;	// IMP=0x001000000016c85c
@end

