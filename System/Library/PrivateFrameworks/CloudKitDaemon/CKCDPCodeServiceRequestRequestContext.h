//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKCDPCodeServiceRequestDatabaseOwner, CKCDPCodeServiceRequestOperationGroup, NSString;

@interface CKCDPCodeServiceRequestRequestContext : PBCodable
{
    unsigned long long _dsid;	// 8 = 0x8
    NSString *_applicationBundleId;	// 16 = 0x10
    NSString *_clientInfo;	// 24 = 0x18
    NSString *_containerName;	// 32 = 0x20
    int _databaseEnvironment;	// 40 = 0x28
    CKCDPCodeServiceRequestDatabaseOwner *_databaseOwnerId;	// 48 = 0x30
    int _databaseType;	// 56 = 0x38
    NSString *_deviceId;	// 64 = 0x40
    CKCDPCodeServiceRequestOperationGroup *_operationGroup;	// 72 = 0x48
    NSString *_userAgent;	// 80 = 0x50
    NSString *_userId;	// 88 = 0x58
    struct {
        unsigned int dsid:1;
        unsigned int databaseEnvironment:1;
        unsigned int databaseType:1;
    } _has;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000003d1105
@property(retain, nonatomic) CKCDPCodeServiceRequestDatabaseOwner *databaseOwnerId; // @synthesize databaseOwnerId=_databaseOwnerId;
@property(retain, nonatomic) CKCDPCodeServiceRequestOperationGroup *operationGroup; // @synthesize operationGroup=_operationGroup;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) unsigned long long dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSString *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSString *applicationBundleId; // @synthesize applicationBundleId=_applicationBundleId;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003d0e1c
- (unsigned long long)hash;	// IMP=0x00000000003d0ca6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003d0a56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003d085f
- (void)copyTo:(id)arg1;	// IMP=0x00000000003d06db
- (void)writeTo:(id)arg1;	// IMP=0x00000000003d0561
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003d0554
- (id)dictionaryRepresentation;	// IMP=0x00000000003cfdc4
- (id)description;	// IMP=0x00000000003cfd15
@property(readonly, nonatomic) _Bool hasDatabaseOwnerId;
@property(readonly, nonatomic) _Bool hasOperationGroup;
@property(readonly, nonatomic) _Bool hasUserAgent;
@property(nonatomic) _Bool hasDsid;
@property(readonly, nonatomic) _Bool hasClientInfo;
@property(readonly, nonatomic) _Bool hasApplicationBundleId;
@property(readonly, nonatomic) _Bool hasDeviceId;
- (int)StringAsDatabaseType:(id)arg1;	// IMP=0x00000000003cfb5f
- (id)databaseTypeAsString:(int)arg1;	// IMP=0x00000000003cfb16
@property(nonatomic) _Bool hasDatabaseType;
@property(nonatomic) int databaseType; // @synthesize databaseType=_databaseType;
- (int)StringAsDatabaseEnvironment:(id)arg1;	// IMP=0x00000000003cfa47
- (id)databaseEnvironmentAsString:(int)arg1;	// IMP=0x00000000003cf9f2
@property(nonatomic) _Bool hasDatabaseEnvironment;
@property(nonatomic) int databaseEnvironment; // @synthesize databaseEnvironment=_databaseEnvironment;
@property(readonly, nonatomic) _Bool hasContainerName;
@property(readonly, nonatomic) _Bool hasUserId;

@end

