//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VKMapImageCanvas
{
    void *_mapEngine;	// 128 = 0x80
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _manifestTileGroupObserverProxy;	// 136 = 0x88
    struct shared_ptr<md::OverlayContainer> _overlayContainer;	// 160 = 0xa0
    _Bool _forceRasterizationForGlobe;	// 176 = 0xb0
}

- (id).cxx_construct;	// IMP=0x000000000052adc0
- (void).cxx_destruct;	// IMP=0x000000000052ad60
@property(nonatomic) _Bool forceRasterizationForGlobe; // @synthesize forceRasterizationForGlobe=_forceRasterizationForGlobe;
- (void)tileGroupDidChange;	// IMP=0x000000000052a9f0
- (void)cancelTileRequests;	// IMP=0x000000000052a990
- (void)clearScene;	// IMP=0x000000000052a8b0
- (void)addOverlay:(id)arg1;	// IMP=0x000000000052a7c0
- (void)updateOverlays;	// IMP=0x000000000052a540
- (void)setMapType:(int)arg1;	// IMP=0x000000000052a4f0
- (void)resetCameraController;	// IMP=0x000000000052a380
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x000000000052a040
- (void)dealloc;	// IMP=0x0000000000529fc0
@property(readonly, nonatomic) NSArray *overlays;
- (id)initWithMapEngine:(void *)arg1;	// IMP=0x0000000000529860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

