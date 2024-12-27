//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class CLCircularRegion, NSArray, NSData, NSDate, NSDateInterval, NSSet, NSString, NSUUID, SPBeacon, SPBeaconIndex, SPBeaconLocation, SPCommand, SPLocationFetchContext, SPSafeLocation, SPUnauthorizedTrackingAdvertisement, SPUnauthorizedTrackingObservation;

@protocol SPOwnerSessionXPCProtocol <NSObject>
- (void)standaloneBeaconsForUUIDs:(NSArray *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)disconnectFromMACAddress:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)connectUsingMACAddress:(NSData *)arg1 longTermKey:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)readAISMetadataForIdentifier:(NSUUID *)arg1 completion:(void (^)(SPDiscoveredAccessoryMetadata *, NSError *))arg2;
- (void)readRawAISMetadataForIdentifier:(NSUUID *)arg1 completion:(void (^)(SPRawAccessoryMetadata *, NSError *))arg2;
- (void)readAISMetadataFromMACAddress:(NSData *)arg1 useOwnerControlPoint:(_Bool)arg2 completion:(void (^)(SPDiscoveredAccessoryMetadata *, NSError *))arg3;
- (void)readRawAISMetadataFromMACAddress:(NSData *)arg1 useOwnerControlPoint:(_Bool)arg2 completion:(void (^)(SPRawAccessoryMetadata *, NSError *))arg3;
- (void)allObservationsForBeacon:(NSUUID *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)requestLiveLocationForFriend:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)requestLiveLocationForUUID:(NSUUID *)arg1 completion:(void (^)(NSString *))arg2;
- (void)setFindMyNetworkStatusForMACAddress:(NSData *)arg1 status:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchFindMyNetworkStatusForMACAddress:(NSData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)beaconingIdentifierForMACAddress:(NSData *)arg1 completion:(void (^)(NSUUID *))arg2;
- (void)beaconGroupsForUUIDs:(NSArray *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)beaconGroupForIdentifier:(NSUUID *)arg1 completion:(void (^)(SPBeaconGroup *, NSError *))arg2;
- (void)beaconForIdentifier:(NSUUID *)arg1 completion:(void (^)(SPBeacon *, NSError *))arg2;
- (void)simulateAccessoryPairing:(NSString *)arg1 name:(NSString *)arg2 isAirPods:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (void)forceRePairingWithUUID:(NSUUID *)arg1 partIds:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fakeClassicPairingWithMACAddress:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)forceKeySyncForBeaconUUID:(NSUUID *)arg1 lastObservationDate:(NSDate *)arg2 lastObservationIndex:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)sendUnregisterIntentWithCompletion:(void (^)(NSError *))arg1;
- (void)sendRegisterIntentWithCompletion:(void (^)(double, NSError *))arg1;
- (void)stopFetchingUnauthorizedEncryptedPayloadWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchUnauthorizedEncryptedPayload:(NSUUID *)arg1 completion:(void (^)(NSURL *))arg2;
- (void)fetchSeparationMonitoringStatus:(void (^)(long long))arg1;
- (void)forceLOIBasedSafeLocationRefresh:(void (^)(_Bool))arg1;
- (void)activeCompanionWithCompletion:(void (^)(SPBeacon *))arg1;
- (void)publishSeparationEventForBeacons:(NSSet *)arg1 eventType:(long long)arg2 region:(CLCircularRegion *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)beaconsToMonitorForSeparation:(void (^)(NSSet *))arg1;
- (void)safeLocationsWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)unassignSafeLocation:(NSUUID *)arg1 from:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)assignSafeLocation:(NSUUID *)arg1 to:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)updateSafeLocation:(SPSafeLocation *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)removeSafeLocation:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addSafeLocation:(SPSafeLocation *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)disableSeparationMonitoringForBeacons:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)enableSeparationMonitoringForBeacons:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)tagSeparationStateChanged:(NSString *)arg1 beaconUUID:(NSUUID *)arg2 location:(SPBeaconLocation *)arg3 completion:(void (^)(NSError *))arg4;
- (void)beaconsToMaintainPersistentConnection:(void (^)(NSSet *))arg1;
- (void)updateBeaconObservations:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)publishWildModeRecordsWithCompletion:(void (^)(NSError *))arg1;
- (void)acceptUTForBeaconUUID:(NSUUID *)arg1;
- (void)unauthorizedTrackingTypeWithCompletion:(SPUnauthorizedTrackingAdvertisement *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)ignoringUnauthorizedTrackingWithCompletion:(SPUnauthorizedTrackingAdvertisement *)arg1 completion:(void (^)(NSDate *, NSError *))arg2;
- (void)playUnauthorizedSoundOnBeaconUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)isUTAppAlertDisabled:(void (^)(_Bool))arg1;
- (void)disableUTAppAlert:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)ignoreTrackingFor:(SPUnauthorizedTrackingAdvertisement *)arg1 until:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)ignoreBeaconByUUID:(NSUUID *)arg1 untilDate:(NSDate *)arg2 completion:(void (^)(NSError *))arg3;
- (void)ignoreTrackingForUUID:(NSUUID *)arg1 until:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)unknownBeaconsForUUIDs:(NSArray *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)ignoreBeaconByUUID:(NSUUID *)arg1 until:(unsigned long long)arg2;
- (void)didWithdrawUnauthorizedTrackingWithCompletion:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didUpdateUnauthorizedTrackingWithCompletion:(SPUnauthorizedTrackingObservation *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didDetectUnauthorizedTrackingWithCompletion:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didObserveUnauthorizedTrackingWithCompletion:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)hintBasedIndexSearchForBeacon:(NSUUID *)arg1 baseIndex:(SPBeaconIndex *)arg2 hint:(unsigned char)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)updateBatteryStatus:(unsigned char)arg1 beaconUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)beaconsToMaintainWithCompletion:(void (^)(NSSet *))arg1;
- (void)waitForBeaconStoreAvailableWithCompletion:(void (^)(void))arg1;
- (void)beaconStoreStatusWithCompletion:(void (^)(_Bool))arg1;
- (void)executeCommand:(SPCommand *)arg1 completion:(void (^)(NSError *))arg2;
- (void)rawSearchResultsForIdentifier:(NSUUID *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)locationForContext:(SPLocationFetchContext *)arg1 completion:(void (^)(SPLocationFetchResult *, NSError *))arg2;
- (void)latestLocationsForIdentifiers:(NSArray *)arg1 fetchLimit:(NSDate *)arg2 sources:(NSSet *)arg3 completion:(void (^)(NSDictionary *))arg4;
- (void)removeBeaconFromGroup:(SPBeacon *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeBeacon:(SPBeacon *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unacceptedBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (void)allBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (void)forceUpdateKeyAlignmentRecordForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)forceUpdateKeyMapsForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)forceDistributeKeysWithCompletion:(void (^)(NSError *))arg1;
- (void)clientConfigurationWithCompletion:(void (^)(NSData *))arg1;
- (void)beaconForUUID:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
- (void)ownerSessionStateWithCompletion:(void (^)(SPOwnerSessionState *))arg1;
@end

