//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class UIView, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface VUIAppLoadingViewController : UIViewController
{
    VUIAppSpinnerView *_loadingView;	// 8 = 0x8
    UIView *_parentView;	// 16 = 0x10
    UIView *_principalView;	// 24 = 0x18
    _Bool _cancelLoading;	// 32 = 0x20
    _Bool _loading;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x00000000000e101f
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void)setView:(id)arg1;	// IMP=0x00000000000e094e

@end

