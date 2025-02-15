//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKeyboardPopoverController.h"

__attribute__((visibility("hidden")))
@interface UIPressAndHoldPopoverController : UIKeyboardPopoverController
{
}

+ (_Bool)canPresentPressAndHoldPopoverForKeyString:(id)arg1;	// IMP=0x008000000021b6c2
+ (_Bool)canPresentPressAndHoldPopoverForEvent:(id)arg1;	// IMP=0x008000000021b6ba
- (void)insertSelectedAccentVariant:(id)arg1 shouldDismissPopover:(_Bool)arg2;	// IMP=0x000000000021b902
- (void)pressAndHoldViewDidAcceptAccentVariant:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000021b8eb
- (void)showAccentVariantInForwardDirection:(_Bool)arg1;	// IMP=0x000000000021b8e5
- (_Bool)hasAccentVariantInForwardDirection:(_Bool)arg1;	// IMP=0x000000000021b8dd
- (_Bool)handleKeyInputForAccentSelector:(id)arg1;	// IMP=0x000000000021b7dc
- (_Bool)handleSelectionEvent:(id)arg1;	// IMP=0x000000000021b7d4
- (_Bool)handleKeyInputForPressAndHoldSelector:(id)arg1;	// IMP=0x000000000021b6d2
- (_Bool)isSamePressAndHoldPopoverForKeyString:(id)arg1;	// IMP=0x000000000021b6ca
- (_Bool)handleHardwareKeyboardEvent:(id)arg1;	// IMP=0x000000000021b647
- (id)initWithKeyString:(id)arg1;	// IMP=0x000000000021b618

@end

