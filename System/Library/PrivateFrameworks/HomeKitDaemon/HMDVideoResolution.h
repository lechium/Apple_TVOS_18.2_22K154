//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDVideoResolution : HAPNumberParser
{
    NSNumber *_imageWidth;	// 8 = 0x8
    NSNumber *_imageHeight;	// 16 = 0x10
    unsigned long long _resolutionType;	// 24 = 0x18
}

+ (id)arrayWithResolutions:(id)arg1;	// IMP=0x00100000001942c9
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001942c1
- (void).cxx_destruct;	// IMP=0x000000000019311a
@property(readonly, nonatomic) unsigned long long resolutionType; // @synthesize resolutionType=_resolutionType;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000193096
- (void)_extractWidthAndHeight;	// IMP=0x0000000000192ff0
- (id)initWithResolution:(unsigned long long)arg1;	// IMP=0x0000000000192f92
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000192f26
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000192e8a
- (id)description;	// IMP=0x0000000000192e16
- (unsigned long long)hash;	// IMP=0x0000000000192e04
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000192d81
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000192cea
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000192c2d

@end

