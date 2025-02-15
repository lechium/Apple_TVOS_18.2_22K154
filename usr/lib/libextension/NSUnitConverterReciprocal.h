//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSUnitConverter.h"

__attribute__((visibility("hidden")))
@interface NSUnitConverterReciprocal : NSUnitConverter
{
    double _reciprocalValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000007a9494
@property(readonly) double reciprocalValue; // @synthesize reciprocalValue=_reciprocalValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007a941b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007a938a
- (id)description;	// IMP=0x00000000007a92f4
- (unsigned long long)hash;	// IMP=0x00000000007a9209
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007a91c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007a91b9
- (double)valueFromBaseUnitValue:(double)arg1;	// IMP=0x00000000007a919f
- (double)baseUnitValueFromValue:(double)arg1;	// IMP=0x00000000007a9185
- (id)initWithReciprocalValue:(double)arg1;	// IMP=0x00000000007a9118

@end

