//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLUsageReportCoordinate : NSObject
{
    double _latitude;	// 8 = 0x8
    double _longitude;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000ae3f19
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000ae3f8c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000ae3f21
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x0010000000ae3ea4

@end

