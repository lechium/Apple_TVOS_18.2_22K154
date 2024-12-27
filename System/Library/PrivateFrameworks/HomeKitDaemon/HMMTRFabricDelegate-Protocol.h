//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSData, NSNumber;
@protocol HMMTRDeviceControllerStorageDataSource;

@protocol HMMTRFabricDelegate <NSObject>
- (NSNumber *)currentDeviceControllerNodeID;
- (id <HMMTRDeviceControllerStorageDataSource>)privateDataSourceForNode:(NSNumber *)arg1;
- (void)updateUserCATWithOperatePrivilege:(NSNumber *)arg1 administerPrivilege:(NSNumber *)arg2;
- (void)incrementOperatePrivilegeCATVersion:(void (^)(NSNumber *))arg1;
- (void)fetchOperationalCertificatesForNewFabricWithFabricID:(NSNumber *)arg1 publicKey:(NSData *)arg2 fetchFromResident:(_Bool)arg3 completion:(void (^)(NSData *, NSData *, NSNumber *, NSData *, NSError *))arg4;
- (NSNumber *)accessoryOperatePrivilegeCATID:(_Bool)arg1;
- (NSNumber *)accessoryAdministerPrivilegeCATID:(_Bool)arg1;
- (_Bool)isCurrentUserOwner;
- (_Bool)requiresRemoteFabricDataUpdate;
- (_Bool)isPrimaryResidentNodeReachable;
- (_Bool)isPrimaryResidentNodeReachableAndThreadCapable;
@end

