//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, VUIMediaController;
@protocol VUIMediaPlaybackManagerDelegate;

__attribute__((visibility("hidden")))
@interface VUITransitionalPlaybackUIManager : NSObject
{
    int _mediaPlaybackState;	// 8 = 0x8
    int _mediaPlaybackTrigger;	// 12 = 0xc
    unsigned long long _mediaPlaybackStateModifier;	// 16 = 0x10
    unsigned long long _mediaPlaybackTriggerModifier;	// 24 = 0x18
    NSTimer *_backgroundedTimer;	// 32 = 0x20
    struct {
        _Bool hasShouldEnableUIModeImplicitly;
        _Bool hasPresentPlaybackController;
    } _delegateFlags;	// 40 = 0x28
    _Bool _isFirstAppearance;	// 42 = 0x2a
    _Bool _goesToForegroundOnFirstAppear;	// 43 = 0x2b
    VUIMediaController *_mediaController;	// 48 = 0x30
    id <VUIMediaPlaybackManagerDelegate> _delegate;	// 56 = 0x38
    double _showcaseFactor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a1ff1
@property(nonatomic) _Bool goesToForegroundOnFirstAppear; // @synthesize goesToForegroundOnFirstAppear=_goesToForegroundOnFirstAppear;
@property(nonatomic) double showcaseFactor; // @synthesize showcaseFactor=_showcaseFactor;
@property(nonatomic) __weak id <VUIMediaPlaybackManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VUIMediaController *mediaController; // @synthesize mediaController=_mediaController;
- (_Bool)_canMenu;	// IMP=0x00000000000a1eb9
- (_Bool)_canSwipeUp;	// IMP=0x00000000000a1d83
- (_Bool)_shouldPause;	// IMP=0x00000000000a1d59
- (void)_scheduleBackgroundedTimer;	// IMP=0x00000000000a1cc3
- (int)_processPausedStateTriggers;	// IMP=0x00000000000a1bde
- (int)_processWillBeForegroundedStateTriggers;	// IMP=0x00000000000a1bbd
- (int)_processWillBeBackgroundedStateTriggers;	// IMP=0x00000000000a1b38
- (int)_processWaitingForTimeoutStateTriggers;	// IMP=0x00000000000a1a75
- (int)_processForegroundedStateTriggers;	// IMP=0x00000000000a19a4
- (int)_processBackgroundedStateTriggers;	// IMP=0x00000000000a18ef
- (int)_processUndefinedStateTriggers;	// IMP=0x00000000000a179b
- (void)_processStateExit;	// IMP=0x00000000000a16f8
- (void)_processStateEnter;	// IMP=0x00000000000a1417
- (void)_processTrigger;	// IMP=0x00000000000a1392
- (void)_onShowcaseFactorDidChange;	// IMP=0x00000000000a1379
- (void)_onTimeout;	// IMP=0x00000000000a1360
@property(readonly, nonatomic) long long currentUIMode;
@property(readonly, nonatomic) _Bool shouldHideUI;
- (void)onSupplementaryUIShouldDismiss;	// IMP=0x00000000000a12da
- (_Bool)onSupplementaryUIShouldPresent;	// IMP=0x00000000000a12a7
- (void)onMediaControllerStateDidChange;	// IMP=0x00000000000a128e
- (void)onEvent;	// IMP=0x00000000000a1275
- (void)onDisappear;	// IMP=0x00000000000a125c
- (void)onAppear;	// IMP=0x00000000000a1234
- (void)dealloc;	// IMP=0x00000000000a1184
- (id)initWithMediaController:(id)arg1;	// IMP=0x00000000000a1114

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

