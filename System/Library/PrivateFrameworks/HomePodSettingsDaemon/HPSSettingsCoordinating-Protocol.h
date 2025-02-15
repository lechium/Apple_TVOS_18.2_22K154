//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HPSGroupSettingsProvider, HPSSetting, NSArray, NSDictionary, NSString;
@protocol HPSSettingsCoordinatorObserver;

@protocol HPSSettingsCoordinating
- (void)fetchDiagnosticInfoWithCompletionHandler:(void (^)(NSDictionary *))arg1;
- (void)aggregateSettingsInScope:(unsigned long long)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)mergeSettingsInScope:(unsigned long long)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)reconcileSettingsInScope:(unsigned long long)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)updateSettingForKeyPath:(NSString *)arg1 setting:(HPSSetting *)arg2 clientIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)updateSettingForKeyPath:(NSString *)arg1 setting:(HPSSetting *)arg2 synchronizeWithGroup:(_Bool)arg3 clientIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
- (void)isSettingAvailableForKeyPath:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)settingsForKeyPaths:(NSArray *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)settingForKeyPath:(NSString *)arg1 completionHandler:(void (^)(HPSSetting *, NSError *))arg2;
- (HPSGroupSettingsProvider *)settingsProviderFor:(long long)arg1;
- (void)unregisterWithObserver:(id <HPSSettingsCoordinatorObserver>)arg1;
- (void)registerWithObserver:(id <HPSSettingsCoordinatorObserver>)arg1;
@property(nonatomic, readonly) NSDictionary *keyPathsAvailabilityMap;
@property(nonatomic, readonly) NSDictionary *groupNamesAsKeyPaths;
@property(nonatomic) _Bool shouldSynchronizePairOrPSGGroup;
@end

