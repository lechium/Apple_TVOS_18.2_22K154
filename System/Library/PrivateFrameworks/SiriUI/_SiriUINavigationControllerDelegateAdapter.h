//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SiriUINavigationTransitioning, UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _SiriUINavigationControllerDelegateAdapter : NSObject
{
    id <UINavigationControllerDelegate> _externalDelegate;	// 8 = 0x8
    id <SiriUINavigationTransitioning> _transitionController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009fe0
@property(retain, nonatomic) id <SiriUINavigationTransitioning> transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) __weak id <UINavigationControllerDelegate> externalDelegate; // @synthesize externalDelegate=_externalDelegate;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;	// IMP=0x0000000000009e96
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x0000000000009d49
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;	// IMP=0x0000000000009cc8
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;	// IMP=0x0000000000009c46
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009ba6
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009a96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

