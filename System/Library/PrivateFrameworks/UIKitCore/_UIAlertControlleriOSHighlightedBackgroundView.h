//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIAlertControlleriOSHighlightedBackgroundView : UIView
{
    UIVisualEffectView *_effectView;	// 8 = 0x8
    long long _style;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000011d3495
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)setPressed:(_Bool)arg1;	// IMP=0x00000000011d347e
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000011d344d
- (void)setRoundedCornerPosition:(unsigned long long)arg1;	// IMP=0x00000000011d3401
- (void)setCornerRadius:(double)arg1;	// IMP=0x00000000011d33b2
- (void)_configureWithStyle:(long long)arg1;	// IMP=0x00000000011d31d6
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000011d315e
- (id)init;	// IMP=0x00000000011d314a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

