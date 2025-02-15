//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest
{
    unsigned long long _options;	// 8 = 0x8
    NSMutableArray *_assets;	// 16 = 0x10
    NSData *_authPutRequest;	// 24 = 0x18
    int _authPutType;	// 32 = 0x20
    NSMutableArray *_contentRequestHeaders;	// 40 = 0x28
    CKDPRecordFieldIdentifier *_field;	// 48 = 0x30
    CKDPRecordType *_type;	// 56 = 0x38
    NSMutableArray *_uploads;	// 64 = 0x40
    struct {
        unsigned int options:1;
        unsigned int authPutType:1;
    } _has;	// 72 = 0x48
}

+ (Class)contentRequestHeadersType;	// IMP=0x00100000002a90e7
+ (Class)uploadsType;	// IMP=0x00100000002a9015
+ (Class)assetsType;	// IMP=0x00100000002a8f43
+ (id)options;	// IMP=0x00100000002a8e08
- (void).cxx_destruct;	// IMP=0x00000000002ab1eb
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) NSMutableArray *contentRequestHeaders; // @synthesize contentRequestHeaders=_contentRequestHeaders;
@property(retain, nonatomic) NSMutableArray *uploads; // @synthesize uploads=_uploads;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002aacee
- (unsigned long long)hash;	// IMP=0x00000000002aabe6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002aaa2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002aa524
- (void)copyTo:(id)arg1;	// IMP=0x00000000002aa2a5
- (Class)responseClass;	// IMP=0x00000000002aa294
- (unsigned int)requestTypeCode;	// IMP=0x00000000002aa289
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a9ef5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a9ee8
- (id)dictionaryRepresentation;	// IMP=0x00000000002a9356
- (id)description;	// IMP=0x00000000002a92a7
@property(nonatomic) _Bool hasOptions;
- (int)StringAsAuthPutType:(id)arg1;	// IMP=0x00000000002a91c3
- (id)authPutTypeAsString:(int)arg1;	// IMP=0x00000000002a9178
@property(nonatomic) _Bool hasAuthPutType;
@property(nonatomic) int authPutType; // @synthesize authPutType=_authPutType;
@property(readonly, nonatomic) _Bool hasAuthPutRequest;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a90ca
- (unsigned long long)contentRequestHeadersCount;	// IMP=0x00000000002a90ad
- (void)addContentRequestHeaders:(id)arg1;	// IMP=0x00000000002a9043
- (void)clearContentRequestHeaders;	// IMP=0x00000000002a9026
- (id)uploadsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a8ff8
- (unsigned long long)uploadsCount;	// IMP=0x00000000002a8fdb
- (void)addUploads:(id)arg1;	// IMP=0x00000000002a8f71
- (void)clearUploads;	// IMP=0x00000000002a8f54
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a8f26
- (unsigned long long)assetsCount;	// IMP=0x00000000002a8f09
- (void)addAssets:(id)arg1;	// IMP=0x00000000002a8e9f
- (void)clearAssets;	// IMP=0x00000000002a8e82
@property(readonly, nonatomic) _Bool hasField;
@property(readonly, nonatomic) _Bool hasType;

@end

