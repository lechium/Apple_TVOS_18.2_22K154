//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNSaliencyExtrema : NSObject
{
    struct CGPoint _extrema[4];	// 8 = 0x8
    float _extremeValues[4];	// 72 = 0x48
}

- (struct CGRect)computeRectFromExtremaUsingThreshold:(float)arg1 vImage:(struct vImage_Buffer)arg2;	// IMP=0x000000000021d478
- (void)updateExtrema:(float)arg1 x:(int)arg2 y:(int)arg3;	// IMP=0x000000000021d3cf
- (id)init;	// IMP=0x000000000021d358

@end

