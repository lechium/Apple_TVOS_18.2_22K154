//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFPerson-Protocol.h>
#import <HomeKitDaemon/MKFPhotosPersonPublicExtensions-Protocol.h>

@class MKFPhotosPersonDatabaseID, NSUUID;
@protocol MKFHome, MKFHomePerson, MKFUser;

@protocol MKFPhotosPerson <MKFPerson, MKFPhotosPersonPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFPhotosPersonDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFUser> user;
@property(retain, nonatomic) id <MKFHomePerson> linkedHomePerson;
@property(copy, nonatomic) NSUUID *photoLibraryPersonUUID;
@end

