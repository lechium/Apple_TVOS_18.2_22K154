//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIWTInputViewSetPlacementController : NSObject
{
}

- (id)_inputWindowController;	// IMP=0x0000000000871a51
- (void)_postNotificationsForType:(unsigned long long)arg1 onScreenFrame:(struct CGRect)arg2 forStart:(_Bool)arg3;	// IMP=0x00000000008718d7
- (void)_postNotificationsForType:(unsigned long long)arg1 from:(struct CGRect)arg2 to:(struct CGRect)arg3 forStart:(_Bool)arg4;	// IMP=0x00000000008717d3
- (void)endFrameChange:(struct CGRect)arg1 to:(struct CGRect)arg2;	// IMP=0x00000000008717ba
- (void)startFrameChange:(struct CGRect)arg1 to:(struct CGRect)arg2;	// IMP=0x000000000087179e
- (void)endHideOnScreenFrame:(struct CGRect)arg1;	// IMP=0x0000000000871785
- (void)startHideOnScreenFrame:(struct CGRect)arg1;	// IMP=0x0000000000871769
- (void)endShowOnScreenFrame:(struct CGRect)arg1;	// IMP=0x0000000000871750
- (void)startShowForOnScreenFrame:(struct CGRect)arg1;	// IMP=0x0000000000871734
- (id)_keyboardTrackingCoordinator;	// IMP=0x00000000008716ac
- (void)animateTrackingElementsFromStart:(struct CGRect)arg1 toEnd:(struct CGRect)arg2 forShow:(_Bool)arg3;	// IMP=0x00000000008715d3

@end

