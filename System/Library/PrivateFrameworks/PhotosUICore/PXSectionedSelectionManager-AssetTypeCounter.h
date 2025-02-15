//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXSectionedSelectionManager.h"

@class PXAssetSelectionTypeCounter;

@interface PXSectionedSelectionManager (AssetTypeCounter)
@property(readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter;
- (struct PXSimpleIndexPath)_moveSelectionFromIndexPath:(struct PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2 withDelegate:(id)arg3;	// IMP=0x00300000008be40f
- (struct PXSimpleIndexPath)_selectInitialItemForMoveInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x00300000008be38b
- (struct PXSimpleIndexPath)_selectInitialSectionForMoveInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x00300000008be307
- (struct PXSimpleIndexPath)_initialItemIndexPathForMoveInDirection:(unsigned long long)arg1;	// IMP=0x00300000008be23d
- (struct PXSimpleIndexPath)_initialSectionIndexPathForMoveInDirection:(unsigned long long)arg1;	// IMP=0x00300000008be173
- (struct PXSimpleIndexPath)_moveItemSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x00300000008be0ad
- (struct PXSimpleIndexPath)_moveSectionSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x00300000008bdfe7
- (struct PXSimpleIndexPath)moveSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x00300000008bdf3d
- (struct PXSimpleIndexPath)extendSelectionFromIndexPath:(struct PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2 withDelegate:(id)arg3;	// IMP=0x00300000008bde7d
- (struct PXSimpleIndexPath)extendSelectionToItemIndexPath:(struct PXSimpleIndexPath)arg1 withDelegate:(id)arg2;	// IMP=0x00300000008bdd94
- (struct PXSimpleIndexPath)_extendSelectionFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3 withDelegate:(id)arg4;	// IMP=0x00300000008bd9dc
- (struct PXSimpleIndexPath)startingIndexPathForMoveInDirection:(unsigned long long)arg1;	// IMP=0x00300000008bd822
- (void)selectNonCopiedAssetsWithImportStatusManager:(id)arg1;	// IMP=0x0030000000c6d0a1
@end

