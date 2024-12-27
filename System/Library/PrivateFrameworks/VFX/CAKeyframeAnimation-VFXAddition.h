//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAKeyframeAnimation.h>

@class NSData;

@interface CAKeyframeAnimation (VFXAddition)
- (_Bool)VFX_evaluateAtTime:(double)arg1 reverse:(_Bool)arg2 to:(void *)arg3;	// IMP=0x00300000001651c7
@property(nonatomic, readonly) int serializedVFXBindingSize;
@property(nonatomic, readonly) NSData *serializedVFXBindingData;
- (id)initWithSerializedVFXBindingDataPointer:(void *)arg1;	// IMP=0x0030000000a998b0
@end

