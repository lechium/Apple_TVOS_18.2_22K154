//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNFgBgE5MLInputTensors : NSObject
{
    NSArray *_inputTensors;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d8200
@property(readonly) NSArray *inputTensors; // @synthesize inputTensors=_inputTensors;
- (id)initWithTargetPointList:(const void *)arg1 queryNumber:(int)arg2 maxSpatialLength:(int)arg3 inputSize:(struct CGSize)arg4 radius:(int)arg5 error:(id *)arg6;	// IMP=0x00000000001d79e7
- (id)initWithTargetPoint:(struct CGPoint)arg1 queryNumber:(int)arg2 maxSpatialLength:(int)arg3 inputSize:(struct CGSize)arg4 radius:(int)arg5 error:(id *)arg6;	// IMP=0x00000000001d71c4

@end

