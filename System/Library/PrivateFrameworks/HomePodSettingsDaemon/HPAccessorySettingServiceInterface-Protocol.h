//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomePodSettingsDaemon/NSObject-Protocol.h>

@class HPSSetting, NSArray, NSString;

@protocol HPAccessorySettingServiceInterface <NSObject>
- (void)startXPCConnection;
- (void)overrideOptedToHH2State:(_Bool)arg1;
- (void)optedToHH2WithCompletionHandler:(void (^)(_Bool))arg1;
- (void)heldAssertionsWithCompletionHandler:(void (^)(NSDictionary *))arg1;
- (void)aggregateSettingsInScope:(unsigned long long)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)mergeSettingsInScope:(unsigned long long)arg1 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)reconcileSettingsInScope:(unsigned long long)arg1 withCompletionHandler:(void (^)(NSDictionary *))arg2;
- (void)getKeyPathsAvailabilityWithCompletionHandler:(void (^)(NSDictionary *))arg1;
- (void)getKeyPathsWithCompletionHandler:(void (^)(NSDictionary *))arg1;
- (void)updateSettingWithoutSynchronizationForKeyPath:(NSString *)arg1 setting:(HPSSetting *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)updateSettingForKeyPath:(NSString *)arg1 setting:(HPSSetting *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)isSettingAvailableForKeyPath:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)settingsForKeyPaths:(NSArray *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)settingForKeyPath:(NSString *)arg1 completionHandler:(void (^)(HPSSetting *, NSError *))arg2;
@end

