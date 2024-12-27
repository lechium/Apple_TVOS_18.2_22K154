//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, UPDManagedObjectsChangeInfo;

__attribute__((visibility("hidden")))
@interface UPDManagedObjectContextChangeInfo : NSObject
{
    _Bool _hasActiveProfileSwitched;	// 8 = 0x8
    _Bool _hasPrimaryProfileSwitched;	// 9 = 0x9
    _Bool _hasProfilesSyncHomeIdentifierUpdated;	// 10 = 0xa
    UPDManagedObjectsChangeInfo *_profilesChangeInfo;	// 16 = 0x10
    UPDManagedObjectsChangeInfo *_profileSettingsChangeInfo;	// 24 = 0x18
    UPDManagedObjectsChangeInfo *_profileTombstonesChangeInfo;	// 32 = 0x20
    UPDManagedObjectsChangeInfo *_candidateProfilesChangeInfo;	// 40 = 0x28
    UPDManagedObjectsChangeInfo *_profilePictureCacheItemsChangeInfo;	// 48 = 0x30
    NSManagedObjectContext *_managedObjectContext;	// 56 = 0x38
    UPDManagedObjectsChangeInfo *_objectsChangeInfo;	// 64 = 0x40
}

+ (_Bool)_hasPreferredPictureAltDSIDChangesInGenericProfiles:(id)arg1;	// IMP=0x0060000000052411
- (void).cxx_destruct;	// IMP=0x00000000000524ea
@property(readonly, nonatomic) UPDManagedObjectsChangeInfo *objectsChangeInfo; // @synthesize objectsChangeInfo=_objectsChangeInfo;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) _Bool hasProfilesSyncHomeIdentifierUpdated; // @synthesize hasProfilesSyncHomeIdentifierUpdated=_hasProfilesSyncHomeIdentifierUpdated;
@property(readonly, nonatomic) _Bool hasPrimaryProfileSwitched; // @synthesize hasPrimaryProfileSwitched=_hasPrimaryProfileSwitched;
@property(readonly, nonatomic) _Bool hasActiveProfileSwitched; // @synthesize hasActiveProfileSwitched=_hasActiveProfileSwitched;
- (_Bool)_hasPreferredPictureAltDSIDChanges;	// IMP=0x0000000000052325
- (void)_populateConfigurationRelatedProperties;	// IMP=0x00000000000521ca
@property(readonly, nonatomic) _Bool hasProfilePictureChanges;
@property(readonly, nonatomic) _Bool hasCandidateProfileChanges;
@property(readonly, nonatomic) _Bool hasProfileChanges;
@property(readonly, nonatomic) _Bool hasPrimaryProfileICloudAltDSIDUpdated;
@property(readonly, nonatomic) UPDManagedObjectsChangeInfo *profilePictureCacheItemsChangeInfo; // @synthesize profilePictureCacheItemsChangeInfo=_profilePictureCacheItemsChangeInfo;
@property(readonly, nonatomic) UPDManagedObjectsChangeInfo *candidateProfilesChangeInfo; // @synthesize candidateProfilesChangeInfo=_candidateProfilesChangeInfo;
@property(readonly, nonatomic) UPDManagedObjectsChangeInfo *profileTombstonesChangeInfo; // @synthesize profileTombstonesChangeInfo=_profileTombstonesChangeInfo;
@property(readonly, nonatomic) UPDManagedObjectsChangeInfo *profileSettingsChangeInfo; // @synthesize profileSettingsChangeInfo=_profileSettingsChangeInfo;
@property(readonly, nonatomic) UPDManagedObjectsChangeInfo *profilesChangeInfo; // @synthesize profilesChangeInfo=_profilesChangeInfo;
- (id)initWithManagedObjectContext:(id)arg1;	// IMP=0x0000000000051966

@end

