//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSCache, NSString, PDFThumbnailView, UICollectionView, UICollectionViewDiffableDataSource;

__attribute__((visibility("hidden")))
@interface PDFThumbnailsCollectionView : UIView
{
    PDFThumbnailView *_thumbnailView;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UICollectionViewDiffableDataSource *_dataSource;	// 24 = 0x18
    NSCache *_cache;	// 32 = 0x20
    UIView *_backgroundOnePixelView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002def3
- (void)movePageWithTransaction:(id)arg1;	// IMP=0x000000000002da58
- (void)movePage:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x000000000002d89b
- (void)insertPages:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000002d5f8
- (void)removePages:(id)arg1;	// IMP=0x000000000002d299
- (void)_insertFileAtURL:(id)arg1 type:(id)arg2 atIndex:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002d18a
- (id)supportedUTTypes;	// IMP=0x000000000002d0d5
- (void)_insertImageWithURL:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002cc3a
- (void)_insertPDFDocumentWithURL:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002cacb
- (unsigned long long)_insertPagesFromProvidedPDFDocument:(id)arg1 atPageIndex:(unsigned long long)arg2;	// IMP=0x000000000002c74f
- (_Bool)shouldDisplayActionButtonForPage:(id)arg1;	// IMP=0x000000000002c747
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000002c6be
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000002c635
- (id)previewForCollectionView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000002c445
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000002c35a
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000002c342
- (void)updateImageForCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000002c12c
- (void)_updateActionsButtonVisibilityAtIndexPath:(id)arg1;	// IMP=0x000000000002bfce
- (_Bool)_canEditDocument;	// IMP=0x000000000002bf04
- (void)_selectAndScrollToCurrentPageIfNeeded;	// IMP=0x000000000002bcdb
- (void)_updateScrubber;	// IMP=0x000000000002bc28
- (void)_reloadPage:(id)arg1;	// IMP=0x000000000002b8a5
- (void)pageChanged:(id)arg1;	// IMP=0x000000000002b7e3
- (void)currentPageChanged:(id)arg1;	// IMP=0x000000000002b7b5
- (void)documentMutated:(id)arg1;	// IMP=0x000000000002b7a1
- (void)documentChanged:(id)arg1;	// IMP=0x000000000002b78d
- (id)currentPage;	// IMP=0x000000000002b65e
- (void)updateIconsImages;	// IMP=0x000000000002b64a
@property(nonatomic) _Bool allowsPageReordering;
- (struct CGSize)thumbnailSizeForPage:(id)arg1 displayBox:(long long)arg2 thumbnailView:(id)arg3;	// IMP=0x000000000002b50f
- (struct CGSize)thumbnailSizeForPage:(id)arg1 displayBox:(long long)arg2;	// IMP=0x000000000002b48e
- (struct CGSize)thumbnailSizeForPage:(id)arg1;	// IMP=0x000000000002b396
- (void)applySnapshotWithAnimation:(_Bool)arg1;	// IMP=0x000000000002afb0
- (id)imageDrawingOperationQueue;	// IMP=0x000000000002af09
- (id)datasourceQueue;	// IMP=0x000000000002ae5f
- (void)loadImageWithPage:(id)arg1 displayBox:(long long)arg2 thumbnailView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002a80f
- (id)cachedImageForPage:(id)arg1 displayBox:(long long)arg2 thumbnailView:(id)arg3;	// IMP=0x000000000002a7a8
- (void)updateCacheForPage:(id)arg1 withImage:(id)arg2;	// IMP=0x000000000002a611
- (id)cacheKeyForPage:(id)arg1;	// IMP=0x000000000002a47d
- (void)configureCell:(id)arg1 withPage:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000000002a092
- (void)updateImageForCell:(id)arg1 indexPath:(id)arg2 page:(id)arg3;	// IMP=0x0000000000029baf
- (id)makeDatasource;	// IMP=0x0000000000029900
- (id)initFromThumbnailView:(id)arg1;	// IMP=0x00000000000293e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

