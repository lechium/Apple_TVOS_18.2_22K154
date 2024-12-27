//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView, _UISearchBarLayout, _UISearchBarTransitionContext;

__attribute__((visibility("hidden")))
@interface _UISearchBarTransitionerBase : NSObject
{
    _UISearchBarLayout *_activeLayout;	// 8 = 0x8
    UIView *_searchBar;	// 16 = 0x10
    _UISearchBarTransitionContext *_transitionContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000041f59b
@property(retain, nonatomic) _UISearchBarTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) __weak UIView *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) _UISearchBarLayout *activeLayout; // @synthesize activeLayout=_activeLayout;
- (void)cancel;	// IMP=0x000000000041f52a
- (void)complete;	// IMP=0x000000000041f524
- (void)animate;	// IMP=0x000000000041f4ee
- (void)prepare;	// IMP=0x000000000041f4b8
- (id)initWithNewTransitionContextForSearchBar:(id)arg1;	// IMP=0x000000000041f454
- (id)init;	// IMP=0x000000000041f352
- (id)initWithTransitionContext:(id)arg1 forSearchBar:(id)arg2;	// IMP=0x000000000041f1ce

@end

