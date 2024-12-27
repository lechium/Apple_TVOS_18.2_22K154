//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNUIContactsEnvironment, CNUIPeopleGroupsDataSource, CNUIPeopleGroupsGridView, NSString;
@protocol CNUIPeopleGroupsGridViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNUIPeopleGroupsGridViewController : UIViewController
{
    id <CNUIPeopleGroupsGridViewControllerDelegate> _delegate;	// 8 = 0x8
    CNUIPeopleGroupsGridView *_gridView;	// 16 = 0x10
    CNUIContactsEnvironment *_environment;	// 24 = 0x18
    CNUIPeopleGroupsDataSource *_dataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000064ffa
@property(retain, nonatomic) CNUIPeopleGroupsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CNUIPeopleGroupsGridView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <CNUIPeopleGroupsGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataSourceDidChange:(id)arg1;	// IMP=0x0000000000064f05
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000064d2b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000064a91
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000649f0
- (void)reloadGridView;	// IMP=0x0000000000064955
- (void)reloadData;	// IMP=0x00000000000648fd
- (void)viewDidLoad;	// IMP=0x0000000000064816
- (void)loadView;	// IMP=0x0000000000064727
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000064679
- (id)newGridLayout;	// IMP=0x0000000000064597
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;	// IMP=0x00000000000644b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

