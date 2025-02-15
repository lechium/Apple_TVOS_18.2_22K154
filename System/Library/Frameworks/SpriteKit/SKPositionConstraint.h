//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKPositionConstraint : SKConstraint
{
    SKRange *_xRange;	// 24 = 0x18
    SKRange *_yRange;	// 32 = 0x20
}

+ (id)constraintWithYRange:(id)arg1;	// IMP=0x006000000007e0a4
+ (id)constraintWithXRange:(id)arg1;	// IMP=0x006000000007dffa
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x006000000007df66
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007da2e
- (void).cxx_destruct;	// IMP=0x000000000007e19c
@property(copy) SKRange *yRange; // @synthesize yRange=_yRange;
@property(copy) SKRange *xRange; // @synthesize xRange=_xRange;
- (_Bool)isEqualToPositionConstraint:(id)arg1;	// IMP=0x000000000007de0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007dd3a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007dc45
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007db04
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x000000000007da36

@end

