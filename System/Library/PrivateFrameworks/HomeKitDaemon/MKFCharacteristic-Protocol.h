//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFCharacteristicPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFObject-Protocol.h>

@class MKFCharacteristicDatabaseID, NSArray, NSData, NSNumber, NSString, NSUUID;
@protocol MKFHome, MKFService;

@protocol MKFCharacteristic <MKFObject, MKFCharacteristicPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFCharacteristicDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFService> service;
@property(readonly, retain, nonatomic) NSArray *notificationRegistrations;
@property(readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property(copy, nonatomic) NSString *units;
@property(copy, nonatomic) NSUUID *type;
@property(copy, nonatomic) NSNumber *properties;
@property(copy, nonatomic) NSString *manufacturerDescription;
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(copy, nonatomic) NSString *format;
@property(retain, nonatomic) NSData *authorizationData;
@end

