//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIContextMenuAnimator : NSObject
{
    long long _preferredCommitStyle;	// 8 = 0x8
    UIViewController *_previewViewController;	// 16 = 0x10
    NSMutableArray *_animations;	// 24 = 0x18
    NSMutableArray *_completions;	// 32 = 0x20
}

+ (id)animatorWithViewController:(id)arg1;	// IMP=0x0010000001785b13
- (void).cxx_destruct;	// IMP=0x000000000178610b
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(readonly, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
@property(readonly, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(nonatomic) long long preferredCommitStyle; // @synthesize preferredCommitStyle=_preferredCommitStyle;
- (void)performAllCompletions;	// IMP=0x0000000001785f40
- (void)performAllAnimations;	// IMP=0x0000000001785da7
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000001785d1a
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x0000000001785c8d
@property(readonly, nonatomic) _Bool hasAnyActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

