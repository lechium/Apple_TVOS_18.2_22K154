//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface VSImageScaleValueTransformer : NSValueTransformer
{
    struct CGSize _preferredSize;	// 8 = 0x8
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x006000000000853a
+ (Class)transformedValueClass;	// IMP=0x0060000000008529
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000008542

@end

