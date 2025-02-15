//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableSet, NSString, NSUUID;
@protocol HMDAccessorySettingGroupDataSource;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingGroup : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_settings;	// 16 = 0x10
    NSMutableSet *_groups;	// 24 = 0x18
    HMDAccessorySettingGroup *_mediaSystemSettingGroup;	// 32 = 0x20
    NSUUID *_parentIdentifier;	// 40 = 0x28
    NSString *_keyPath;	// 48 = 0x30
    id <HMDAccessorySettingGroupDataSource> _dataSource;	// 56 = 0x38
    NSUUID *_identifier;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
}

+ (id)supportedGroupsClasses;	// IMP=0x0010000000bb81db
+ (id)supportedSettingsClasses;	// IMP=0x0010000000bb81ab
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000bb81a3
+ (id)logCategory;	// IMP=0x0010000000bb8173
- (void).cxx_destruct;	// IMP=0x0000000000bb7d18
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDAccessorySettingGroupDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property __weak HMDAccessorySettingGroup *mediaSystemSettingGroup; // @synthesize mediaSystemSettingGroup=_mediaSystemSettingGroup;
- (_Bool)compareSettingsTree:(id)arg1;	// IMP=0x0000000000bb712d
- (void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2 shouldAddMissingItems:(_Bool)arg3;	// IMP=0x0000000000bb5aeb
- (_Bool)dataSourceShouldEncodeSetting:(id)arg1 withCoder:(id)arg2;	// IMP=0x0000000000bb587e
- (void)_encodeWithCoder:(id)arg1;	// IMP=0x0000000000bb5482
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000bb5433
- (_Bool)shouldEncodeForCoder:(id)arg1;	// IMP=0x0000000000bb51a7
- (id)_initWithCoder:(id)arg1;	// IMP=0x0000000000bb4c66
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000bb4bfd
- (id)logIdentifier;	// IMP=0x0000000000bb4b43
- (void)removeGroup:(id)arg1;	// IMP=0x0000000000bb4ab1
- (void)addGroup:(id)arg1;	// IMP=0x0000000000bb4a0c
- (void)_setParentGroup:(id)arg1;	// IMP=0x0000000000bb46e6
- (void)_reevaluateParentGroup:(id)arg1;	// IMP=0x0000000000bb4678
- (id)groupWithIdentifier:(id)arg1;	// IMP=0x0000000000bb4455
@property(readonly, copy) NSArray *groups;
- (void)removeSetting:(id)arg1;	// IMP=0x0000000000bb435b
- (void)addSetting:(id)arg1;	// IMP=0x0000000000bb42b6
- (id)settingWithIdentifier:(id)arg1;	// IMP=0x0000000000bb4093
@property(readonly, copy) NSArray *settings;
- (_Bool)isPrivateToDevice;	// IMP=0x0000000000bb3f91
- (id)copyReplica;	// IMP=0x0000000000bb3abd
- (id)copyIdentical;	// IMP=0x0000000000bb35e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bb35d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bb34f7
@property(readonly) unsigned long long hash;
- (id)_settingWithKeys:(id)arg1;	// IMP=0x0000000000bb324f
- (id)settingWithKeyPath:(id)arg1;	// IMP=0x0000000000bb31c1
- (id)settingWithName:(id)arg1;	// IMP=0x0000000000bb30f1
- (id)subGroupWithName:(id)arg1;	// IMP=0x0000000000bb3021
- (id)initWithName:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3;	// IMP=0x0000000000bb2e72
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000bb2db3
- (id)init;	// IMP=0x0000000000bb2d0b
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001a9674
- (id)fullDescription;	// IMP=0x00000000001a95d8
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

