//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFModel-Protocol.h>
#import <HomeKitDaemon/MKFServicePublicExtensions-Protocol.h>

@class MKFServiceDatabaseID, NSArray, NSDate, NSNumber, NSString, NSUUID, Protocol;
@protocol MKFApplicationData, MKFCharacteristic, MKFFloatCharacteristic, MKFHAPAccessory, MKFHome, MKFIntegerCharacteristic, MKFStringCharacteristic;

@protocol MKFService <MKFModel, MKFServicePublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFServiceDatabaseID *databaseID;
@property(readonly, retain, nonatomic) NSArray *serviceGroups;
@property(readonly, retain, nonatomic) NSArray *eventCharacteristics;
@property(retain, nonatomic) NSArray *characteristics;
@property(retain, nonatomic) id <MKFApplicationData> applicationData;
@property(readonly, retain, nonatomic) NSArray *actionCharacteristicWrites;
@property(readonly, retain, nonatomic) id <MKFHAPAccessory> accessory;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(copy, nonatomic) NSUUID *serviceType;
@property(copy, nonatomic) NSUUID *serviceSubtype;
@property(copy, nonatomic) NSNumber *serviceProperties;
@property(copy, nonatomic) NSString *providedName;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSNumber *mediaSourceIdentifier;
@property(retain, nonatomic) NSArray *mediaSourceDisplayOrder;
@property(copy, nonatomic) NSNumber *matterEndpointID;
@property(retain, nonatomic) NSArray *linkedServices;
@property(copy, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property(copy, nonatomic) NSNumber *lastKnownOperatingState;
@property(copy, nonatomic) NSNumber *lastKnownDiscoveryMode;
@property(copy, nonatomic) NSNumber *labelNamespace;
@property(copy, nonatomic) NSNumber *labelIndex;
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(copy, nonatomic) NSString *expectedConfiguredName;
@property(copy, nonatomic) NSNumber *configurationState;
@property(copy, nonatomic) NSUUID *associatedServiceType;
- (void)synchronizeCharacteristicsRelationWith:(NSArray *)arg1;
- (id <MKFStringCharacteristic>)findCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(NSNumber *)arg1;
- (id <MKFStringCharacteristic>)createCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(NSNumber *)arg1;
- (id <MKFStringCharacteristic>)materializeOrCreateCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(NSNumber *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFIntegerCharacteristic>)findCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(NSNumber *)arg1;
- (id <MKFIntegerCharacteristic>)createCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(NSNumber *)arg1;
- (id <MKFIntegerCharacteristic>)materializeOrCreateCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(NSNumber *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFFloatCharacteristic>)findCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(NSNumber *)arg1;
- (id <MKFFloatCharacteristic>)createCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(NSNumber *)arg1;
- (id <MKFFloatCharacteristic>)materializeOrCreateCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(NSNumber *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFCharacteristic>)findCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(NSNumber *)arg1;
- (id <MKFCharacteristic>)createCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(NSNumber *)arg1;
- (id <MKFCharacteristic>)materializeOrCreateCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(NSNumber *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFCharacteristic>)createCharacteristicsRelationOfType:(Protocol *)arg1 instanceID:(NSNumber *)arg2;
- (id <MKFCharacteristic>)materializeOrCreateCharacteristicsRelationOfType:(Protocol *)arg1 instanceID:(NSNumber *)arg2 createdNew:(_Bool *)arg3;
- (id <MKFApplicationData>)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;
@end

