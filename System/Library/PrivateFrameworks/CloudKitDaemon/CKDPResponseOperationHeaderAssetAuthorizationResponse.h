//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPResponseOperationHeaderAssetAuthorizationResponse : PBCodable
{
    NSData *_authGetResponseBody;	// 8 = 0x8
    NSMutableArray *_responseHeaders;	// 16 = 0x10
    NSString *_responseUUID;	// 24 = 0x18
}

+ (Class)responseHeadersType;	// IMP=0x00100000001c99e1
- (void).cxx_destruct;	// IMP=0x00000000001ca6dd
@property(retain, nonatomic) NSMutableArray *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSData *authGetResponseBody; // @synthesize authGetResponseBody=_authGetResponseBody;
@property(retain, nonatomic) NSString *responseUUID; // @synthesize responseUUID=_responseUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ca4da
- (unsigned long long)hash;	// IMP=0x00000000001ca46d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ca38d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ca188
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ca084
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c9f15
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c9f08
- (id)dictionaryRepresentation;	// IMP=0x00000000001c9aa1
- (id)description;	// IMP=0x00000000001c99f2
- (id)responseHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c99c4
- (unsigned long long)responseHeadersCount;	// IMP=0x00000000001c99a7
- (void)addResponseHeaders:(id)arg1;	// IMP=0x00000000001c993d
- (void)clearResponseHeaders;	// IMP=0x00000000001c9920
@property(readonly, nonatomic) _Bool hasAuthGetResponseBody;
@property(readonly, nonatomic) _Bool hasResponseUUID;

@end

