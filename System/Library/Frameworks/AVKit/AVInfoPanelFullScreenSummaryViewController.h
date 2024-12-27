//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class AVFocusableScrollView, AVPlayerController, NSString, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface AVInfoPanelFullScreenSummaryViewController : UIViewController
{
    AVFocusableScrollView *_scrollView;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
    UIVisualEffectView *_backdropView;	// 24 = 0x18
    _Bool _shouldResumePlayback;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    AVPlayerController *_playerController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000014fe09
@property(nonatomic) __weak AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) _Bool shouldResumePlayback; // @synthesize shouldResumePlayback=_shouldResumePlayback;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000014fd50
- (id)preferredFocusEnvironments;	// IMP=0x000000000014fcd7
- (void)viewDidLayoutSubviews;	// IMP=0x000000000014fc61
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000014fb5a
- (void)loadView;	// IMP=0x000000000014f01f

@end

