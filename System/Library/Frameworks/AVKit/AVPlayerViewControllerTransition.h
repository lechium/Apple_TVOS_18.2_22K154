//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerViewControllerTransition : NSObject
{
    AVPlayerViewController *_playerViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b1d43
@property(retain, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void)animationEnded:(_Bool)arg1;	// IMP=0x00000000000b1ceb
- (void)animateTransition:(id)arg1;	// IMP=0x00000000000b1780
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000b1753
- (id)placeholderView;	// IMP=0x00000000000b1703
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000000b167f
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000000b128e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

