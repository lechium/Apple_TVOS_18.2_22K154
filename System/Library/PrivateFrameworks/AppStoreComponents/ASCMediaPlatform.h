//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ASCMediaPlatform : NSObject
{
    NSNumber *_deviceCornerRadiusFactor;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000377fe
- (void).cxx_destruct;	// IMP=0x0000000000037b6a
@property(readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor; // @synthesize deviceCornerRadiusFactor=_deviceCornerRadiusFactor;
- (id)description;	// IMP=0x0000000000037ac2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000379b0
- (unsigned long long)hash;	// IMP=0x0000000000037935
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003792a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000378ba
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000037806
- (id)initWithDeviceCornerRadiusFactor:(id)arg1;	// IMP=0x000000000003778b

@end

