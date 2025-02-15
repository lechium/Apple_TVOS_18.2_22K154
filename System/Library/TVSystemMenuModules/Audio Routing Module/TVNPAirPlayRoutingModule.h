//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMOverlayModule.h>

@class TVNPGroupableRoutingController, TVSMButtonViewController, TVSMCAPackageView;

@interface TVNPAirPlayRoutingModule : TVSMOverlayModule
{
    _Bool _hasActiveOutput;	// 8 = 0x8
    TVSMCAPackageView *_packageView;	// 16 = 0x10
    TVSMButtonViewController *_buttonViewController;	// 24 = 0x18
    TVNPGroupableRoutingController *_routingController;	// 32 = 0x20
}

+ (id)availableStyles;	// IMP=0x0060000000025580
- (void).cxx_destruct;	// IMP=0x00000000000260a0
@property(readonly, nonatomic) _Bool hasActiveOutput; // @synthesize hasActiveOutput=_hasActiveOutput;
@property(readonly, nonatomic) TVNPGroupableRoutingController *routingController; // @synthesize routingController=_routingController;
@property(readonly, nonatomic) TVSMButtonViewController *buttonViewController; // @synthesize buttonViewController=_buttonViewController;
@property(retain, nonatomic) TVSMCAPackageView *packageView; // @synthesize packageView=_packageView;
- (id)analyticsElementInfo;	// IMP=0x0000000000025f50
- (id)analyticsActionType;	// IMP=0x0000000000025f30
- (void)_updateRouteDependentUI;	// IMP=0x0000000000025d50
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000025c50
- (id)overlayContentViewController;	// IMP=0x0000000000025bc0
- (id)contentViewController;	// IMP=0x0000000000025ad0
- (void)dumpViewController;	// IMP=0x0000000000025710
- (void)dealloc;	// IMP=0x00000000000256a0
- (id)init;	// IMP=0x00000000000255a0

@end

