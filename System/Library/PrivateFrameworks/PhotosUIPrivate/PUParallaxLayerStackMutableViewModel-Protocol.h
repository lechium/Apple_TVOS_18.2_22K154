//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSString, PFParallaxLayerStack, PIParallaxStyle;
@protocol PISegmentationItem;

@protocol PUParallaxLayerStackMutableViewModel <NSObject>
@property(nonatomic) _Bool showsDebugHUD;
@property(nonatomic) _Bool shouldLoopSettlingEffectForGallery;
@property(nonatomic) double visibilityAmount;
@property(nonatomic) struct CGRect containerFrame;
@property(nonatomic) unsigned long long clockIntersection;
@property(nonatomic) double desiredHeadroomVisibilityAmount;
@property(nonatomic) struct CGPoint parallaxVector;
@property(nonatomic) _Bool parallaxDisabled;
@property(nonatomic) _Bool settlingEffectEnabled;
@property(nonatomic) _Bool appliesDepthToAllOrientations;
@property(nonatomic) _Bool depthEnabled;
@property(nonatomic) struct CGRect normalizedVisibleFrame;
@property(nonatomic) struct CGRect visibleFrame;
@property(nonatomic) long long layoutOrder;
@property(nonatomic) long long deviceOrientation;
@property(retain, nonatomic) PIParallaxStyle *style;
- (void)pruneMainLayers;
- (void)updateSettlingEffectWithSegmentationItem:(id <PISegmentationItem>)arg1 layerStack:(PFParallaxLayerStack *)arg2;
- (void)setNormalizedVisibleFrameForInactiveOrientation:(struct CGRect)arg1;
- (void)setNormalizedVisibleFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setClockAreaLuminance:(double)arg1;
- (void)setClockLayerOrder:(NSString *)arg1;
- (void)updateBackfillLayersFromLayerStack:(PFParallaxLayerStack *)arg1;
- (void)updateHeadroomLayerFromLayerStack:(PFParallaxLayerStack *)arg1;
- (void)updateLayerStack:(PFParallaxLayerStack *)arg1;
@end

