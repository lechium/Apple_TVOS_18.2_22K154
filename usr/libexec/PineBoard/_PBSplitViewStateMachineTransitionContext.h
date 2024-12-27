//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSBlockSentinel, NSString, PBApplication, UIViewController;

@interface _PBSplitViewStateMachineTransitionContext : NSObject
{
    BSBlockSentinel *_completionSentinel;	// 8 = 0x8
    _Bool _animated;	// 16 = 0x10
    PBApplication *_application;	// 24 = 0x18
    UIViewController *_viewController;	// 32 = 0x20
}

+ (id)contextWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 application:(id)arg3;	// IMP=0x00200000001c54b5
- (void).cxx_destruct;	// IMP=0x00200000001c56f5
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) PBApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) _Bool animated; // @synthesize animated=_animated;
- (void)signalCompletion;	// IMP=0x00100000001c56a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

