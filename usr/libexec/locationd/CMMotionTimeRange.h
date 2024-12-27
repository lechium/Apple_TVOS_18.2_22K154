//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface CMMotionTimeRange
{
    NSDate *fStartDate;	// 16 = 0x10
    NSDate *fEndDate;	// 24 = 0x18
}

+ (CDStruct_2c43369c)CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1;	// IMP=0x0040000000e98114
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:(CDStruct_2c43369c)arg1;	// IMP=0x0010000000e980cf
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000e97f06
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;	// IMP=0x0010000000e98031
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000e97fd2
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000e97f0e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000e97e7e
- (void)dealloc;	// IMP=0x0010000000e97e26
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;	// IMP=0x0010000000e97d80

@end

