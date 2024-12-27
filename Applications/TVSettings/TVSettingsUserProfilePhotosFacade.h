//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PXSharedLibraryStatusProvider, TVSPreferences, TVSettingsUserProfilePhotosSharingFilterItem;

@interface TVSettingsUserProfilePhotosFacade : NSObject
{
    _Bool _sharedLibraryEnabled;	// 8 = 0x8
    NSArray *_sharingFilters;	// 16 = 0x10
    PXSharedLibraryStatusProvider *_sharedLibraryStatusProvider;	// 24 = 0x18
    TVSPreferences *_photosPreferences;	// 32 = 0x20
    TVSettingsUserProfilePhotosSharingFilterItem *_selectedSharingFilter;	// 40 = 0x28
}

+ (id)_allSharingFilters;	// IMP=0x00200000000bd7a5
- (void).cxx_destruct;	// IMP=0x00200000000bd972
@property(retain, nonatomic) TVSettingsUserProfilePhotosSharingFilterItem *selectedSharingFilter; // @synthesize selectedSharingFilter=_selectedSharingFilter;
@property(nonatomic, getter=isSharedLibraryEnabled) _Bool sharedLibraryEnabled; // @synthesize sharedLibraryEnabled=_sharedLibraryEnabled;
@property(readonly, nonatomic) TVSPreferences *photosPreferences; // @synthesize photosPreferences=_photosPreferences;
@property(readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider; // @synthesize sharedLibraryStatusProvider=_sharedLibraryStatusProvider;
@property(copy, nonatomic) NSArray *sharingFilters; // @synthesize sharingFilters=_sharingFilters;
- (void)_updateSharedLibraryEnabledState;	// IMP=0x00100000000bd58d
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00100000000bd4ce
- (void)setSelectedSharingFilterWithID:(id)arg1;	// IMP=0x00100000000bd28f
- (id)init;	// IMP=0x00100000000bd1a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

