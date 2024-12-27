//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKSizeConstraint : SKConstraint
{
    SKRange *_widthRange;	// 24 = 0x18
    SKRange *_heightRange;	// 32 = 0x20
}

+ (id)constraintWithHeightRange:(id)arg1;	// IMP=0x006000000007b8db
+ (id)constraintWithWidthRange:(id)arg1;	// IMP=0x006000000007b831
+ (id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2;	// IMP=0x006000000007b79d
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007b265
- (void).cxx_destruct;	// IMP=0x000000000007b9d3
@property(copy) SKRange *heightRange; // @synthesize heightRange=_heightRange;
@property(copy) SKRange *widthRange; // @synthesize widthRange=_widthRange;
- (_Bool)isEqualToSizeConstraint:(id)arg1;	// IMP=0x000000000007b642
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007b571
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007b47c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007b33b
- (id)initWithWidthRange:(id)arg1 heightRange:(id)arg2;	// IMP=0x000000000007b26d

@end

