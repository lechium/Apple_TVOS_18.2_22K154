//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/NSObject-Protocol.h>

@class MTLComputePipelineDescriptor, MTLFunctionDescriptor, MTLMeshRenderPipelineDescriptor, MTLRenderPipelineDescriptor, MTLStitchedLibraryDescriptor, MTLTileRenderPipelineDescriptor, NSString, NSURL;
@protocol MTLDevice, MTLLibrary;

@protocol MTLBinaryArchive <NSObject>
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (_Bool)addFunctionWithDescriptor:(MTLFunctionDescriptor *)arg1 library:(id <MTLLibrary>)arg2 error:(id *)arg3;
- (_Bool)serializeToURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)addLibraryWithDescriptor:(MTLStitchedLibraryDescriptor *)arg1 error:(id *)arg2;
- (_Bool)addMeshRenderPipelineFunctionsWithDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (_Bool)addComputePipelineFunctionsWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
@end

