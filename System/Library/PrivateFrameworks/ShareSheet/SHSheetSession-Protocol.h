//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class LPLinkMetadata, NSArray, NSString, SFCollaborationItemsProvider, SFUILoadedMetadataCollection, SHSheetActivitiesManager, SHSheetActivityItemsManager, SHSheetUIServiceClientContext, UIActivity, UIActivityViewController, UISDShareSheetSessionConfiguration, UIViewController;
@protocol SFCollaborationItem, SFPeopleSuggestion, _SHSheetScene;

@protocol SHSheetSession <NSObject>
@property(readonly, copy, nonatomic) NSArray *peopleSuggestionBundleIds;
@property(readonly, nonatomic) _Bool shouldSkipPeopleSuggestions;
@property(readonly, nonatomic) LPLinkMetadata *photosHeaderMetadata;
@property(readonly, copy, nonatomic) NSArray *activityTypesToCreateInShareService;
@property(readonly, nonatomic) _Bool isContentManaged;
@property(readonly, copy, nonatomic) NSArray *selectedAssetIdentifiers;
@property(readonly, nonatomic) UIViewController *customOptionsViewController;
@property(readonly, copy, nonatomic) NSString *customOptionsTitle;
@property(readonly, copy, nonatomic) NSArray *customizationGroups;
@property(readonly, nonatomic) _Bool isModeSwitchDisabled;
@property(readonly, nonatomic) _Bool isCollaborative;
@property(readonly, nonatomic) _Bool supportsSendCopy;
@property(readonly, nonatomic) _Bool supportsCollaboration;
@property(readonly, nonatomic) id <SFCollaborationItem> collaborationItem;
@property(retain, nonatomic) id <SFPeopleSuggestion> currentPeopleSuggestion;
@property(readonly, nonatomic) unsigned long long xrRenderingMode;
@property(readonly, nonatomic) id <_SHSheetScene> remoteScene;
@property(readonly, nonatomic) _Bool showCustomScene;
@property(readonly, nonatomic) _Bool useRemoteUIService;
@property(readonly, nonatomic) _Bool showHeroActionsHorizontally;
@property(readonly, nonatomic) _Bool instantShareSheet;
@property(readonly, nonatomic) _Bool isAirdropOnly;
@property(readonly, nonatomic) _Bool showHeaderSpecialization;
@property(readonly, nonatomic) _Bool showOptions;
@property(readonly, nonatomic) NSString *topContentSectionText;
@property(readonly, nonatomic) _Bool hideSuggestions;
@property(readonly, nonatomic) _Bool hideNavigationBar;
@property(readonly, nonatomic) _Bool hideHeaderView;
@property(readonly, nonatomic) _Bool configureForPhotosEdit;
@property(readonly, nonatomic) _Bool configureForCloudSharing;
@property(readonly, nonatomic) _Bool whitelistActionActivitiesOnly;
@property(readonly, nonatomic) _Bool showKeyboardAutomatically;
@property(readonly, nonatomic) _Bool canPerformSharePlay;
@property(readonly, nonatomic) _Bool showSharePlayProminently;
@property(readonly, nonatomic) _Bool shouldSuggestFamilyMembers;
@property(readonly, nonatomic) _Bool allowsEmbedding;
@property(readonly, nonatomic) long long excludedActivityCategories;
@property(readonly, copy, nonatomic) NSArray *heroActionActivityTypes;
@property(readonly, copy, nonatomic) NSArray *activityTypeOrder;
@property(readonly, copy, nonatomic) NSArray *excludedActivityTypes;
@property(readonly, copy, nonatomic) NSArray *includedActivityTypes;
@property(readonly, nonatomic) _Bool isExpanded;
@property(readonly, nonatomic) long long sharingStyle;
@property(readonly, nonatomic) SFUILoadedMetadataCollection *metadataCollection;
@property(readonly, nonatomic) UISDShareSheetSessionConfiguration *configuration;
@property(readonly, nonatomic) UIActivity *performingActivity;
@property(readonly, nonatomic) SHSheetActivityItemsManager *activityItemsManager;
@property(readonly, nonatomic) SHSheetActivitiesManager *activitiesManager;
@property(readonly, nonatomic) SFCollaborationItemsProvider *collaborationItemsProvider;
@property(readonly, nonatomic) __weak UIActivityViewController *activityViewController;
@property(readonly, copy, nonatomic) NSString *identifier;
- (SHSheetUIServiceClientContext *)createClientContext;
@end

