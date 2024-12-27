//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAirPlayAccessoryPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFMediaAccessory-Protocol.h>

@class HMFPairingIdentity, MKFAirPlayAccessoryDatabaseID, NSArray, NSDate, NSNumber, NSSet, NSString;
@protocol MKFUser;

@protocol MKFAirPlayAccessory <MKFMediaAccessory, MKFAirPlayAccessoryPublicExtensions>
@property(readonly, copy, nonatomic) MKFAirPlayAccessoryDatabaseID *databaseID;
@property(readonly, retain, nonatomic) NSArray *pairedUsers;
@property(copy, nonatomic) NSString *password;
@property(retain, nonatomic) NSSet *pairingsToRemove;
@property(retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property(copy, nonatomic) NSNumber *needsPairingAudit;
@property(copy, nonatomic) NSNumber *minimumUserPriviledge;
@property(copy, nonatomic) NSDate *lastPairingAuditTime;
- (void)removePairedUsersObject:(id <MKFUser>)arg1;
- (void)addPairedUsersObject:(id <MKFUser>)arg1;
@end

