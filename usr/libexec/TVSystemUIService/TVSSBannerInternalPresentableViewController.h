//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVSSBannerInternalPillContentView, UIViewController;
@protocol BNPresentable;

@interface TVSSBannerInternalPresentableViewController
{
    UIViewController<BNPresentable> *_contentViewController;	// 8 = 0x8
    TVSSBannerInternalPillContentView *_pillWrapperView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000338b0
@property(retain, nonatomic) TVSSBannerInternalPillContentView *pillWrapperView; // @synthesize pillWrapperView=_pillWrapperView;
@property(readonly, nonatomic) UIViewController<BNPresentable> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void)sendActionWithExternalGesture:(id)arg1;	// IMP=0x0010000000033690
- (_Bool)hasPrimaryAction;	// IMP=0x0010000000033600
- (id)pillContentView;	// IMP=0x00100000000335d0
- (void)viewDidLoad;	// IMP=0x0010000000033090
- (id)initWithContentViewController:(id)arg1;	// IMP=0x0010000000032fd0

@end

