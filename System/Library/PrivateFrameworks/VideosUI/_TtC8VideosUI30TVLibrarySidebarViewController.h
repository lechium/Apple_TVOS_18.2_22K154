//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI30TVLibrarySidebarViewController : UIViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *menuItems;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_menuCollectionView;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_dataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000083e437
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000083e3e9
- (void)viewWillLayoutSubviews;	// IMP=0x000000000083d533
- (void)viewDidLoad;	// IMP=0x000000000083d432
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000083d18a
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000083ea15
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000083e8d5
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000000083f021
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000000083ee2c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000083ed6b

@end

