//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIAutoRotatingWindow.h"

@protocol _UIRemoteInputViewHostWindowDelegate;

__attribute__((visibility("hidden")))
@interface _UIRemoteInputViewHostWindow : UIAutoRotatingWindow
{
    id <_UIRemoteInputViewHostWindowDelegate> _hostWindowDelegate;	// 176 = 0xb0
}

+ (_Bool)_isSecure;	// IMP=0x00600000002fcc07
- (void).cxx_destruct;	// IMP=0x00000000002fcd72
@property(nonatomic) __weak id <_UIRemoteInputViewHostWindowDelegate> hostWindowDelegate; // @synthesize hostWindowDelegate=_hostWindowDelegate;
- (_Bool)inhibitSetupOrientation;	// IMP=0x00000000002fccd0
- (long long)_orientationForSceneTransform;	// IMP=0x00000000002fccc5
- (long long)_orientationForRootTransform;	// IMP=0x00000000002fccba
- (long long)_orientationForViewTransform;	// IMP=0x00000000002fccaf
- (_Bool)_wantsSceneAssociation;	// IMP=0x00000000002fcca7
- (_Bool)_isRemoteInputHostWindow;	// IMP=0x00000000002fcc9f
- (_Bool)_alwaysGetsContexts;	// IMP=0x00000000002fcc97
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x00000000002fcc8f
- (_Bool)_isHostedInAnotherProcess;	// IMP=0x00000000002fcc87
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x00000000002fcc7f
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x00000000002fcc79
- (id)firstResponder;	// IMP=0x00000000002fcc1f
- (_Bool)canBecomeKeyWindow;	// IMP=0x00000000002fcc17
- (_Bool)isInternalWindow;	// IMP=0x00000000002fcc0f
- (void)_didChangeKeyplaneWithContext:(id)arg1;	// IMP=0x00000000002fcbca
- (id)initWithWindowScene:(id)arg1;	// IMP=0x00000000002fcb3e

@end

