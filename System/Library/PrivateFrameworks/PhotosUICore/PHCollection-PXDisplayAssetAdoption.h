//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHCollection.h>

@class NSDate, NSDictionary, NSString, NSURL, PHAssetCollection, PHCollectionList;

@interface PHCollection (PXDisplayAssetAdoption)
@property(readonly, nonatomic) id px_cheapLogIdentifier;
@property(readonly, nonatomic) _Bool px_isSavedTodayCollection;
@property(readonly, nonatomic) _Bool px_isRecentlySharedCollection;
@property(readonly, nonatomic) _Bool px_isRecentlyEditedCollection;
@property(readonly, nonatomic) _Bool px_isRecentlyViewedCollection;
@property(readonly, nonatomic) _Bool px_isRecentlySavedCollection;
@property(readonly, nonatomic) _Bool px_isTransientPlacesCollection;
@property(readonly, nonatomic) _Bool px_isImportAssetCollection;
@property(readonly, nonatomic) _Bool px_isImportSessionCollection;
@property(readonly, nonatomic) _Bool px_isImportHistoryCollection;
@property(readonly, nonatomic) _Bool px_isMomentShareVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMapVirtualCollection;
@property(readonly, nonatomic) _Bool px_isContentSyndicationAllPhotosAlbum;
@property(readonly, nonatomic) _Bool px_isContentSyndicationVirtualCollection;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMyAlbumsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isAllAlbumsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isSharedActivityVirtualCollection;
@property(readonly, nonatomic) _Bool px_isPeopleVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMemoriesVirtualCollection;
@property(readonly, nonatomic) _Bool px_isSearchResultsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isBookmarksVirtualCollection;
@property(readonly, nonatomic) _Bool px_isWallpaperSuggestionsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isFeaturedPhotosCollection;
@property(readonly, nonatomic) _Bool px_isTripsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isEventsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMomentsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isPhotosVirtualCollection;
@property(readonly, nonatomic) _Bool px_isProject;
@property(readonly, nonatomic) _Bool px_isMacSyncedFacesFolder;
@property(readonly, nonatomic) _Bool px_isMacSyncedEventsFolder;
@property(readonly, nonatomic) _Bool px_isMacSyncedFacesAlbum;
@property(readonly, nonatomic) _Bool px_isMacSyncedRegularAlbum;
@property(readonly, nonatomic) _Bool px_isMacSyncedAlbum;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsAndActivityFolder;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsFolder;
@property(readonly, nonatomic) _Bool px_isUtilitiesFolder;
@property(readonly, nonatomic) _Bool px_isMediaTypesFolder;
@property(readonly, nonatomic) _Bool px_isAllMacSyncedAlbumsFolder;
@property(readonly, nonatomic) _Bool px_isContentSyndicationFolder;
@property(readonly, nonatomic) _Bool px_isProjectsFolder;
@property(readonly, nonatomic) _Bool px_isTopLevelFolder;
@property(readonly, nonatomic) _Bool px_isRegularFolder;
@property(readonly, nonatomic) _Bool px_isSmartFolder;
@property(readonly, nonatomic) _Bool px_isFolder;
@property(readonly, nonatomic) _Bool px_isContentSyndicationAlbum;
@property(readonly, nonatomic) _Bool px_isMomentShare;
@property(readonly, nonatomic) _Bool px_isSuggestion;
@property(readonly, nonatomic) _Bool px_isTrip;
@property(readonly, nonatomic) _Bool px_isEvent;
@property(readonly, nonatomic) _Bool px_isMonthHighlight;
@property(readonly, nonatomic) _Bool px_isDayHighlight;
@property(readonly, nonatomic) _Bool px_isDayGroupHighlight;
@property(readonly, nonatomic) _Bool px_isHighlightEnrichedWithAssetMetadataAndScenesProcessed;
@property(readonly, nonatomic) _Bool px_isHighlight;
@property(readonly, nonatomic) _Bool px_isMemory;
@property(readonly, nonatomic) _Bool px_isMoment;
@property(readonly, nonatomic) _Bool px_isInReadWriteCloudLibrary;
@property(readonly, nonatomic) _Bool px_isCloudMultipleContributorsEnabled;
@property(readonly, nonatomic) _Bool px_isOwnedSharedAlbum;
@property(readonly, nonatomic) _Bool px_isSharedAlbum;
@property(readonly, nonatomic) _Bool px_containsPrivateContent;
@property(readonly, nonatomic) _Bool px_isPrivacySensitiveAlbum;
@property(readonly, nonatomic) _Bool px_isRecoveredSmartAlbum;
@property(readonly, nonatomic) _Bool px_isAllLibraryDuplicatesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSpatialSmartAlbum;
@property(readonly, nonatomic) _Bool px_isPanoramasSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSharedLibrarySharingSuggestion;
@property(readonly, nonatomic) _Bool px_isSharedLibrarySharingSuggestionsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isUnableToUploadSmartAlbum;
@property(readonly, nonatomic) _Bool px_isDuplicatesAlbum;
@property(readonly, nonatomic) _Bool px_isRecentsCollection;
@property(readonly, nonatomic) _Bool px_isUtilityCollection;
@property(readonly, nonatomic) _Bool px_isProResSmartAlbum;
@property(readonly, nonatomic) _Bool px_isCinematicSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRAWSmartAlbum;
@property(readonly, nonatomic) _Bool px_isLongExposuresSmartAlbum;
@property(readonly, nonatomic) _Bool px_isAnimatedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isLivePhotosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isDepthEffectSmartAlbum;
@property(readonly, nonatomic) _Bool px_isScreenshotsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSelfPortraitsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSlomoVideosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isBurstsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isTimelapsesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isVideosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isScreenRecordingsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyEditedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyDeletedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyAddedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isHiddenSmartAlbum;
@property(readonly, nonatomic) _Bool px_isPlacesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isFavoritesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isAllPhotosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isLemonadeUtilitiesAlbum;
@property(readonly, nonatomic) _Bool px_isMediaTypeSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRootSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSmartAlbum;
@property(readonly, nonatomic) _Bool px_isUserSmartAlbum;
@property(readonly, nonatomic) _Bool px_isMyPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool px_isImportedAlbum;
@property(readonly, nonatomic) _Bool px_isRegularAlbum;
@property(readonly, nonatomic) _Bool px_isUserCreated;
@property(readonly, nonatomic) _Bool px_wantsShareAllAction;
@property(readonly, nonatomic) _Bool px_wantsCurationByDefault;
@property(readonly, nonatomic) _Bool px_supportsFastCuration;
@property(readonly, nonatomic) _Bool px_shouldUseFacesRectForSmartCropping;
@property(readonly, nonatomic) _Bool px_allowsMoveToPersonalLibrary;
@property(readonly, nonatomic) _Bool px_allowsMoveToSharedLibrary;
@property(readonly, nonatomic) _Bool px_isDeletable;
@property(readonly, nonatomic) _Bool px_isRenamable;
@property(readonly, nonatomic) _Bool px_canRearrangeContent;
@property(readonly, nonatomic) _Bool px_canCreateContent;
@property(readonly, nonatomic) _Bool px_canAddContent;
@property(readonly, nonatomic) _Bool px_canRemoveContent;
@property(readonly, nonatomic) _Bool px_canDeleteContent;
@property(readonly, nonatomic) _Bool px_allowsImplicitSelectionForProjectOrSharingAction;
@property(readonly, nonatomic) _Bool px_allowsKeyAssetDisplay;
@property(readonly, nonatomic) NSString *px_symbolImageName;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) _Bool px_canPerformFavoriteAction;
@property(readonly, nonatomic) _Bool px_isFavorite;
@property(readonly, nonatomic) _Bool px_isEmpty;
- (_Bool)px_isTransientCollectionWithIdentifier:(id)arg1;	// IMP=0x0020000000c3da0b
@property(readonly, nonatomic) NSURL *px_navigationURL;
- (id)px_navigationURLWithSelectedObject:(id)arg1;	// IMP=0x0020000000c3d84f
- (id)px_navigationURLComponents;	// IMP=0x0020000000c3d6fd
- (id)px_navigationURLQueryItemWithPrefix:(id)arg1;	// IMP=0x0020000000c3d5c2
- (id)px_navigationWellKnownName;	// IMP=0x0020000000c3d51a
- (id)px_navigationURLHost;	// IMP=0x0020000000c3d472
- (id)px_exportFolderName;	// IMP=0x0020000000c3d422
@property(readonly, nonatomic) NSDictionary *px_debugDictionary;
- (_Bool)px_fetchIsEmptyWithOptions:(id)arg1;	// IMP=0x0020000000c3d2b2
- (_Bool)px_fetchIsEmpty;	// IMP=0x0020000000c3d237
- (id)px_fetchContainedAssetCollections;	// IMP=0x0020000000c3d17a
- (id)px_fetchAncestryIncludingRoot:(_Bool)arg1;	// IMP=0x0020000000c3cf93
- (id)px_fetchContainerTitle;	// IMP=0x0020000000c3ced6
- (id)px_fetchContainer;	// IMP=0x0020000000c3ce16
@property(readonly, nonatomic) PHAssetCollection *px_rootAssetCollection;
@property(readonly, nonatomic) PHCollectionList *px_rootCollectionList;
@property(readonly, nonatomic) _Bool px_allowsSpringLoading;
@property(readonly, nonatomic) unsigned long long px_assetsDropMode;

// Remaining properties
@property(readonly, nonatomic) _Bool canContainAssets;
@property(readonly, nonatomic) _Bool canContainCollections;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly) Class superclass;
@end

