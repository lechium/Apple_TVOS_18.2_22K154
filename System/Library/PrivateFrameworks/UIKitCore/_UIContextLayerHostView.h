//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISceneAsynchronousRenderingOptions;

__attribute__((visibility("hidden")))
@interface _UIContextLayerHostView
{
}

+ (Class)layerClass;	// IMP=0x0060000000a0808b
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000a085fe
- (void)_prepareForWindowDealloc;	// IMP=0x0000000000a08559
- (void)setStopsSecureSuperlayersValidation:(_Bool)arg1;	// IMP=0x0000000000a084e4
- (void)setStopsHitTestTransformAccumulation:(_Bool)arg1;	// IMP=0x0000000000a0846f
- (void)setResizesHostedContext:(_Bool)arg1;	// IMP=0x0000000000a083fa
- (void)setInheritsSecurity:(_Bool)arg1;	// IMP=0x0000000000a08385
@property(copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property(nonatomic) unsigned long long renderingMode;
- (id)layer;	// IMP=0x0000000000a08178
- (id)initWithSceneLayer:(id)arg1;	// IMP=0x0000000000a0809c

@end

