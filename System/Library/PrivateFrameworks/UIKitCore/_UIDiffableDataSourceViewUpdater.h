//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UICollectionView, UITableView;
@protocol _UICollectionDataSourceSnapshotTranslating, _UICollectionViewUpdateItemApplying;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceViewUpdater : NSObject
{
    _Bool _hasPerformedInitialUpdate;	// 8 = 0x8
    long long _tableViewRowAnimation;	// 16 = 0x10
    long long _sinkKind;	// 24 = 0x18
    id <_UICollectionViewUpdateItemApplying> _updatesSink;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    id <_UICollectionDataSourceSnapshotTranslating> _dataSourceSnapshot;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000058c018
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool hasPerformedInitialUpdate; // @synthesize hasPerformedInitialUpdate=_hasPerformedInitialUpdate;
@property(retain, nonatomic) id <_UICollectionDataSourceSnapshotTranslating> dataSourceSnapshot; // @synthesize dataSourceSnapshot=_dataSourceSnapshot;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <_UICollectionViewUpdateItemApplying> updatesSink; // @synthesize updatesSink=_updatesSink;
@property(nonatomic) long long sinkKind; // @synthesize sinkKind=_sinkKind;
@property(nonatomic) long long tableViewRowAnimation; // @synthesize tableViewRowAnimation=_tableViewRowAnimation;
- (void)_performMoveUpdate:(id)arg1 onTableView:(id)arg2;	// IMP=0x000000000058be66
- (id)_sectionIndexesToReloadForTableViewCompatibility:(id)arg1;	// IMP=0x000000000058bdb4
- (void)_performMoveUpdate:(id)arg1 onCollectionView:(id)arg2;	// IMP=0x000000000058bccc
- (void)_performViewUpdates:(id)arg1;	// IMP=0x000000000058b293
- (id)targetView;	// IMP=0x000000000058b22d
- (void)_willPerformDiff:(_Bool)arg1;	// IMP=0x000000000058b227
- (void)_reloadData;	// IMP=0x000000000058b011
- (void)_deleteAllItems;	// IMP=0x000000000058adfb
- (_Bool)_doesExpectedUpdate:(id)arg1 matchActualUpdates:(id)arg2 allowingEmptyUpdates:(_Bool)arg3;	// IMP=0x000000000058ac01
- (long long)_performUpdateWithCollectionViewUpdateItems:(id)arg1 dataSourceSnapshot:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 viewPropertyAnimator:(id)arg5 customAnimationsProvider:(CDUnknownBlockType)arg6 animated:(_Bool)arg7;	// IMP=0x0000000000589cc8
- (id)initWithTableView:(id)arg1;	// IMP=0x0000000000589caf
- (id)initWithCollectionView:(id)arg1;	// IMP=0x0000000000589c95
- (id)initWithCollectionViewUpdatesSink:(id)arg1;	// IMP=0x0000000000589c7e
- (id)initWithUpdatesSink:(id)arg1 collectionView:(id)arg2 tableView:(id)arg3;	// IMP=0x0000000000589b98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

