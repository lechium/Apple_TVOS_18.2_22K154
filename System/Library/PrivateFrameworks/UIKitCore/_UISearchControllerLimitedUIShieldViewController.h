//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class _UISearchControllerLimitedAccessView;

__attribute__((visibility("hidden")))
@interface _UISearchControllerLimitedUIShieldViewController : UIViewController
{
    CDUnknownBlockType _dismissAction;	// 440 = 0x1b8
    _UISearchControllerLimitedAccessView *_limitedAccessView;	// 448 = 0x1c0
}

- (void).cxx_destruct;	// IMP=0x0000000001127c56
@property(retain, nonatomic) _UISearchControllerLimitedAccessView *limitedAccessView; // @synthesize limitedAccessView=_limitedAccessView;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
- (void)_backButtonPressed:(id)arg1;	// IMP=0x0000000001127b9e
- (void)loadView;	// IMP=0x0000000001127a97
- (void)dealloc;	// IMP=0x0000000001127a4d

@end

