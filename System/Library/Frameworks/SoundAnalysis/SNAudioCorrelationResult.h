//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SNAudioCorrelationResult : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001d0c35
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d0bea
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d0b3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d094b
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000001d06e5
- (id)init;	// IMP=0x00000000001d05af
@property(nonatomic) long long channelIndex;
@property(nonatomic) CDStruct_198678f7 peakTime;
@property(nonatomic) double peakValue;
@property(nonatomic) CDStruct_3c1748cc timeRange;

@end

