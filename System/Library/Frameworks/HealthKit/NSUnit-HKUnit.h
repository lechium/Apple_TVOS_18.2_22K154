//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUnit.h>

@interface NSUnit (HKUnit)
+ (_Bool)hk_equalConstant:(double)arg1 forUnit:(id)arg2;	// IMP=0x005000000005edac
+ (_Bool)hk_equalCoefficient:(double)arg1 forUnit:(id)arg2;	// IMP=0x005000000005ed69
+ (id)hk_prefixForCoefficient:(double)arg1;	// IMP=0x005000000005eb58
+ (_Bool)hk_isSIUnit:(id)arg1;	// IMP=0x005000000005eab1
+ (double)hk_conversionConstant:(id)arg1;	// IMP=0x005000000005e746
+ (double)hk_conversionCoefficient:(id)arg1;	// IMP=0x005000000005d77b
- (id)hk_convertQuantityWithValue:(double)arg1 constant:(double)arg2 coefficient:(double)arg3;	// IMP=0x001000000005f077
- (id)hk_equivalentQuantityWithValue:(double)arg1;	// IMP=0x001000000005ef0d
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;	// IMP=0x001000000005ef05
- (id)hk_equivalentBaseUnit;	// IMP=0x001000000005eefd
- (id)hk_equivalentUnit;	// IMP=0x001000000005edef
@end

