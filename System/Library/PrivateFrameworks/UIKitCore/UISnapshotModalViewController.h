//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface UISnapshotModalViewController : UIViewController
{
    long long _interfaceOrientation;	// 440 = 0x1b8
    UIViewController *_disappearingViewController;	// 448 = 0x1c0
    UINavigationController *_parentController;	// 456 = 0x1c8
}

- (void).cxx_destruct;	// IMP=0x00000000006d6464
@property(retain, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;	// IMP=0x00000000006d643f
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000006d6384
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000006d62c7
- (id)initWithInterfaceOrientation:(long long)arg1;	// IMP=0x00000000006d621b

@end

