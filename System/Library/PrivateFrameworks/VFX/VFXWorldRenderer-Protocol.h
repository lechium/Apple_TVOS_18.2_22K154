//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, MISSING_TYPE, MTLRenderPassDescriptor, NSArray, NSDictionary, VFXNode, VFXRenderGraph, VFXWorld;
@protocol MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder, VFXWorldRendererDelegate;

@protocol VFXWorldRenderer <NSObject>
@property(retain, nonatomic) VFXRenderGraph *renderGraph;
@property(readonly, nonatomic) struct CGColorSpace *workingColorSpace;
@property(readonly, nonatomic) struct CGRect currentViewport;
@property(retain, nonatomic) VFXNode *audioListener;
@property(readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property(readonly, nonatomic) AVAudioEngine *audioEngine;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) unsigned long long stencilPixelFormat;
@property(readonly, nonatomic) unsigned long long depthPixelFormat;
@property(readonly, nonatomic) unsigned long long colorPixelFormat;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property(readonly, nonatomic) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property(nonatomic) unsigned long long debugOptions;
@property(nonatomic) _Bool showsStatistics;
@property(nonatomic) _Bool additiveWritesToAlpha;
@property(nonatomic, getter=isTemporalAntialiasingEnabled) _Bool temporalAntialiasingEnabled;
@property(nonatomic, getter=isJitteringEnabled) _Bool jitteringEnabled;
@property(nonatomic) unsigned long long antialiasingMode;
@property(nonatomic) _Bool autoenablesDefaultLighting;
@property(retain, nonatomic) VFXNode *pointOfView;
@property(nonatomic) __weak id <VFXWorldRendererDelegate> delegate;
@property(retain, nonatomic) VFXWorld *world;
- (void)prepareObjects:(NSArray *)arg1 withCompletionHandler:(void (^)(_Bool))arg2;
- (_Bool)prepareObject:(id)arg1 shouldAbortBlock:(_Bool (^)(void))arg2;
- (MISSING_TYPE *)unprojectPoint: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)projectPoint: /* Error: Ran out of types for this method. */;
- (NSArray *)nodesInsideFrustumWithPointOfView:(VFXNode *)arg1;
- (_Bool)isNodeInsideFrustum:(VFXNode *)arg1 withPointOfView:(VFXNode *)arg2;
- (NSArray *)hitTest:(struct CGPoint)arg1 options:(NSDictionary *)arg2;
@end

