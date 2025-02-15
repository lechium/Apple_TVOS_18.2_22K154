//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextEffectsWindow.h"

__attribute__((visibility("hidden")))
@interface UITextEffectsWindowHosted : UITextEffectsWindow
{
}

- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x000000000145de43
- (_Bool)_isTextEffectsWindowNotificationOwner;	// IMP=0x000000000145dd63
- (_Bool)_isTextEffectsWindowHosting;	// IMP=0x000000000145dd5b
- (void)_sceneBoundsDidChange;	// IMP=0x000000000145dac5
- (void)adjustTextEffectsWindowSizeIfNecessary;	// IMP=0x000000000145d970
- (_Bool)_isFullscreen;	// IMP=0x000000000145d865
- (struct CGRect)actualSceneBounds;	// IMP=0x000000000145d7e6
- (struct CGRect)actualSceneBoundsForLandscape:(_Bool)arg1;	// IMP=0x000000000145d75c
- (long long)_orientationForSceneTransform;	// IMP=0x000000000145d751
- (long long)_orientationForRootTransform;	// IMP=0x000000000145d746
- (long long)_orientationForViewTransform;	// IMP=0x000000000145d73b
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x000000000145d733
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x000000000145d72b

@end

