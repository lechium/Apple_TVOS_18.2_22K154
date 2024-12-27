//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPConfigurationFieldValue : PBCodable
{
    double _doubleValue;	// 8 = 0x8
    long long _longValue;	// 16 = 0x10
    NSData *_bytesValue;	// 24 = 0x18
    NSMutableArray *_fieldValues;	// 32 = 0x20
    NSMutableArray *_listValues;	// 40 = 0x28
    NSString *_stringValue;	// 48 = 0x30
    int _type;	// 56 = 0x38
    _Bool _boolValue;	// 60 = 0x3c
    struct {
        unsigned int doubleValue:1;
        unsigned int longValue:1;
        unsigned int type:1;
        unsigned int boolValue:1;
    } _has;	// 64 = 0x40
}

+ (Class)listValuesType;	// IMP=0x00100000002d6de9
+ (Class)fieldValuesType;	// IMP=0x00100000002d6d17
- (void).cxx_destruct;	// IMP=0x00000000002d892d
@property(retain, nonatomic) NSMutableArray *listValues; // @synthesize listValues=_listValues;
@property(retain, nonatomic) NSMutableArray *fieldValues; // @synthesize fieldValues=_fieldValues;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long longValue; // @synthesize longValue=_longValue;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002d8569
- (unsigned long long)hash;	// IMP=0x00000000002d8383
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d81a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d7de6
- (void)copyTo:(id)arg1;	// IMP=0x00000000002d7bd6
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d78fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d78f0
- (id)dictionaryRepresentation;	// IMP=0x00000000002d6ea9
- (id)description;	// IMP=0x00000000002d6dfa
- (id)listValuesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002d6dcc
- (unsigned long long)listValuesCount;	// IMP=0x00000000002d6daf
- (void)addListValues:(id)arg1;	// IMP=0x00000000002d6d45
- (void)clearListValues;	// IMP=0x00000000002d6d28
- (id)fieldValuesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002d6cfa
- (unsigned long long)fieldValuesCount;	// IMP=0x00000000002d6cdd
- (void)addFieldValues:(id)arg1;	// IMP=0x00000000002d6c73
- (void)clearFieldValues;	// IMP=0x00000000002d6c56
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasLongValue;
@property(nonatomic) _Bool hasBoolValue;
@property(readonly, nonatomic) _Bool hasBytesValue;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000002d6a30
- (id)typeAsString:(int)arg1;	// IMP=0x00000000002d69e5
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

