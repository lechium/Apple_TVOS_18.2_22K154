//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString, NSTimer, UIAlertController, UIViewController, UIWindow, UIWindowScene, _UIProgressView;

__attribute__((visibility("hidden")))
@interface _UIApplicationModalProgressController : NSObject
{
    _Bool _disableButtonAction;	// 8 = 0x8
    _UIProgressView *_progressView;	// 16 = 0x10
    UIWindowScene *_weakScene;	// 24 = 0x18
    _Bool _presented;	// 32 = 0x20
    double _displayDelaySeconds;	// 40 = 0x28
    UIWindow *_window;	// 48 = 0x30
    UIViewController *_sourceViewController;	// 56 = 0x38
    UIAlertController *_alertController;	// 64 = 0x40
    CDUnknownBlockType _dismissalHandler;	// 72 = 0x48
    CDUnknownBlockType _preDisplayTestBlock;	// 80 = 0x50
    NSProgress *_progress;	// 88 = 0x58
    NSTimer *_showTimer;	// 96 = 0x60
    NSTimer *_hideTimer;	// 104 = 0x68
    double _displayStartTime;	// 112 = 0x70
    NSProgress *_urlProgress;	// 120 = 0x78
}

+ (id)instanceForScene:(id)arg1;	// IMP=0x0060000000811ec4
+ (id)sharedInstance;	// IMP=0x0060000000811e3f
- (void).cxx_destruct;	// IMP=0x000000000081477b
@property(retain, nonatomic) NSProgress *urlProgress; // @synthesize urlProgress=_urlProgress;
@property(nonatomic, getter=_displayStartTime, setter=_setDisplayStartTime:) double displayStartTime; // @synthesize displayStartTime=_displayStartTime;
@property(retain, nonatomic, getter=_hideTimer, setter=_setHideTimer:) NSTimer *hideTimer; // @synthesize hideTimer=_hideTimer;
@property(retain, nonatomic, getter=_showTimer, setter=_setShowTimer:) NSTimer *showTimer; // @synthesize showTimer=_showTimer;
@property(retain, nonatomic, getter=_progress, setter=_setProgress:) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic, getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:) CDUnknownBlockType preDisplayTestBlock; // @synthesize preDisplayTestBlock=_preDisplayTestBlock;
@property(copy, nonatomic, getter=_dismissalHandler, setter=_setDismissalHandler:) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(retain, nonatomic, getter=_alertController, setter=_setAlertController:) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic, getter=_sourceViewController, setter=_setSourceViewController:) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic, getter=_window, setter=_setWindow:) UIWindow *window; // @synthesize window=_window;
@property(nonatomic, getter=_isPresented, setter=_setPresented:) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic) double displayDelaySeconds; // @synthesize displayDelaySeconds=_displayDelaySeconds;
- (void)displayForDownloadingURL:(id)arg1 copyToURL:(id)arg2 sourceViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000813430
- (void)displayForCopyingFileAtURL:(id)arg1 toURL:(id)arg2 sourceViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000081341e
- (void)displayForDownloadingURL:(id)arg1 sourceViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000813404
- (id)_sourceScene;	// IMP=0x000000000081330b
- (id)_createSourceWindow;	// IMP=0x00000000008131cf
- (id)_defaultSourceViewControllerCreatingWindowIfNeeded;	// IMP=0x0000000000813163
- (void)displayWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 sourceViewController:(id)arg5 preDisplayTestBlock:(CDUnknownBlockType)arg6 dismissalHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000812f06
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (void)reconfigureWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000008128b9
- (void)hideAfterDelay:(double)arg1 forceCompletion:(_Bool)arg2 replacementDismissalHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000081273d
- (void)hideAfterMinimumUptimeWithDismissalHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008125eb
- (void)_dismissButtonAction:(id)arg1;	// IMP=0x00000000008125cc
- (void)_hideTimerAction:(id)arg1;	// IMP=0x000000000081258f
- (void)_showTimerAction:(id)arg1;	// IMP=0x0000000000812497
- (_Bool)_shouldAnimatePresentationForIdiom:(long long)arg1;	// IMP=0x000000000081248a
- (void)_hideImmediatelyWasDismissedByUser:(_Bool)arg1;	// IMP=0x000000000081243a
- (void)_reset;	// IMP=0x00000000008122ef
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(_Bool)arg1;	// IMP=0x000000000081229f
- (id)init;	// IMP=0x000000000081218d

@end

