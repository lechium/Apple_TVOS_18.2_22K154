//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFModel-Protocol.h>
#import <HomeKitDaemon/MKFResidentPublicExtensions-Protocol.h>

@class HMFPairingIdentity, MKFResidentDatabaseID, NSData, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFAppleMediaAccessory, MKFDevice, MKFHome;

@protocol MKFResident <MKFModel, MKFResidentPublicExtensions>
@property(readonly, copy, nonatomic) MKFResidentDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(retain, nonatomic) id <MKFDevice> device;
@property(retain, nonatomic) id <MKFAppleMediaAccessory> appleMediaAccessory;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(retain, nonatomic) NSData *residentCapabilities;
@property(copy, nonatomic) NSNumber *reachable;
@property(retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSUUID *idsIdentifier;
@property(copy, nonatomic) NSString *idsDestination;
@property(retain, nonatomic) NSData *deviceIRKData;
@end

