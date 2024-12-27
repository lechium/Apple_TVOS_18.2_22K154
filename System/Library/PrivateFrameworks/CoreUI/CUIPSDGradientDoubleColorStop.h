//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CUIPSDGradientDoubleColorStop
{
    struct _psdGradientColor leadOutColor;	// 48 = 0x30
}

+ (id)doubleColorStopWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;	// IMP=0x0010000000027e8f
+ (void)initialize;	// IMP=0x0010000000027e53
- (id)description;	// IMP=0x000000000002823b
- (_Bool)isDoubleStop;	// IMP=0x0000000000028233
- (struct _psdGradientColor)leadOutColor;	// IMP=0x0000000000028213
- (struct _psdGradientColor)leadInColor;	// IMP=0x00000000000281e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000280b0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027f9d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027f4e
- (id)initWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;	// IMP=0x0000000000027eee

@end

