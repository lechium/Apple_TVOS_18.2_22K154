//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNSmileDetector : NSObject
{
}

+ (id)detector;	// IMP=0x00800000000719e0
- (int)detectSmileForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 smile:(_Bool *)arg3;	// IMP=0x0000000000071a65
- (int)computeSmileScore:(float *)arg1;	// IMP=0x0000000000071a5a
- (float *)getInputBuffer;	// IMP=0x0000000000071a52

@end

