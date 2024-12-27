//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/NSObject-Protocol.h>

@class SCNMTLRenderContext;
@protocol SCNMTLDeformerUpdateComputeContext;

@protocol SCNMTLDeformer <NSObject>
+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)requiredInputs;
- (unsigned long long)updateWithComputeContext:(id <SCNMTLDeformerUpdateComputeContext>)arg1 buffers:(const CDStruct_afe1dd20 *)arg2;

@optional
- (void)drawAuthoringEnvironment:(void *)arg1 node:(struct __C3DNode *)arg2 context:(SCNMTLRenderContext *)arg3;
- (void)updateDataForAuthoringEnvironment:(void *)arg1 node:(struct __C3DNode *)arg2 transforms:(CDStruct_c6fc9200)arg3 context:(SCNMTLRenderContext *)arg4;
@end

