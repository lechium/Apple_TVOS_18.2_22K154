//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface TVSPProgrammaticFocusGuide : UIView
{
    _Bool _enabled;	// 8 = 0x8
    CDUnknownBlockType _trigger;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000422c0
@property(copy, nonatomic) CDUnknownBlockType trigger; // @synthesize trigger=_trigger;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000042090
- (_Bool)canBecomeFocused;	// IMP=0x0000000000042060
- (id)init;	// IMP=0x0000000000041fd0

@end

