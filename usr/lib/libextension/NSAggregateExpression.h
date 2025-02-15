//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

__attribute__((visibility("hidden")))
@interface NSAggregateExpression : NSExpression
{
    id _collection;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000737cc7
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x0000000000738755
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000000007385ec
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000738408
- (unsigned long long)hash;	// IMP=0x00000000007383eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007383a4
- (id)collection;	// IMP=0x0000000000738393
- (id)constantValue;	// IMP=0x0000000000738382
- (id)predicateFormat;	// IMP=0x0000000000738316
- (void)dealloc;	// IMP=0x00000000007382b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007380ca
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000737ed6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000737e12
- (void)allowEvaluation;	// IMP=0x0000000000737cda
- (unsigned long long)expressionType;	// IMP=0x0000000000737ccf
- (id)initWithCollection:(id)arg1;	// IMP=0x0000000000737bc5

@end

