//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ISHintedValue : NSObject
{
    unsigned long long _options;	// 8 = 0x8
    NSMutableArray *_dimensions;	// 16 = 0x10
    NSMutableArray *_values;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000053017
@property(readonly) NSMutableArray *values; // @synthesize values=_values;
@property(readonly) NSMutableArray *dimensions; // @synthesize dimensions=_dimensions;
@property unsigned long long options; // @synthesize options=_options;
- (double)interpolationFactorForSize:(struct CGSize)arg1;	// IMP=0x0000000000052e75
- (double)scaleFactorForSize:(struct CGSize)arg1;	// IMP=0x0000000000052d3f
- (_Bool)sizeOutsideHintedRange:(struct CGSize)arg1;	// IMP=0x0000000000052c93
- (id)hintedValueForIndex:(long long)arg1;	// IMP=0x0000000000052c31
- (id)hintedValueForSize:(struct CGSize)arg1;	// IMP=0x0000000000052c00
- (void)addHintedValue:(id)arg1 forSize:(struct CGSize)arg2;	// IMP=0x0000000000052a95
- (long long)indexForSize:(struct CGSize)arg1;	// IMP=0x00000000000528f7
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x000000000005284f
- (id)init;	// IMP=0x000000000005283b

@end

