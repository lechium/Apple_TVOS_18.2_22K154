//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSTimer, PBPIPCapsuleView, UIView;
@protocol PBPIPEditingHintViewControllerDelegate;

@interface PBPIPEditingHintViewController : UIViewController
{
    id <PBPIPEditingHintViewControllerDelegate> _delegate;	// 8 = 0x8
    PBPIPCapsuleView *_editingHintView;	// 16 = 0x10
    NSTimer *_fadeTimer;	// 24 = 0x18
    UIView *_gradientView;	// 32 = 0x20
    long long _style;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000010e6c2
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) __weak UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
@property(readonly, nonatomic) __weak PBPIPCapsuleView *editingHintView; // @synthesize editingHintView=_editingHintView;
@property(nonatomic) __weak id <PBPIPEditingHintViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_fade:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000010e2f2
- (void)dismissAnimated;	// IMP=0x001000000010e2d8
- (void)appearAnimated;	// IMP=0x001000000010e2bb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000010e21d
- (void)loadView;	// IMP=0x001000000010ddd6
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000010dd92

@end

