//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPGeometryUtils : NSObject
{
}

+ (struct CGPoint)pointFromNormalizedPoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x0080000000242834
+ (struct CGRect)rectFromMappingNormalizedRect:(struct CGRect)arg1 toBounds:(struct CGRect)arg2;	// IMP=0x008000000024277f
+ (struct CGRect)rectFromMappingNormalizedRect:(struct CGRect)arg1 toBoundsOfSize:(struct CGSize)arg2;	// IMP=0x0080000000242729
+ (struct CGRect)normalizedRectForRect:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x008000000024265e
+ (struct CGRect)normalizedRectForRect:(struct CGRect)arg1 inBoundsOfSize:(struct CGSize)arg2;	// IMP=0x0080000000242608

@end

