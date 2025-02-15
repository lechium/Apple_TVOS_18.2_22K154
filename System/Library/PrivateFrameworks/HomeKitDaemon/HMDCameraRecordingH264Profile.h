//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingH264Profile : HAPNumberParser
{
    long long _h264Profile;	// 8 = 0x8
}

+ (id)arrayWithProfiles:(id)arg1;	// IMP=0x0010000000b04676
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b0466e
@property(readonly, nonatomic) long long h264Profile; // @synthesize h264Profile=_h264Profile;
- (id)initWithH264Profile:(long long)arg1;	// IMP=0x0000000000b045d1
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000b0457a
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000b044de
- (id)description;	// IMP=0x0000000000b0446a
- (unsigned long long)hash;	// IMP=0x0000000000b04458
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b043d5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b0433e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b04281

@end

