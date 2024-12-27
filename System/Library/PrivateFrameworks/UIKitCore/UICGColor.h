//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIColor.h"

__attribute__((visibility("hidden")))
@interface UICGColor : UIColor
{
    struct CGColor *_cachedColor;	// 8 = 0x8
}

- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000af46c2
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000af4529
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x0000000000af43c7
- (_Bool)isPatternColor;	// IMP=0x0000000000af43a3
- (double)alphaComponent;	// IMP=0x0000000000af438e
- (struct CGColor *)CGColor;	// IMP=0x0000000000af437d
- (unsigned long long)hash;	// IMP=0x0000000000af435f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af42a8
- (_Bool)_isDeepColor;	// IMP=0x0000000000af419a
- (id)description;	// IMP=0x0000000000af409d
- (id)colorSpaceName;	// IMP=0x0000000000af402f
- (void)setStroke;	// IMP=0x0000000000af3ff3
- (void)setFill;	// IMP=0x0000000000af3fb7
- (void)set;	// IMP=0x0000000000af3f66
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x0000000000af3f16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af3f0b
- (void)dealloc;	// IMP=0x0000000000af3eca
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x0000000000af3e6b

@end

