//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI27FilterOptionsViewController : UIViewController
{
    MISSING_TYPE *visibility;	// 8 = 0x8
    MISSING_TYPE *dataProvider;	// 16 = 0x10
    MISSING_TYPE *dependencies;	// 24 = 0x18
    MISSING_TYPE *eventHub;	// 32 = 0x20
    MISSING_TYPE *pageNavigator;	// 48 = 0x30
    MISSING_TYPE *platform;	// 88 = 0x58
    MISSING_TYPE *serviceSubscriptionCache;	// 96 = 0x60
    MISSING_TYPE *storefrontLocalizer;	// 136 = 0x88
    MISSING_TYPE *layout;	// 176 = 0xb0
    MISSING_TYPE *titleLabel;	// 200 = 0xc8
    MISSING_TYPE *subtitleLabel;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000035c570
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000035c510
- (void)textSizeChanged:(id)arg1;	// IMP=0x000000000035c490
- (void)onCancel;	// IMP=0x000000000035c460
- (void)onDone;	// IMP=0x000000000035bda0
- (void)updateTitleView;	// IMP=0x000000000035b580
- (void)viewDidLayoutSubviews;	// IMP=0x000000000035b300
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000035b2d0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000035b1d0
- (void)viewDidLoad;	// IMP=0x000000000035afe0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000035aa30
@property(nonatomic, readonly) UILabel *subtitleLabel; // @synthesize subtitleLabel;

@end

