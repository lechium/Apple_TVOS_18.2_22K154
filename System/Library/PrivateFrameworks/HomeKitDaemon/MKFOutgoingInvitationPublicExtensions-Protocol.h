//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMRestrictedGuestHomeAccessSchedule, NSArray, NSUUID;
@protocol MKFHome;

@protocol MKFOutgoingInvitationPublicExtensions
+ (NSUUID *)modelIDForParentRelationshipTo:(id <MKFHome>)arg1;
- (NSArray *)allowedAccessoryUUIDs;
- (HMRestrictedGuestHomeAccessSchedule *)restrictedGuestSchedule;
- (_Bool)populateWorkingStoreFromRestrictedGuestSchedule:(HMRestrictedGuestHomeAccessSchedule *)arg1;
@end

