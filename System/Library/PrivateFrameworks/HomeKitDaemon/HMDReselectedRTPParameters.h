//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDReselectedRTPParameters : HAPTLVBase
{
    NSNumber *_maximumBitrate;	// 8 = 0x8
    NSNumber *_minimumBitrate;	// 16 = 0x10
    NSNumber *_rtcpInterval;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001a0b5a
- (void).cxx_destruct;	// IMP=0x00000000001a0b18
@property(readonly, copy, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property(readonly, copy, nonatomic) NSNumber *minimumBitrate; // @synthesize minimumBitrate=_minimumBitrate;
@property(readonly, copy, nonatomic) NSNumber *maximumBitrate; // @synthesize maximumBitrate=_maximumBitrate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a0a02
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a07b1
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001a0663
- (_Bool)_parseFromTLVData;	// IMP=0x00000000001a04cc
@property(readonly, copy) NSData *tlvData;
- (id)initWithMaximumBitrate:(id)arg1 minimumBitrate:(id)arg2 rtcpInterval:(id)arg3;	// IMP=0x00000000001a02d2

@end

