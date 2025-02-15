//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, NSData, NSNumber;

@interface CKDAssetZoneKey : NSObject
{
    _Bool _isPackageRereference;	// 8 = 0x8
    CKRecordZoneID *_destinationZoneID;	// 16 = 0x10
    CKRecordZoneID *_sourceZoneID;	// 24 = 0x18
    long long _sourceDatabaseScope;	// 32 = 0x20
    NSNumber *_useMMCSEncryptionV2;	// 40 = 0x28
    NSData *_cloneContext;	// 48 = 0x30
    long long _destinationDatabaseScope;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001124f0
@property(readonly, nonatomic) long long destinationDatabaseScope; // @synthesize destinationDatabaseScope=_destinationDatabaseScope;
@property(readonly, nonatomic) _Bool isPackageRereference; // @synthesize isPackageRereference=_isPackageRereference;
@property(retain, nonatomic) NSData *cloneContext; // @synthesize cloneContext=_cloneContext;
@property(readonly, nonatomic) NSNumber *useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property(readonly, nonatomic) long long sourceDatabaseScope; // @synthesize sourceDatabaseScope=_sourceDatabaseScope;
@property(readonly, nonatomic) CKRecordZoneID *sourceZoneID; // @synthesize sourceZoneID=_sourceZoneID;
@property(readonly, nonatomic) CKRecordZoneID *destinationZoneID; // @synthesize destinationZoneID=_destinationZoneID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011248f
- (unsigned long long)hash;	// IMP=0x0000000000112450
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000112343
- (id)description;	// IMP=0x0000000000112331
- (id)CKPropertiesDescription;	// IMP=0x000000000011211e
@property(readonly, nonatomic) _Bool isCrossOwner;
@property(readonly, nonatomic) _Bool isReReference;
- (int)authPutType;	// IMP=0x00000000001120bb
- (id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2 usesMMCSEncryptionV2:(id)arg3 sourceZoneID:(id)arg4 sourceDatabaseScope:(long long)arg5 isPackageRereference:(_Bool)arg6;	// IMP=0x0000000000111fe7
- (id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2 usesMMCSEncryptionV2:(id)arg3;	// IMP=0x0000000000111fc9

@end

