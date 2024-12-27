//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MPPMediaPredicate;

__attribute__((visibility("hidden")))
@interface MPPConditionalPredicate : PBCodable
{
    MPPMediaPredicate *_conditionalPredicate;	// 8 = 0x8
    MPPMediaPredicate *_elsePredicate;	// 16 = 0x10
    MPPMediaPredicate *_thenPredicate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cab1f
@property(retain, nonatomic) MPPMediaPredicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(retain, nonatomic) MPPMediaPredicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(retain, nonatomic) MPPMediaPredicate *conditionalPredicate; // @synthesize conditionalPredicate=_conditionalPredicate;
- (unsigned long long)hash;	// IMP=0x00000000000caa43
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ca97e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ca8ba
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ca7ab
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ca618
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ca60b
- (id)dictionaryRepresentation;	// IMP=0x00000000000ca4ea
- (id)description;	// IMP=0x00000000000ca43b
@property(readonly, nonatomic) _Bool hasElsePredicate;
@property(readonly, nonatomic) _Bool hasThenPredicate;
@property(readonly, nonatomic) _Bool hasConditionalPredicate;
- (void)dealloc;	// IMP=0x00000000000ca396

@end

