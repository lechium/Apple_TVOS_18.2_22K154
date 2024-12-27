//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPredicateOperator.h"

__attribute__((visibility("hidden")))
@interface NSCustomPredicateOperator : NSPredicateOperator
{
    SEL _selector;	// 24 = 0x18
    struct _operatorFlags {
        unsigned int _usesKVC:1;
        unsigned int _validatedSelector:1;
        unsigned int _validatedKeys:1;
        unsigned int _reservedOperatorFlags:29;
    } _operatorFlags;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000076a38d
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;	// IMP=0x000000000076a796
- (id)symbol;	// IMP=0x000000000076a77c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000076a6d7
- (SEL)selector;	// IMP=0x000000000076a6c6
- (unsigned long long)operatorType;	// IMP=0x000000000076a6bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000076a661
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000076a4cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000076a395
- (id)initWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;	// IMP=0x000000000076a30f

@end

