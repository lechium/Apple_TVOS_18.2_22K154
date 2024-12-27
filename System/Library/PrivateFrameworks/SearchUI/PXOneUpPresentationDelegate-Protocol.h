//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class NSArray, NSSet, PXAssetActionManager, PXAssetReference, PXAssetsDataSourceManager, PXContentPrivacyController, PXOneUpPresentation, PXPhotosDetailsContext, PXRegionOfInterest, PXSearchQueryMatchInfo, PXUIMediaProvider, UIContextMenuConfiguration, UIContextMenuInteraction, UIImage, UIScrollView, UITargetedPreview, _UIContextMenuStyle;
@protocol NSCopying, PXAssetImportStatusManager;

@protocol PXOneUpPresentationDelegate <NSObject>
- (long long)oneUpPresentationOrigin:(PXOneUpPresentation *)arg1;
- (PXUIMediaProvider *)oneUpPresentationMediaProvider:(PXOneUpPresentation *)arg1;
- (PXAssetsDataSourceManager *)oneUpPresentationDataSourceManager:(PXOneUpPresentation *)arg1;

@optional
- (NSArray *)oneUpPresentationAssetUUIDsAllowedToHighlightText:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedPersonLocalIdentifiers:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedHumanActionIdentifiers:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedAudioIdentifiers:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedSceneIdentifiers:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedQueryStrings:(PXOneUpPresentation *)arg1;
- (PXSearchQueryMatchInfo *)oneUpPresentationSearchQueryMatchInfo:(PXOneUpPresentation *)arg1;
- (UIScrollView *)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingScrollViewForAssetReference:(PXAssetReference *)arg2;
- (id <PXAssetImportStatusManager>)oneUpPresentationImportStatusManager:(PXOneUpPresentation *)arg1;
- (long long)oneUpPresentationActionContext:(PXOneUpPresentation *)arg1;
- (PXAssetActionManager *)oneUpPresentationActionManagerForPreviewing:(PXOneUpPresentation *)arg1;
- (PXAssetActionManager *)oneUpPresentationActionManager:(PXOneUpPresentation *)arg1;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 setHiddenAssetReferences:(NSSet *)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 scrollAssetReferenceToVisible:(PXAssetReference *)arg2;
- (PXRegionOfInterest *)oneUpPresentation:(PXOneUpPresentation *)arg1 regionOfInterestForAssetReference:(PXAssetReference *)arg2;
- (UIImage *)oneUpPresentation:(PXOneUpPresentation *)arg1 currentImageForAssetReference:(PXAssetReference *)arg2;
- (_Bool)oneUpPresentationWantsShowInLibraryButton:(PXOneUpPresentation *)arg1;
- (_Bool)oneUpPresentationShouldPreventShowInAllPhotosAction:(PXOneUpPresentation *)arg1;
- (_Bool)oneUpPresentationShouldAutoPlay:(PXOneUpPresentation *)arg1;
- (_UIContextMenuStyle *)oneUpPresentation:(PXOneUpPresentation *)arg1 styleForContextMenuInteraction:(UIContextMenuInteraction *)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (NSArray *)oneUpPresentation:(PXOneUpPresentation *)arg1 accessoriesForContextMenuInteraction:(UIContextMenuInteraction *)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 willEndPreviewingForContextMenuInteraction:(UIContextMenuInteraction *)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 willStartPreviewingForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (_Bool)oneUpPresentation:(PXOneUpPresentation *)arg1 commitPreviewForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (_Bool)oneUpPresentation:(PXOneUpPresentation *)arg1 allowsPreviewCommittingForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (_Bool)oneUpPresentation:(PXOneUpPresentation *)arg1 allowsMultiSelectMenuForInteraction:(UIContextMenuInteraction *)arg2;
- (_Bool)oneUpPresentation:(PXOneUpPresentation *)arg1 allowsActionsForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (_Bool)oneUpPresentation:(PXOneUpPresentation *)arg1 canStartPreviewingForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (NSSet *)oneUpPresentation:(PXOneUpPresentation *)arg1 secondaryIdentifiersForConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)oneUpPresentation:(PXOneUpPresentation *)arg1 previewForDismissingToSecondaryItemWithIdentifier:(id <NSCopying>)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (UITargetedPreview *)oneUpPresentation:(PXOneUpPresentation *)arg1 previewForHighlightingSecondaryItemWithIdentifier:(id <NSCopying>)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (PXAssetReference *)oneUpPresentationInitialAssetReference:(PXOneUpPresentation *)arg1;
- (PXContentPrivacyController *)oneUpPresentationPrivacyController:(PXOneUpPresentation *)arg1;
- (PXPhotosDetailsContext *)oneUpPresentationPhotosDetailsContext:(PXOneUpPresentation *)arg1;
@end

