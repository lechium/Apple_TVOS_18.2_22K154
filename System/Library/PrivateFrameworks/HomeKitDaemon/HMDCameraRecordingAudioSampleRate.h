//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingAudioSampleRate : HAPNumberParser
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithAudioSampleRates:(id)arg1;	// IMP=0x0010000000e8cc16
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000e8cc0e
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e8cb64
- (id)initWithSampleRate:(long long)arg1;	// IMP=0x0000000000e8cb20
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000e8cac9
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000e8ca2d
- (id)description;	// IMP=0x0000000000e8c9b9
- (unsigned long long)hash;	// IMP=0x0000000000e8c9a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e8c924
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e8c88d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e8c7d0

@end

