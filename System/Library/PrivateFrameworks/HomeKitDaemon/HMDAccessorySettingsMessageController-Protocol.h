//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessorySettingConstraint, HMDAccessorySetting, HMDHome, HMDUser, HMFVersion, NSArray, NSString, NSUUID;

@protocol HMDAccessorySettingsMessageController
@property(readonly) __weak HMDHome *home;
@property(readonly, copy) NSUUID *messageTargetUUID;
- (HMDAccessorySetting *)settingForUUID:(NSUUID *)arg1;
- (_Bool)canUser:(HMDUser *)arg1 editConstraintsForSetting:(NSUUID *)arg2;
- (_Bool)canUser:(HMDUser *)arg1 editConstraintsForSettingWithKeyPath:(NSString *)arg2;
- (void)onMessageReplaceConstraintsWithAdditions:(NSArray *)arg1 constraintIdsToRemove:(NSArray *)arg2 settingIdentifier:(NSUUID *)arg3 senderProductClass:(long long)arg4 isRemote:(_Bool)arg5 completion:(void (^)(NSError *))arg6;
- (void)onMessageReplaceConstraintsWithAdditions:(NSArray *)arg1 constraintIdsToRemove:(NSArray *)arg2 keyPath:(NSString *)arg3 senderProductClass:(long long)arg4 isRemote:(_Bool)arg5 completion:(void (^)(NSError *))arg6;
- (void)onMessageUpdateConstraints:(NSArray *)arg1 keyPath:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)onMessageRemoveConstraint:(HMAccessorySettingConstraint *)arg1 keyPath:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)onMessageAddConstraint:(HMAccessorySettingConstraint *)arg1 keyPath:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)onMessageUpdateValue:(id)arg1 settingKeyPath:(NSString *)arg2 senderVersion:(HMFVersion *)arg3 senderProductClass:(long long)arg4 completion:(void (^)(id, unsigned long long, NSError *))arg5;
- (void)onMessageUpdateValue:(id)arg1 settingIdentifier:(NSUUID *)arg2 senderVersion:(HMFVersion *)arg3 senderProductClass:(long long)arg4 completion:(void (^)(id, unsigned long long, NSError *))arg5;
@end

