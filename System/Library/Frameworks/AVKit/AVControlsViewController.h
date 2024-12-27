//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class AVPlaybackSpeedCollection;
@protocol AVControlsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVControlsViewController : UIViewController
{
    _Bool _requiresLinearPlayback;	// 8 = 0x8
    AVPlaybackSpeedCollection *_playbackSpeedCollection;	// 16 = 0x10
    unsigned long long _visibleControls;	// 24 = 0x18
    id <AVControlsViewControllerDelegate> _delegate;	// 32 = 0x20
    unsigned long long _visibilityPolicy;	// 40 = 0x28
}

+ (double)autoHideInterval;	// IMP=0x0060000000168e42
- (void).cxx_destruct;	// IMP=0x0000000000168e13
@property(readonly, nonatomic) unsigned long long visibilityPolicy; // @synthesize visibilityPolicy=_visibilityPolicy;
@property(nonatomic) _Bool requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property(nonatomic) __weak id <AVControlsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long visibleControls; // @synthesize visibleControls=_visibleControls;
@property(retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection; // @synthesize playbackSpeedCollection=_playbackSpeedCollection;
- (void)flashControlsWithDuration:(double)arg1;	// IMP=0x0000000000168d68
- (void)toggleVisibility:(id)arg1;	// IMP=0x0000000000168d62
- (void)updateVisibilityPolicy:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000168d5c
- (id)init;	// IMP=0x0000000000168d0e

@end

