//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIStatusBar_Base.h"

__attribute__((visibility("hidden")))
@interface UIStatusBar_Placeholder : UIStatusBar_Base
{
}

+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3 inWindow:(id)arg4 isAzulBLinked:(_Bool)arg5;	// IMP=0x008000000127e464
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000127e8e7
- (void)_setHidden:(_Bool)arg1 animationParameters:(id)arg2;	// IMP=0x000000000127e857
- (double)defaultDoubleHeight;	// IMP=0x000000000127e84e
- (long long)currentStyle;	// IMP=0x000000000127e813
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;	// IMP=0x000000000127e752
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;	// IMP=0x000000000127e694
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;	// IMP=0x000000000127e5af
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(_Bool)arg6;	// IMP=0x000000000127e543
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;	// IMP=0x000000000127e31e

@end

