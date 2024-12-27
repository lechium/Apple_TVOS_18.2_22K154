//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@protocol PLAssetsdNotificationServiceProtocol <NSObject>
- (void)noteSharedLibrarySuggestionsWithNotificationDeliveryDate:(NSDate *)arg1;
- (void)notifyEndOfInterestForUnrenderedCinematicVideoItems;
- (void)notifyStartOfInterestForUnrenderedCinematicVideoItems;
- (void)notePhotosChallengeNewQuestionsWithNotificationDeliveryDate:(NSDate *)arg1;
- (void)notePhotosChallengeSubmissionWithNotificationDeliveryDate:(NSDate *)arg1;
- (void)noteReadyToViewMomentShareWithUUID:(NSString *)arg1;
- (void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(NSArray *)arg1 thumbnailImageData:(NSData *)arg2 notificationTitle:(NSString *)arg3 notificationSubtitle:(NSString *)arg4;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(NSString *)arg1;
- (void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(NSString *)arg1 acceptInvitation:(_Bool)arg2;
- (void)noteInterestingMemoryAlertViewedWithUUID:(NSString *)arg1;
- (void)noteInterestingMemoryAlertWithMemoryUUID:(NSString *)arg1 notificationDeliveryDate:(NSDate *)arg2;
- (void)userViewedNotificationWithAlbumCloudGUID:(NSString *)arg1;
@end

