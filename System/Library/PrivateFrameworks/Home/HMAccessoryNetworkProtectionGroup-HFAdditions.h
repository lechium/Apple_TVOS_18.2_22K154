//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessoryNetworkProtectionGroup.h>

@class HMHome, NSArray, NSString, NSUUID;

@interface HMAccessoryNetworkProtectionGroup (HFAdditions)
+ (id)hf_updateProtectionMode:(long long)arg1 forGroups:(id)arg2;	// IMP=0x001000000017ea44
- (id)hf_updateProtectionMode:(long long)arg1;	// IMP=0x001000000017e88f
@property(readonly, nonatomic) long long hf_displayCurrentProtectionMode;
@property(readonly, copy, nonatomic) NSString *hf_title;
@property(readonly, nonatomic) HMHome *hf_home;
@property(readonly, nonatomic) NSArray *hf_networkConfigurationProfiles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

