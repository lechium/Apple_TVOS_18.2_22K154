//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceResponseAssetAuthorizationResponseHeaderInfo : PBCodable
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018cb4c
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018ca9f
- (unsigned long long)hash;	// IMP=0x000000000018ca52
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018c99a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018c8fc
- (void)copyTo:(id)arg1;	// IMP=0x000000000018c899
- (void)writeTo:(id)arg1;	// IMP=0x000000000018c83c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018c82f
- (id)dictionaryRepresentation;	// IMP=0x000000000018c642
- (id)description;	// IMP=0x000000000018c593
@property(readonly, nonatomic) _Bool hasHeaderValue;
@property(readonly, nonatomic) _Bool hasHeaderKey;

@end

