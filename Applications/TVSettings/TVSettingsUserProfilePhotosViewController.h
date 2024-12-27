//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKPreviewViewController, TVSettingsUserProfileFacade, TVSettingsUserProfilePhotosFacade;

@interface TVSettingsUserProfilePhotosViewController : TSKViewController
{
    TVSettingsUserProfileFacade *_userProfileFacade;	// 8 = 0x8
    TVSettingsUserProfilePhotosFacade *_userProfilePhotosFacade;	// 16 = 0x10
    TSKPreviewViewController *_appPreviewViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000fbcd0
@property(retain, nonatomic) TSKPreviewViewController *appPreviewViewController; // @synthesize appPreviewViewController=_appPreviewViewController;
@property(retain, nonatomic) TVSettingsUserProfilePhotosFacade *userProfilePhotosFacade; // @synthesize userProfilePhotosFacade=_userProfilePhotosFacade;
@property(retain, nonatomic) TVSettingsUserProfileFacade *userProfileFacade; // @synthesize userProfileFacade=_userProfileFacade;
- (void)_didSelectSharingFilterItem:(id)arg1;	// IMP=0x00100000000fbbd1
- (void)_enableMemoriesContent:(id)arg1;	// IMP=0x00100000000fbb76
- (void)_enableiCloudMyPhotoStream:(id)arg1;	// IMP=0x00100000000fbb28
- (void)_enableiCloudSharedAlbums:(id)arg1;	// IMP=0x00100000000fbada
- (void)_enableiCloudPhotoLibrary:(id)arg1;	// IMP=0x00100000000fba8c
- (id)_sharingFilterGroup;	// IMP=0x00100000000fb870
- (id)_iCloudPhotosGroup;	// IMP=0x00100000000fb228
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000fb0ff
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000fb07a
- (id)loadSettingGroups;	// IMP=0x00100000000fafa9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000faf60
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000faecd
- (void)dealloc;	// IMP=0x00100000000fae73
- (id)initWithUserProfileFacade:(id)arg1;	// IMP=0x00100000000fadb5

@end

