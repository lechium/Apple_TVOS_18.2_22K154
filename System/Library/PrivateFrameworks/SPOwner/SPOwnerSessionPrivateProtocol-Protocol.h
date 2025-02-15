//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/SPOwnerSessionProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSDateInterval, NSString, NSUUID, SPBeacon, SPBeaconIndex;

@protocol SPOwnerSessionPrivateProtocol <SPOwnerSessionProtocol>
@property(copy, nonatomic) CDUnknownBlockType maintainedUnknownBeaconsChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType maintainedBeaconsChangedBlock;
- (void)requestLiveLocationForFriend:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)requestLiveLocationForUUID:(NSUUID *)arg1 completion:(void (^)(NSString *))arg2;
- (void)unregisterDarwinNotificationName:(NSString *)arg1;
- (void)registerDarwinNotificationName:(NSString *)arg1 block:(void (^)(void))arg2;
- (void)forceRePairingWithUUID:(NSUUID *)arg1 partIds:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fakeClassicPairingWithMACAddress:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)forceKeySyncForBeaconUUID:(NSUUID *)arg1 lastObservationDate:(NSDate *)arg2 lastObservationIndex:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)sendUnregisterIntentWithCompletion:(void (^)(NSError *))arg1;
- (void)sendRegisterIntentWithCompletion:(void (^)(double, NSError *))arg1;
- (void)hintBasedIndexSearchForBeacon:(NSUUID *)arg1 baseIndex:(SPBeaconIndex *)arg2 hint:(unsigned char)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)allObservationsForBeacon:(NSUUID *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)waitForBeaconStoreAvailableWithCompletion:(void (^)(void))arg1;
- (void)beaconStoreStatusWithCompletion:(void (^)(_Bool))arg1;
- (void)rawSearchResultsForBeacon:(SPBeacon *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)forceUpdateKeyAlignmentRecordForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)forceUpdateKeyMapsForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)forceDistributeKeysWithCompletion:(void (^)(NSError *))arg1;
- (void)beaconForUUID:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
@end

