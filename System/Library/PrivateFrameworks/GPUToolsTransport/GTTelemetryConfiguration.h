//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTTelemetryConfiguration : NSObject
{
    float _reportFrequencyInSeconds;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000034c9d
@property(nonatomic) float reportFrequencyInSeconds; // @synthesize reportFrequencyInSeconds=_reportFrequencyInSeconds;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034d83
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034cfa
- (id)init;	// IMP=0x0000000000034ca5

@end

