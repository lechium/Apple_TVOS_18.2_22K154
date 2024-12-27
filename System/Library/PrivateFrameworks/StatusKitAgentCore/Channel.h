//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface Channel : NSManagedObject
{
}

+ (id)channelTypeKeyPath;	// IMP=0x0040000000010b60
+ (id)presenceIdentifierKeyPath;	// IMP=0x0040000000010b53
+ (id)dateChannelCreatedKeyPath;	// IMP=0x0040000000010b46
+ (id)encryptionKeysKeyPath;	// IMP=0x0040000000010b39
+ (id)statusTypeKeyPath;	// IMP=0x0040000000010b2c
+ (id)decomissionedKeyPath;	// IMP=0x0040000000010b1f
+ (id)personalKeyPath;	// IMP=0x0040000000010b12
+ (id)identifierKeyPath;	// IMP=0x0040000000010b05
+ (id)predicateForCreationDateNotNil;	// IMP=0x0040000000010f71
+ (id)predicateForChannelIdentifier:(id)arg1;	// IMP=0x0040000000010ed7
+ (id)predicateForPresenceIdentifier:(id)arg1;	// IMP=0x0040000000010e3d
+ (id)predicateForChannelTypePresence;	// IMP=0x0040000000010dc3
+ (id)predicateForChannelTypeStatus;	// IMP=0x0040000000010d49
+ (id)predicateForDecomissioned:(_Bool)arg1;	// IMP=0x0040000000010ca8
+ (id)predicateForPersonal:(_Bool)arg1;	// IMP=0x0040000000010c07
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x0040000000010b6d
+ (id)sortDescriptorForCreationDateAscending:(_Bool)arg1;	// IMP=0x004000000001112b
+ (id)sortDescriptorForChannelIdentifierOrderedAscending:(_Bool)arg1;	// IMP=0x00400000000110be
+ (id)sortDescriptorForPersonalOrderedAscending:(_Bool)arg1;	// IMP=0x0040000000011051
+ (id)sortDescriptorForStatusTypeIdentifierOrderedAscending:(_Bool)arg1;	// IMP=0x0040000000010fe4
+ (id)fetchRequest;	// IMP=0x004000000008a1b6

// Remaining properties
@property(retain, nonatomic) NSData *channelToken; // @dynamic channelToken;
@property(nonatomic) short channelType; // @dynamic channelType;
@property(retain, nonatomic) NSData *currentOutgoingRatchetState; // @dynamic currentOutgoingRatchetState;
@property(copy, nonatomic) NSDate *dateChannelCreated; // @dynamic dateChannelCreated;
@property(nonatomic) _Bool decomissioned; // @dynamic decomissioned;
@property(retain, nonatomic) NSSet *generatedEncryptionKeys; // @dynamic generatedEncryptionKeys;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *invitedUsers; // @dynamic invitedUsers;
@property(retain, nonatomic) NSData *membershipKey; // @dynamic membershipKey;
@property(retain, nonatomic) NSData *peerKey; // @dynamic peerKey;
@property(nonatomic) _Bool personal; // @dynamic personal;
@property(copy, nonatomic) NSString *presenceIdentifier; // @dynamic presenceIdentifier;
@property(retain, nonatomic) NSSet *receivedInvitations; // @dynamic receivedInvitations;
@property(retain, nonatomic) NSData *serverKey; // @dynamic serverKey;
@property(copy, nonatomic) NSString *serviceIdentifier; // @dynamic serviceIdentifier;
@property(copy, nonatomic) NSString *statusType; // @dynamic statusType;

@end

