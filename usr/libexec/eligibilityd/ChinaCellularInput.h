//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ChinaCellularInput
{
    _Bool _chinaCellularDevice;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000019f8
+ (_Bool)_isGreenTeaDeviceCapable;	// IMP=0x00100000000019e7
@property(nonatomic) _Bool chinaCellularDevice; // @synthesize chinaCellularDevice=_chinaCellularDevice;
- (id)description;	// IMP=0x001000000000191c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000017ad
- (unsigned long long)hash;	// IMP=0x001000000000175f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000016fc
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000001694
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000001665
- (id)init;	// IMP=0x00100000000015fd

@end

