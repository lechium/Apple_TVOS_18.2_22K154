//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIKeyboardAnimator;
@protocol UIInputViewAnimationHost;

__attribute__((visibility("hidden")))
@interface _UIKeyboardAnimatorAnimationStyle
{
    _UIKeyboardAnimator *_animator;	// 40 = 0x28
    id <UIInputViewAnimationHost> _currentHost;	// 48 = 0x30
    _Bool _currentFromPosition;	// 56 = 0x38
}

+ (id)animationStyleWithAnimator:(id)arg1;	// IMP=0x0060000000e361ea
- (void).cxx_destruct;	// IMP=0x0000000000e363dc
- (void)defaultLaunchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000e36392
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;	// IMP=0x0000000000e3629d
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;	// IMP=0x0000000000e36247

@end

