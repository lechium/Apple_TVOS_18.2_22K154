//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, PXCPLUIStatusProvider, PXSharedLibraryStatusProvider, PXStoryMemoryFeedDataSourceManager, TVISScreenSaverServiceController, TVPhotoCollection, TVPhotoCollectionGroup, TVSPreferences, TVSettingsScreenSaverToggleViewModel, TVSettingsUserProfileFacade, TVSettingsUserProfileListFacade;
@protocol OS_dispatch_queue;

@interface TVSettingsScreenSaverFacade : NSObject
{
    NSArray *_availablePhotoCollections;	// 8 = 0x8
    TVPhotoCollection *_selectedPhotoCollection;	// 16 = 0x10
    TVSPreferences *_screenSaverAppPrefs;	// 24 = 0x18
    TVSPreferences *_airPlayAppPrefs;	// 32 = 0x20
    id _screenSaverObserverToken;	// 40 = 0x28
    _Bool _isFetchingCollections;	// 48 = 0x30
    id _didBecomeActiveObserver;	// 56 = 0x38
    long long _idleScreenSaverType;	// 64 = 0x40
    PXStoryMemoryFeedDataSourceManager *_dataSourceManager;	// 72 = 0x48
    NSMutableDictionary *_idleScreenThemesById;	// 80 = 0x50
    NSMutableDictionary *_photosLibraryFiltersById;	// 88 = 0x58
    _Bool _photosSourceHasMemories;	// 96 = 0x60
    _Bool _hasPhotosCompletedInitialSync;	// 97 = 0x61
    _Bool _isPhotosSourceStateOn;	// 98 = 0x62
    NSArray *_availablePhotoCollectionGroups;	// 104 = 0x68
    NSArray *_iCloudPhotosAvailablePhotoCollectionGroups;	// 112 = 0x70
    NSArray *_otherAvailablePhotoCollectionGroups;	// 120 = 0x78
    NSArray *_idleScreenThemes;	// 128 = 0x80
    NSArray *_photosLibraryFilters;	// 136 = 0x88
    NSString *_selectedLibraryFilterName;	// 144 = 0x90
    TVSettingsScreenSaverToggleViewModel *_photosSourceFilter;	// 152 = 0x98
    NSString *_photosSourceStateString;	// 160 = 0xa0
    TVISScreenSaverServiceController *_serviceController;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 176 = 0xb0
    TVSettingsUserProfileListFacade *_userProfileListFacade;	// 184 = 0xb8
    TVSettingsUserProfileFacade *_userProfileFacade;	// 192 = 0xc0
    PXCPLUIStatusProvider *_statusProvider;	// 200 = 0xc8
    PXSharedLibraryStatusProvider *_sharedLibraryStatusProvider;	// 208 = 0xd0
}

+ (id)keyPathsForValuesAffectingScreenSaverName;	// IMP=0x00200000000bf53d
+ (id)sharedInstance;	// IMP=0x00100000000bea1c
- (void).cxx_destruct;	// IMP=0x00200000000c3758
@property(readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider; // @synthesize sharedLibraryStatusProvider=_sharedLibraryStatusProvider;
@property(retain, nonatomic) PXCPLUIStatusProvider *statusProvider; // @synthesize statusProvider=_statusProvider;
@property(readonly, nonatomic) TVSettingsUserProfileFacade *userProfileFacade; // @synthesize userProfileFacade=_userProfileFacade;
@property(readonly, nonatomic) TVSettingsUserProfileListFacade *userProfileListFacade; // @synthesize userProfileListFacade=_userProfileListFacade;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) TVISScreenSaverServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(readonly, nonatomic) NSString *photosSourceStateString; // @synthesize photosSourceStateString=_photosSourceStateString;
@property(nonatomic) _Bool isPhotosSourceStateOn; // @synthesize isPhotosSourceStateOn=_isPhotosSourceStateOn;
@property(readonly, copy, nonatomic) TVSettingsScreenSaverToggleViewModel *photosSourceFilter; // @synthesize photosSourceFilter=_photosSourceFilter;
@property(copy, nonatomic) NSString *selectedLibraryFilterName; // @synthesize selectedLibraryFilterName=_selectedLibraryFilterName;
@property(readonly, copy, nonatomic) NSArray *photosLibraryFilters; // @synthesize photosLibraryFilters=_photosLibraryFilters;
@property(readonly, copy, nonatomic) NSArray *idleScreenThemes; // @synthesize idleScreenThemes=_idleScreenThemes;
@property(nonatomic) _Bool hasPhotosCompletedInitialSync; // @synthesize hasPhotosCompletedInitialSync=_hasPhotosCompletedInitialSync;
@property(nonatomic) _Bool photosSourceHasMemories; // @synthesize photosSourceHasMemories=_photosSourceHasMemories;
@property(readonly, copy, nonatomic) NSArray *otherAvailablePhotoCollectionGroups; // @synthesize otherAvailablePhotoCollectionGroups=_otherAvailablePhotoCollectionGroups;
@property(readonly, copy, nonatomic) NSArray *iCloudPhotosAvailablePhotoCollectionGroups; // @synthesize iCloudPhotosAvailablePhotoCollectionGroups=_iCloudPhotosAvailablePhotoCollectionGroups;
@property(readonly, copy, nonatomic) NSArray *availablePhotoCollectionGroups; // @synthesize availablePhotoCollectionGroups=_availablePhotoCollectionGroups;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000c35e0
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00100000000c330b
- (void)_updatePhotosSourceHasMemories;	// IMP=0x00100000000c3286
- (void)_updateCPLStatus;	// IMP=0x00100000000c3226
- (id)_iCloudPhotosScreenSaverIdentifier;	// IMP=0x00100000000c3215
- (id)_memoryScreenSaverIdentifier;	// IMP=0x00100000000c3204
- (void)_updateUserPhotoCollections;	// IMP=0x00100000000c310b
- (void)_invalidatePhotoCollections;	// IMP=0x00100000000c30b9
- (void)_fetchPhotoCollections;	// IMP=0x00100000000c2f11
- (void)_openApplicationWithIdentifer:(id)arg1;	// IMP=0x00100000000c2c3d
- (void)_photoSourcesUpdated:(id)arg1;	// IMP=0x00100000000c2c2b
- (void)launchPhotoSourcesDaemon;	// IMP=0x00100000000c2c1a
- (void)killPhotoSourcesDaemon;	// IMP=0x00100000000c2c09
- (void)disableScreenSaverProviders;	// IMP=0x00100000000c289f
- (void)screenSaverService:(id)arg1 didUpdateActiveScreenSaver:(id)arg2;	// IMP=0x00100000000c27f2
- (void)setIdleScreenLibraryFilterTypeToActiveStateWithIdentifier:(id)arg1;	// IMP=0x00100000000c27d7
- (void)setIdleScreenThemeWithViewModel:(id)arg1 toActiveState:(_Bool)arg2;	// IMP=0x00100000000c273e
@property(copy, nonatomic) NSString *selectedIdleScreenRefreshInterval;
@property(readonly, copy, nonatomic) NSArray *availableIdleScreenRefreshIntervals;
@property(nonatomic) _Bool useIdleScreen;
- (void)_updateActiveThemes;	// IMP=0x00100000000c199c
- (id)_modelFromSettingsOption:(id)arg1;	// IMP=0x00100000000c186b
- (void)setAuthenticationNeededToChangeiCloudPhotoOptions;	// IMP=0x00100000000c1852
- (void)setiCloudSharedPhotosEnabled:(_Bool)arg1 presentingViewController:(id)arg2 propertySetCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c1839
- (void)setiCloudPhotoLibraryEnabled:(_Bool)arg1 presentingViewController:(id)arg2 propertySetCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c1820
@property(readonly, nonatomic) _Bool myPhotosScreenSaverSelected;
@property(readonly, nonatomic) _Bool primaryUseriCloudSharedPhotosEnabled;
@property(readonly, nonatomic) _Bool defaultUserSignedIn;
@property(readonly, nonatomic) _Bool primaryUseriCloudPhotoLibraryEnabled;
@property(readonly, nonatomic) _Bool myPhotosScreenSaverOptionShouldBeEnabled;
@property(copy, nonatomic) NSURL *conferenceRoomDisplayBackgroundPhotoURL;
@property(nonatomic, getter=isConferenceRoomDisplayEnabled) _Bool conferenceRoomDisplayEnabled;
@property(copy, nonatomic) NSString *conferenceRoomDisplayMessage;
// Error: Property attributes should begin with the type ('T') attribute, property name: transitionType
// Property attributes: (null)

@property(nonatomic) long long timePerSlide;
@property(readonly, copy, nonatomic) NSArray *availableTimesPerSlide;
@property(readonly, nonatomic) NSString *screenSaverName;
@property(nonatomic) long long idleScreenSaverType;
@property(copy, nonatomic) NSString *screenSaverStyle;
@property(readonly, nonatomic) NSString *screenSaverPhotoCollectionIdentifier;
@property(readonly, nonatomic) id screenSaverType;
- (void)invalidateCachedAvailablePhotoCollectionGroups;	// IMP=0x00100000000c0e47
- (void)_createCustomPhotoCollectionGroups;	// IMP=0x00100000000c08f4
- (void)_recalculatePhotoCollections;	// IMP=0x00100000000bfcd8
@property(readonly, nonatomic) TVPhotoCollectionGroup *selectedPhotoCollectionGroup;
@property(retain, nonatomic) TVPhotoCollection *selectedPhotoCollection;
@property(readonly, copy, nonatomic) NSArray *availablePhotoCollections;
@property(nonatomic) _Bool allowsScreenSaverOverMusic;
@property(nonatomic) long long activationDelay;
@property(readonly, copy, nonatomic) NSArray *availableActivationDelays;
- (void)prefetchScreensaverCollections;	// IMP=0x00100000000bf39b
- (void)dealloc;	// IMP=0x00100000000bf2c8
- (void)_removeUserProfileFacadeObservers;	// IMP=0x00100000000bf255
- (void)_addUserProfileFacadeObservers;	// IMP=0x00100000000bf1dc
- (id)init;	// IMP=0x00100000000beaf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

