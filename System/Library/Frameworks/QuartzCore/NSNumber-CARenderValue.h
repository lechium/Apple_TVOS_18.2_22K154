//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@interface NSNumber (CARenderValue)
- (unsigned long long)CA_copyNumericValue:(double *)arg1;	// IMP=0x00600000000583cf
- (unsigned long long)CA_numericValueCount;	// IMP=0x00600000000583c4
- (struct Object *)CA_copyRenderValue;	// IMP=0x0060000000058374
- (double)CA_distanceToValue:(id)arg1;	// IMP=0x006000000023bcdd
- (id)CA_roundToIntegerFromValue:(id)arg1;	// IMP=0x006000000023bc72
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;	// IMP=0x006000000023bb45
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;	// IMP=0x006000000023baca
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;	// IMP=0x006000000023ba68
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x00600000002971c5
- (id)CAMLType;	// IMP=0x0060000000297165
@end

