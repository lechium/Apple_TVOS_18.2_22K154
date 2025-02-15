//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SECSFAPropertyValue;

__attribute__((visibility("hidden")))
@interface SECSFAMatchProperty : PBCodable
{
    NSString *_propertyName;	// 8 = 0x8
    SECSFAPropertyValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003bc50
@property(retain, nonatomic) SECSFAPropertyValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003bb8d
- (unsigned long long)hash;	// IMP=0x000000000003bb40
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003ba88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b9ea
- (void)copyTo:(id)arg1;	// IMP=0x000000000003b987
- (void)writeTo:(id)arg1;	// IMP=0x000000000003b92a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003b760
- (id)dictionaryRepresentation;	// IMP=0x000000000003b6af
- (id)description;	// IMP=0x000000000003b600
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasPropertyName;

@end

