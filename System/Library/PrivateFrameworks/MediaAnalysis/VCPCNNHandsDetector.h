//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNHandsDetector : NSObject
{
    int _cnnInputWidth;	// 8 = 0x8
    int _cnnInputHeight;	// 12 = 0xc
    int _maxNumRegions;	// 16 = 0x10
    int _numClass;	// 20 = 0x14
    int _revision;	// 24 = 0x18
    float *_inputData;	// 32 = 0x20
    NSArray *_outputNames;	// 40 = 0x28
    VCPCNNModelEspresso *_modelEspresso;	// 48 = 0x30
    struct Scaler _scaler;	// 56 = 0x38
}

+ (id)detector:(int)arg1 forceCPU:(_Bool)arg2 sharedModel:(_Bool)arg3 inputConfig:(id)arg4 revision:(int)arg5;	// IMP=0x00000000002c58a2
- (id).cxx_construct;	// IMP=0x00000000002c7bf3
- (void).cxx_destruct;	// IMP=0x00000000002c7bb7
- (int)handsDetection:(struct __CVBuffer *)arg1 handsRegions:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c78b6
- (int)drawRectangle:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 keypoints:(struct CGPoint *)arg5;	// IMP=0x00000000002c77f7
- (int)drawLine:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 point0:(struct CGPoint)arg5 point1:(struct CGPoint)arg6 drawPoint:(unsigned int)arg7;	// IMP=0x00000000002c75c0
- (int)generateHandsRegions:(const void *)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3;	// IMP=0x00000000002c705c
- (int)retrieveBoxes:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float [3][2])arg5;	// IMP=0x00000000002c6adc
- (void)nonMaxSuppression:(id)arg1;	// IMP=0x00000000002c68a1
- (int)generateHandsBoxes:(id)arg1;	// IMP=0x00000000002c66c5
- (int)updateMaxNumRegions:(int)arg1;	// IMP=0x00000000002c66ba
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2;	// IMP=0x00000000002c653b
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;	// IMP=0x00000000002c6217
- (int)createModelWithResConfig:(id)arg1;	// IMP=0x00000000002c6088
- (void)dealloc;	// IMP=0x00000000002c6041
- (int)updateModelWithResConfig:(id)arg1;	// IMP=0x00000000002c5f35
- (id)initWithMaxNumRegions:(int)arg1 forceCPU:(_Bool)arg2 sharedModel:(_Bool)arg3 inputConfig:(id)arg4 revision:(int)arg5;	// IMP=0x00000000002c5965

@end

