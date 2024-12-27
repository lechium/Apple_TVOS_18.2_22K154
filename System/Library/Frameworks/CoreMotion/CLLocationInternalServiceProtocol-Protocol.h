//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@protocol CLLocationInternalServiceProtocol
- (void)notifyWeatherForecast:(NSDictionary *)arg1 airQualityConditions:(NSDictionary *)arg2 hourlyForecasts:(NSArray *)arg3 dailyForecasts:(NSArray *)arg4 latitude:(double)arg5 longitude:(double)arg6;
- (void)notifyPassKitPayment:(NSString *)arg1 transaction:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)getOscarTimeSyncWithReplyBlock:(void (^)(NSError *, unsigned long long, unsigned long long))arg1;
- (void)setBackgroundIndicatorEnabled:(_Bool)arg1 forBundleID:(NSString *)arg2 orBundlePath:(NSString *)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)gyroCalibrationDatabaseSupportsMiniCalibrationWithReplyBlock:(void (^)(NSError *, int))arg1;
- (void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 andZoneIdentifier:(NSString *)arg3 andSubIdentityIdentifier:(NSString *)arg4 forBundleID:(NSString *)arg5 orBundlePath:(NSString *)arg6 replyBlock:(void (^)(NSError *))arg7;
- (void)setLocationButtonUseMode:(int)arg1 forBundleID:(NSString *)arg2 orBundlePath:(NSString *)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)setIncidentalUseMode:(int)arg1 forBundleID:(NSString *)arg2 orBundlePath:(NSString *)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)updatePromptedLatitude:(double)arg1 longitude:(double)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)updatePillButtonChoiceForOutstandingPrompt:(int)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)getActivitiesWithReplyBlock:(void (^)(NSError *, NSArray *))arg1;
- (void)getGyroCalibrationDatabaseBiasFitAtTemperature:(float)arg1 withReply:(void (^)(NSError *, NSData *))arg2;
- (void)tearDownLocationAuthPromptForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)setTemporaryPreciseAuthorizationGranted:(_Bool)arg1 forBundleID:(NSString *)arg2 orBundlePath:(NSString *)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)setTemporaryAuthorizationGranted:(_Bool)arg1 forBundleID:(NSString *)arg2 orBundlePath:(NSString *)arg3 orAuditToken:(CDStruct_6ad76789)arg4 byLocationButton:(_Bool)arg5 voiceInteractionEnabled:(_Bool)arg6 replyBlock:(void (^)(NSError *))arg7;
- (void)getPipelinedCacheWithReply:(void (^)(NSError *, NSArray *))arg1;
- (void)getOdometryBatchedLocationsWithReplyBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (void)getAccessoryPASCDTransmissionStateWithReplyBlock:(void (^)(NSError *, int))arg1;
- (void)getAccessoryTypeBitSetWithReplyBlock:(void (^)(NSError *, int))arg1;
- (void)setTrackRunHint:(NSData *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)setMapMatchingRouteHint:(NSData *)arg1 routingType:(int)arg2 stepType:(int)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)getStatusBarIconState:(void (^)(NSError *, int))arg1;
- (void)getStatusBarIconEnabledForEntityClass:(unsigned int)arg1 replyBlock:(void (^)(NSError *, _Bool))arg2;
- (void)setStatusBarIconEnabledForEntityClass:(unsigned int)arg1 enabled:(_Bool)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)getArchivedAuthorizationDecisionsWithReplyBlock:(void (^)(NSError *, NSData *))arg1;
- (void)applyArchivedAuthorizationDecisions:(NSData *)arg1 withConfirmationToken:(NSUUID *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)resetAllClientsWithReplyBlock:(void (^)(NSError *))arg1;
- (void)resetClientForBundleId:(NSString *)arg1 orBundlePath:(NSString *)arg2 withReplyBlock:(void (^)(NSError *))arg3;
- (void)reportLocationUtilityEvent:(int)arg1 atDate:(NSDate *)arg2 withReplyBlock:(void (^)(NSError *))arg3;
- (void)getGroundAltitudeForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 location:(CLLocation *)arg3 replyBlock:(void (^)(NSError *, struct))arg4;
- (void)getLocationForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 dynamicAccuracyReductionEnabled:(_Bool)arg3 allowsAlteredAccessoryLocations:(_Bool)arg4 replyBlock:(void (^)(NSError *, NSData *))arg5;
- (void)deleteInterestZoneWithId:(NSString *)arg1 registeredForBundleId:(NSString *)arg2 orBundlePath:(NSString *)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)setRelevance:(_Bool)arg1 forInterestZoneWithId:(NSString *)arg2 registeredForBundleId:(NSString *)arg3 orBundlePath:(NSString *)arg4 replyBlock:(void (^)(NSError *))arg5;
- (void)registerPhenolicInterestZoneWithId:(NSString *)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundleId:(NSString *)arg5 orBundlePath:(NSString *)arg6 replyBlock:(void (^)(NSError *))arg7;
- (void)registerCircularInterestZoneWithId:(NSString *)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundleId:(NSString *)arg7 orBundlePath:(NSString *)arg8 replyBlock:(void (^)(NSError *))arg9;
- (void)checkAndExerciseAuthorizationForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 services:(unsigned long long)arg3 replyBlock:(void (^)(NSError *, _Bool))arg4;
- (void)getMonitoredRegionsForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 replyBlock:(void (^)(NSError *, NSDictionary *))arg3;
- (void)copyLastLogWithReplyBlock:(void (^)(NSError *))arg1;
- (void)dumpLogsWithDescription:(NSString *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)displayStatisticsWithReplyBlock:(void (^)(NSError *))arg1;
- (void)getPrecisionPermissionForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 replyBlock:(void (^)(NSError *, _Bool))arg3;
- (void)getIncidentalUseModeForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 replyBlock:(void (^)(NSError *, int))arg3;
- (void)getAuthorizationStatusForAppWithAuditToken:(CDStruct_6ad76789)arg1 replyBlock:(void (^)(NSError *, int))arg2;
- (void)getAuthorizationStatusForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 replyBlock:(void (^)(NSError *, int))arg3;
- (void)pingDaemonWithReplyBlock:(void (^)(NSError *))arg1;
- (void)getGestureServiceEnabledWithReplyBlock:(void (^)(NSError *, _Bool))arg1;
- (void)getAuthorizationPromptMapDisplayEnabledWithReplyBlock:(void (^)(NSError *, _Bool))arg1;
- (void)setAuthorizationPromptMapDisplayEnabled:(_Bool)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)getLocationServicesEnabledWithReplyBlock:(void (^)(NSError *, int))arg1;
- (void)setLocationServicesEnabled:(_Bool)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)getPrivateMode:(void (^)(NSError *, _Bool))arg1;
- (void)setPrivateMode:(_Bool)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)setAuthorizationStatus:(_Bool)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(NSString *)arg3 orBundlePath:(NSString *)arg4 replyBlock:(void (^)(NSError *))arg5;
- (void)shutdownDaemonWithReplyBlock:(void (^)(NSError *))arg1;
- (void)performMigrationWithReplyBlock:(void (^)(NSError *))arg1;
- (void)modifyOrSetAuthorizationTime:(double)arg1 forBundleID:(NSString *)arg2 orBundlePath:(NSString *)arg3 replyBlock:(void (^)(NSError *, double))arg4;
- (void)getTemporaryAuthorizationStatusForBundleId:(NSString *)arg1 orBundlePath:(NSString *)arg2 replyBlock:(void (^)(NSError *, NSData *))arg3;
- (void)setTemporaryAuthorizationStatusForBundleId:(NSString *)arg1 orBundlePath:(NSString *)arg2 statusData:(NSData *)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)triggerExpiredAuthorizationPurgeWithReplyBlock:(void (^)(NSError *))arg1;
- (void)setGestureServiceEnabled:(_Bool)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)timeZoneForLocation:(CDStruct_7cf4616f)arg1 replyBlock:(void (^)(NSError *, NSString *))arg2;
- (void)getLocationDefaultForKey:(NSString *)arg1 replyBlock:(void (^)(NSError *, NSData *))arg2;
- (void)setLocationDefaultForKey:(NSString *)arg1 andValue:(NSData *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)getClientManagerInternalStateWithReplyBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (void)getActiveClientsUsingLocationWithReplyBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (void)getAppsUsingLocationWithReplyBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (void)getGnssBandsInUseWithReplyBlock:(void (^)(NSError *, NSArray *))arg1;
- (void)getZaxisStatsWithReplyBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (void)getMicroLocationInternalVersionWithReplyBlock:(void (^)(NSError *, NSString *))arg1;
- (void)getTechnologiesInUseWithReplyBlock:(void (^)(NSError *, NSArray *))arg1;
@end

