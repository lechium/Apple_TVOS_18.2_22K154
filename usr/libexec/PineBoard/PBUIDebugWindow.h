//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIWindow.h>

@class PBUIDebugRootViewController;

@interface PBUIDebugWindow : UIWindow
{
}

- (void)_updateRootViewController;	// IMP=0x00200000002702f8
- (_Bool)_ignoresHitTest;	// IMP=0x00100000002702f0
- (_Bool)canBecomeKeyWindow;	// IMP=0x00100000002702e8
@property(retain, nonatomic) PBUIDebugRootViewController *rootViewController; // @dynamic rootViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000002701e3
- (void)dealloc;	// IMP=0x0010000000270111
- (id)initWithWindowScene:(id)arg1;	// IMP=0x0010000000270028

@end

