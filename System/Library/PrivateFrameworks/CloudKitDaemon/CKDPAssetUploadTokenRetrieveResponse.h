//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable
{
    NSData *_authPutResponse;	// 8 = 0x8
    NSMutableArray *_contentResponseHeaders;	// 16 = 0x10
    NSMutableArray *_uploadTokens;	// 24 = 0x18
}

+ (Class)contentResponseHeadersType;	// IMP=0x0010000000378553
+ (Class)uploadTokensType;	// IMP=0x001000000037846c
- (void).cxx_destruct;	// IMP=0x000000000037975c
@property(retain, nonatomic) NSMutableArray *contentResponseHeaders; // @synthesize contentResponseHeaders=_contentResponseHeaders;
@property(retain, nonatomic) NSData *authPutResponse; // @synthesize authPutResponse=_authPutResponse;
@property(retain, nonatomic) NSMutableArray *uploadTokens; // @synthesize uploadTokens=_uploadTokens;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000037947c
- (unsigned long long)hash;	// IMP=0x000000000037940f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000037932f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000378ff9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000378e8d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000378c59
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000378c4c
- (id)dictionaryRepresentation;	// IMP=0x0000000000378613
- (id)description;	// IMP=0x0000000000378564
- (id)contentResponseHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000378536
- (unsigned long long)contentResponseHeadersCount;	// IMP=0x0000000000378519
- (void)addContentResponseHeaders:(id)arg1;	// IMP=0x00000000003784af
- (void)clearContentResponseHeaders;	// IMP=0x0000000000378492
@property(readonly, nonatomic) _Bool hasAuthPutResponse;
- (id)uploadTokensAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037844f
- (unsigned long long)uploadTokensCount;	// IMP=0x0000000000378432
- (void)addUploadTokens:(id)arg1;	// IMP=0x00000000003783c8
- (void)clearUploadTokens;	// IMP=0x00000000003783ab

@end

