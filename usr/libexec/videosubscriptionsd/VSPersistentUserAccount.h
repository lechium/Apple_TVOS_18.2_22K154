//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSObject, NSString, NSURL, VSAppleSubscription;

@interface VSPersistentUserAccount : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x001000000000d6d7

// Remaining properties
@property(copy, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(nonatomic) long long accountType; // @dynamic accountType;
@property(retain, nonatomic) VSAppleSubscription *appleSubscription; // @dynamic appleSubscription;
@property(copy, nonatomic) NSString *authenticationData; // @dynamic authenticationData;
@property(copy, nonatomic) NSDate *billingCycleEndDate; // @dynamic billingCycleEndDate;
@property(copy, nonatomic) NSString *billingIdentifier; // @dynamic billingIdentifier;
@property(copy, nonatomic) NSDate *created; // @dynamic created;
@property(nonatomic) _Bool developer; // @dynamic developer;
@property(copy, nonatomic) NSString *deviceIdentifier; // @dynamic deviceIdentifier;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(nonatomic) long long deviceType; // @dynamic deviceType;
@property(nonatomic) long long keychainItemHash; // @dynamic keychainItemHash;
@property(copy, nonatomic) NSDate *modified; // @dynamic modified;
@property(copy, nonatomic) NSString *providerID; // @dynamic providerID;
@property(nonatomic) _Bool requiresSystemTrust; // @dynamic requiresSystemTrust;
@property(nonatomic) _Bool signedOut; // @dynamic signedOut;
@property(copy, nonatomic) NSString *sourceIdentifier; // @dynamic sourceIdentifier;
@property(nonatomic) long long sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSObject *tierIdentifiers; // @dynamic tierIdentifiers;
@property(copy, nonatomic) NSURL *updateURL; // @dynamic updateURL;
@property(nonatomic) short version; // @dynamic version;

@end

