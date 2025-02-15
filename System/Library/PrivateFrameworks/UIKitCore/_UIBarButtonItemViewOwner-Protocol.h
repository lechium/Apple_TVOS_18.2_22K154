//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSymbolContentTransition, NSSymbolEffect, NSSymbolEffectOptions, UIBarButtonItem, UIMenu, UIView;

@protocol _UIBarButtonItemViewOwner <NSObject>
- (void)_itemDidChangeEnabledState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeHiddenState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeSelectionState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeWidth:(UIBarButtonItem *)arg1;
- (void)_itemStandardViewNeedsUpdate:(UIBarButtonItem *)arg1;
- (void)_itemCustomViewDidChange:(UIBarButtonItem *)arg1 fromView:(UIView *)arg2;

@optional
- (UIBarButtonItem *)_overflowFallbackItem;
- (void)_item:(UIBarButtonItem *)arg1 applyContentTransition:(NSSymbolContentTransition *)arg2 options:(NSSymbolEffectOptions *)arg3;
- (_Bool)_item:(UIBarButtonItem *)arg1 removeAllSymbolEffectsWithOptions:(NSSymbolEffectOptions *)arg2 animated:(_Bool)arg3;
- (_Bool)_item:(UIBarButtonItem *)arg1 removeSymbolEffectOfType:(NSSymbolEffect *)arg2 options:(NSSymbolEffectOptions *)arg3 animated:(_Bool)arg4;
- (_Bool)_item:(UIBarButtonItem *)arg1 addSymbolEffect:(NSSymbolEffect *)arg2 options:(NSSymbolEffectOptions *)arg3 animated:(_Bool)arg4;
- (_Bool)_itemHostedInNSToolbar:(UIBarButtonItem *)arg1;
- (void)_itemNeedsNSToolbarUpdate:(UIBarButtonItem *)arg1;
- (_Bool)_itemDidUpdateMenu:(UIBarButtonItem *)arg1 fromMenu:(UIMenu *)arg2;
@end

