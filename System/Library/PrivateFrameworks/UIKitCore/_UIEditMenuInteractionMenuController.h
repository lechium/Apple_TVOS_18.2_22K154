//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIMenuController.h"

@class NSArray, NSString, UIEditMenuInteraction, UIView;

__attribute__((visibility("hidden")))
@interface _UIEditMenuInteractionMenuController : UIMenuController
{
    UIEditMenuInteraction *_currentMenuInteraction;	// 24 = 0x18
    NSArray *_extraMenuItems;	// 32 = 0x20
    UIView *_targetView;	// 40 = 0x28
    struct CGRect _targetRect;	// 48 = 0x30
    _Bool _menuNeedsUpdate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000f8c39c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

