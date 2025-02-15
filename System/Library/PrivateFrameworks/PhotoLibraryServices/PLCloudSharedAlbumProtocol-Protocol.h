//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAlbumProtocol-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSOrderedSet, NSString, PLCloudSharedAlbumInvitationRecord;

@protocol PLCloudSharedAlbumProtocol <PLAlbumProtocol>
@property(nonatomic) _Bool cloudNotificationsEnabled;
@property(readonly, retain, nonatomic) NSDate *cloudFirstRecentBatchDate;
@property(readonly, retain, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords;
@property(readonly, retain, nonatomic) NSString *localizedSharedWithLabel;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(readonly) int cloudRelationshipStateValue;
@property(retain, nonatomic) NSString *cloudPersonID;
@property(retain, nonatomic) NSDate *cloudLastContributionDate;
@property(retain, nonatomic) NSDate *cloudCreationDate;
@property(retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property unsigned long long unseenAssetsCountIntegerValue;
@property(retain, nonatomic) NSNumber *unseenAssetsCount;
@property(retain, nonatomic) NSOrderedSet *invitationRecords;
@property(retain, nonatomic) NSString *publicURL;
@property(retain, nonatomic) NSDate *cloudSubscriptionDate;
@property(nonatomic) _Bool cloudOwnerIsWhitelisted;
@property(retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property(retain, nonatomic) NSString *cloudOwnerEmail;
@property(retain, nonatomic) NSString *cloudOwnerFullName;
@property(retain, nonatomic) NSString *cloudOwnerLastName;
@property(retain, nonatomic) NSString *cloudOwnerFirstName;
@property(retain, nonatomic) NSDictionary *cloudMetadata;
@property(retain, nonatomic) NSString *cloudGUID;
- (void)userDeleteSubscriberRecord:(PLCloudSharedAlbumInvitationRecord *)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned long long *)arg1 count:(unsigned long long *)arg2 showsProgress:(_Bool *)arg3;
- (void)updateCloudLastContributionDateWithDate:(NSDate *)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(NSDate *)arg1;
- (NSString *)cloudOwnerDisplayNameIncludingEmail:(_Bool)arg1 allowsEmail:(_Bool)arg2;
- (NSString *)localizedSharedByLabelAllowsEmail:(_Bool)arg1;
@end

