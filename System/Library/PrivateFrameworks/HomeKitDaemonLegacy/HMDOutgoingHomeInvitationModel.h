//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDOutgoingHomeInvitationModel
{
}

+ (id)properties;	// IMP=0x00600000000cf0db
- (id)dependentUUIDs;	// IMP=0x00000000000cebf5

// Remaining properties
@property(retain, nonatomic) NSDate *expiryDate; // @dynamic expiryDate;
@property(retain, nonatomic) NSNumber *invitationState; // @dynamic invitationState;
@property(retain, nonatomic) NSString *inviteeDestinationAddress; // @dynamic inviteeDestinationAddress;
@property(retain, nonatomic) NSString *messageIdentifier; // @dynamic messageIdentifier;
@property(retain, nonatomic) NSArray *operationIdentifiers; // @dynamic operationIdentifiers;
@property(retain, nonatomic) NSArray *operations; // @dynamic operations;
@property(retain, nonatomic) NSNumber *responseReceived; // @dynamic responseReceived;
@property(retain, nonatomic) NSDictionary *user; // @dynamic user;

@end

