//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, NSUndoManager, PXStoryRecipeAssetEdits;
@protocol PFStoryRecipe;

@protocol PXStoryPersistableRecipeWriter
- (NSProgress *)writePersistableRecipe:(id <PFStoryRecipe>)arg1 assetEdits:(PXStoryRecipeAssetEdits *)arg2 undoManager:(NSUndoManager *)arg3 resultHandler:(void (^)(_Bool, id <PXDisplayAssetCollection>, NSError *))arg4;
@end

