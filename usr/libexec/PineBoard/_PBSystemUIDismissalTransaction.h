//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewController;

@interface _PBSystemUIDismissalTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    UIViewController *_parentViewController;	// 24 = 0x18
    CDUnknownBlockType _transitionBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007cc46
@property(readonly, copy, nonatomic) CDUnknownBlockType transitionBlock; // @synthesize transitionBlock=_transitionBlock;
@property(readonly, nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (_Bool)_canBeInterrupted;	// IMP=0x001000000007cbfb
- (void)_begin;	// IMP=0x001000000007ca2e
- (id)initWithViewController:(id)arg1 parentViewController:(id)arg2 animated:(_Bool)arg3 transitionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000007c93f

@end

