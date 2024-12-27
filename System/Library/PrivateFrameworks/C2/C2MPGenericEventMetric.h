//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class C2MPGenericEventMetricValue, NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEventMetric : PBCodable
{
    NSString *_key;	// 8 = 0x8
    C2MPGenericEventMetricValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002656b
@property(retain, nonatomic) C2MPGenericEventMetricValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000264a8
- (unsigned long long)hash;	// IMP=0x000000000002645b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000263a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026305
- (void)copyTo:(id)arg1;	// IMP=0x00000000000262a2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000026245
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000026238
- (id)dictionaryRepresentation;	// IMP=0x0000000000025fbe
- (id)description;	// IMP=0x0000000000025f0f
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

