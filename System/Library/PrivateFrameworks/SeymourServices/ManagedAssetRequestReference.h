//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface ManagedAssetRequestReference : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000611920

// Remaining properties
@property(nonatomic, copy) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(nonatomic) double expirationTime; // @dynamic expirationTime;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic) int priority; // @dynamic priority;
@property(nonatomic, copy) NSString *remoteURL; // @dynamic remoteURL;
@property(nonatomic) double requestTime; // @dynamic requestTime;
@property(nonatomic, copy) NSString *type; // @dynamic type;

@end

