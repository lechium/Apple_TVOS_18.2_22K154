//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SECC2MPInternalTestConfig : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000fbfa3
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000fbef6
- (unsigned long long)hash;	// IMP=0x00100000000fbea9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000fbdf1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000fbd53
- (void)copyTo:(id)arg1;	// IMP=0x00100000000fbcf0
- (void)writeTo:(id)arg1;	// IMP=0x00100000000fbc93
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000fbc86
- (id)dictionaryRepresentation;	// IMP=0x00100000000fbc03
- (id)description;	// IMP=0x00100000000fbb54
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

