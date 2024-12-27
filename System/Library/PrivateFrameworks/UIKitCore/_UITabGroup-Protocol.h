//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSString, UITab;

@protocol _UITabGroup <NSObject>
@property(readonly, nonatomic) NSArray *sidebarActions;
@property(readonly, nonatomic) unsigned long long sidebarAppearance;
@property(nonatomic) _Bool allowsReordering;
@property(readonly, copy, nonatomic) NSArray *children;
@property(readonly, nonatomic) UITab *selectedChild;
- (void)_updateForManagingNavigationStackChange;
- (void)_updateManagingNavigationStackUsingTransition:(unsigned long long)arg1;
- (void)_selectElement:(UITab *)arg1 notifyOnReselection:(_Bool)arg2 performBeforeNotifyingDelegate:(void (^)(void))arg3;
- (_Bool)_setDisplayOrderIdentifiers:(NSArray *)arg1;
- (NSArray *)_orderedChildrenForDisplayOrder:(NSArray *)arg1;
- (NSArray *)_filteredDisplayOrderIdentifiers;
- (UITab *)_defaultChildForSelection;
- (_Bool)_canReorderChild:(UITab *)arg1;
- (UITab *)tabForIdentifier:(NSString *)arg1;
@end

