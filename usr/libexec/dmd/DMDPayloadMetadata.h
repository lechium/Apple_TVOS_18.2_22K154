//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class DMDConfigurationOrganization, DMDPayload, NSDate, NSDictionary, NSSet, NSString;

@interface DMDPayloadMetadata : NSManagedObject
{
}

+ (_Bool)automaticallyNotifiesObserversOfLastStatusReportTimestamp;	// IMP=0x004000000005f552
+ (_Bool)automaticallyNotifiesObserversOfStateDictionary;	// IMP=0x001000000005f3a4
+ (id)keyPathsForValuesAffectingStatus;	// IMP=0x001000000005f2ea
+ (id)metadataWithPayloadDictionary:(id)arg1 organizationIdentifier:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x001000000005ea7f
+ (id)fetchRequestForPayloadMetadatasPendingStatusUpdateFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x001000000005e9db
+ (id)fetchRequestForActivePayloadMetadatasFromOrganizationWithIdentifier:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x001000000005e93b
+ (id)fetchRequestForPayloadMetadatasFromOrganizationWithIdentifier:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x001000000005e810
- (id)init;	// IMP=0x002000000005fb77
- (id)initWithContext:(id)arg1;	// IMP=0x001000000005fa68
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x001000000005fa39
- (_Bool)validateForDelete:(id *)arg1;	// IMP=0x001000000005fa0a
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x001000000005f9ba
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x001000000005f96a
- (_Bool)validateProperties:(id *)arg1;	// IMP=0x001000000005f7a4
- (void)willSave;	// IMP=0x001000000005f69c
@property(copy, nonatomic) NSDate *lastStatusReportTimestamp; // @dynamic lastStatusReportTimestamp;
@property(copy, nonatomic) NSDictionary *stateDictionary; // @dynamic stateDictionary;
- (void)setNeedsRefreshStatus;	// IMP=0x001000000005f38d
@property(copy, nonatomic) NSString *status; // @dynamic status;
- (id)descriptiveProperties;	// IMP=0x001000000005f1d1
- (id)description;	// IMP=0x001000000005f184
- (void)applyPayloadDictionary:(id)arg1;	// IMP=0x001000000005f17e

// Remaining properties
@property(nonatomic) _Bool available; // @dynamic available;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSSet *incomingPayloadMetadataReferences; // @dynamic incomingPayloadMetadataReferences;
@property(retain, nonatomic) id installMetadata; // @dynamic installMetadata;
@property(nonatomic) _Bool installed; // @dynamic installed;
@property(retain, nonatomic) DMDConfigurationOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSSet *outgoingPayloadMetadataReferences; // @dynamic outgoingPayloadMetadataReferences;
@property(retain, nonatomic) DMDPayload *payload; // @dynamic payload;
@property(nonatomic) _Bool pendingStatusUpdate; // @dynamic pendingStatusUpdate;
@property(nonatomic) _Bool requiresNetworkTether; // @dynamic requiresNetworkTether;
@property(nonatomic) _Bool requiresUnlockedKeychain; // @dynamic requiresUnlockedKeychain;
@property(retain, nonatomic) NSDate *stateChangeTimestamp; // @dynamic stateChangeTimestamp;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

