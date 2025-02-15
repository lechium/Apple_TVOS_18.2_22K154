//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SCNMTLComputePipeline;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLSmoothNormalsDeformer : NSObject
{
    unsigned long long _currentFrameHash;	// 8 = 0x8
    unsigned int _baseVertexCount;	// 16 = 0x10
    id <MTLBuffer> _perVertexTrianglesOffsets;	// 24 = 0x18
    id <MTLBuffer> _perVertexTrianglesIndices;	// 32 = 0x20
    SCNMTLComputePipeline *_smoothNormalsPipeline;	// 40 = 0x28
}

+ (unsigned long long)requiredOutputs;	// IMP=0x001000000004fc8e
+ (unsigned long long)supportedOutputs;	// IMP=0x001000000004fc83
+ (unsigned long long)requiredInputs;	// IMP=0x001000000004fc78
- (unsigned long long)updateWithComputeContext:(id)arg1 buffers:(const CDStruct_afe1dd20 *)arg2;	// IMP=0x00000000000507d3
- (void)dealloc;	// IMP=0x0000000000050782

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

