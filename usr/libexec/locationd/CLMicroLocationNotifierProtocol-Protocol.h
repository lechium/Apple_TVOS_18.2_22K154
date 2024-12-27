//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class CLMiLoUpdateConfiguration, NSArray, NSDate, NSDictionary, NSString, NSUUID;
@protocol CLMicroLocationNotifierClientProtocol;

@protocol CLMicroLocationNotifierProtocol <CLNotifierServiceProtocol>
- (void)purgeAllMicroLocationData;
- (void)purgeMicroLocationSemiSupervisedDataForClient:(NSString *)arg1;
- (void)donateTruthTagLabelForClient:(NSString *)arg1 truthLabelUUID:(NSUUID *)arg2 betweenDate:(NSDate *)arg3 andDate:(NSDate *)arg4 withReply:(void (^)(NSError *))arg5;
- (void)donateTruthTagLabelForClient:(NSString *)arg1 truthLabelUUID:(NSUUID *)arg2 recordingTriggerUUID:(NSUUID *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)requestMicroLocationLearningForClient_Legacy:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)requestAnchorValueStatisticsWithReply:(void (^)(NSError *, NSDictionary *))arg1;
- (void)exportMicroLocationDataForMigrationWithUserIdentifier:(NSString *)arg1 withReply:(void (^)(NSError *, NSDictionary *))arg2;
- (void)exportMicroLocationDataForMigrationWithReply:(void (^)(NSError *, NSDictionary *))arg1;
- (void)exportMicroLocationDatabaseTablesWithReply:(void (^)(NSError *, NSDictionary *))arg1;
- (_Bool)syncgetMicroLocationInternalVersion:(id *)arg1;
- (void)requestMicroLocationRecordingScanForClient:(NSString *)arg1 withAdditionalInformation:(NSDictionary *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)requestCurrentMicroLocationForClient:(NSString *)arg1 withAdditionalInformation:(NSDictionary *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)requestCurrentMicroLocationForClient:(NSString *)arg1 withAdditionalInformation:(NSDictionary *)arg2;
- (void)enableMiLoAtCurrentLocationWithServiceIdentifier:(NSUUID *)arg1 withRequestIdentifier:(NSUUID *)arg2 connectionToken:(NSUUID *)arg3;
- (void)queryMiloConnectionStatus:(NSUUID *)arg1;
- (void)requestExportMiLoDatabaseTablesFromClient:(NSString *)arg1 withRequestIdentifier:(NSUUID *)arg2 connectionToken:(NSUUID *)arg3;
- (void)requestPurgeAllMiLoDataFromClient:(NSString *)arg1 withRequestIdentifier:(NSUUID *)arg2;
- (void)requestMicroLocationLearningForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withRequestIdentifier:(NSUUID *)arg3;
- (void)requestStopUpdatingMicroLocationForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withRequestIdentifier:(NSUUID *)arg3 withConnectionToken:(NSUUID *)arg4;
- (void)requestStartUpdatingMicroLocationForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withRequestIdentifier:(NSUUID *)arg3 withConfiguration:(CLMiLoUpdateConfiguration *)arg4 withConnectionToken:(NSUUID *)arg5;
- (void)requestRemoveCustomLoiWithServiceIdentifier:(NSUUID *)arg1 withRequestIdentifier:(NSUUID *)arg2 withLoiIdentifier:(NSString *)arg3 withConnectionToken:(NSUUID *)arg4;
- (void)requestRemoveLabelsForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withRequestIdentifier:(NSUUID *)arg3 withLabels:(NSArray *)arg4 withConnectionToken:(NSUUID *)arg5;
- (void)requestLabelObservationsForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withRequestIdentifier:(NSUUID *)arg3 withPlaceIdentifier:(NSUUID *)arg4 betweenStartDate:(NSDate *)arg5 endDate:(NSDate *)arg6 withConnectionToken:(NSUUID *)arg7;
- (void)requestLabelSingleObservationForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withRequestIdentifier:(NSUUID *)arg3 withPlaceIdentifier:(NSUUID *)arg4 withObservationRequestIdentifier:(NSUUID *)arg5 withConnectionToken:(NSUUID *)arg6;
- (void)requestObservationForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withRequestIdentifier:(NSUUID *)arg3 withPlaceIdentifier:(NSUUID *)arg4 withConnectionToken:(NSUUID *)arg5;
- (void)requestSingleShotMiLoPredictionForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withRequestIdentifier:(NSUUID *)arg3 withConnectionToken:(NSUUID *)arg4;
- (void)disconnectToServiceForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withConnectionToken:(NSUUID *)arg3 forUser:(NSString *)arg4;
- (void)connectToServiceForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withConnectionToken:(NSUUID *)arg3 forUser:(NSString *)arg4;
- (void)queryServicesForClient:(NSString *)arg1 withConnectionToken:(NSUUID *)arg2 forUser:(NSString *)arg3;
- (void)deleteServiceForClient:(NSString *)arg1 withServiceIdentifier:(NSUUID *)arg2 withConnectionToken:(NSUUID *)arg3 forUser:(NSString *)arg4;
- (void)createServiceForClient:(NSString *)arg1 withServiceType:(unsigned long long)arg2 locationTypes:(NSArray *)arg3 connectionToken:(NSUUID *)arg4 forUser:(NSString *)arg5;
- (void)unregisterForMiloPredictionEventUpdates:(byref id <CLMicroLocationNotifierClientProtocol>)arg1;
- (void)registerForMiloPredictionEventUpdates:(byref id <CLMicroLocationNotifierClientProtocol>)arg1;
- (void)unregisterForMiloServiceEventUpdatesForClient:(byref id <CLMicroLocationNotifierClientProtocol>)arg1 withToken:(NSUUID *)arg2;
- (void)registerForMiloServiceEventUpdatesForClient:(byref id <CLMicroLocationNotifierClientProtocol>)arg1 withToken:(NSUUID *)arg2;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end

