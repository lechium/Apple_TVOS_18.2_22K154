//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

__attribute__((visibility("hidden")))
@interface _UIMotionAnalyzer : NSObject
{
    _UIMotionAnalyzerSettings *_settings;	// 8 = 0x8
    _UIViewerRelativeDevicePose *_viewerRelativeDevicePose;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000f8c5ad
@property(readonly, nonatomic) _UIViewerRelativeDevicePose *viewerRelativeDevicePose; // @synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose;
@property(readonly, nonatomic) _UIMotionAnalyzerSettings *settings; // @synthesize settings=_settings;
- (void)resetHysteresis;	// IMP=0x0000000000f8c593
- (void)updateHistory;	// IMP=0x0000000000f8c58d
- (_Bool)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(_Bool)arg3 returningShouldToggleSlowUpdates:(_Bool *)arg4 logger:(id)arg5;	// IMP=0x0000000000f8c585
- (void)reset;	// IMP=0x0000000000f8c57f
- (void)updateWithEvent:(id)arg1;	// IMP=0x0000000000f8c579
- (id)description;	// IMP=0x0000000000f8c4cc
- (id)init;	// IMP=0x0000000000f8c48c
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000f8c3f4

@end

