//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CLAuthSyncVectorClock : PBCodable
{
    NSString *_key;	// 8 = 0x8
    unsigned int _value;	// 16 = 0x10
    struct {
        unsigned int value:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000065ae98
- (unsigned long long)hash;	// IMP=0x001000000065ae46
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000065adc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000065ad28
- (void)copyTo:(id)arg1;	// IMP=0x001000000065acd6
- (void)writeTo:(id)arg1;	// IMP=0x001000000065ac7d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000065ac70
- (id)dictionaryRepresentation;	// IMP=0x001000000065a9e9
- (id)description;	// IMP=0x001000000065a972
@property(nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;
- (void)dealloc;	// IMP=0x001000000065a8d8

@end

