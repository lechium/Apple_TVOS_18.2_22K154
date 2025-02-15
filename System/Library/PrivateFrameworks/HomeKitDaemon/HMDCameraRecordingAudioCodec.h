//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingAudioCodec : HAPNumberParser
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithCodecTypes:(id)arg1;	// IMP=0x0010000000e8bf68
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000e8bf60
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e8bea6
- (id)initWithCodec:(long long)arg1;	// IMP=0x0000000000e8be62
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000e8be0b
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000e8bd6f
- (id)description;	// IMP=0x0000000000e8bcfb
- (unsigned long long)hash;	// IMP=0x0000000000e8bce9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e8bc66
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e8bbcf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e8bb12

@end

