//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDAssistantAccessControlModelV2 : HMBModel
{
}

+ (id)hmbProperties;	// IMP=0x00600000007e2eaf

// Remaining properties
@property(copy, nonatomic) NSArray *accessoryUUIDs; // @dynamic accessoryUUIDs;
@property(copy, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests; // @dynamic activityNotificationsEnabledForPersonalRequests;
@property(copy, nonatomic) NSNumber *requiresAuthenticationForSecureRequests; // @dynamic requiresAuthenticationForSecureRequests;
@property(copy, nonatomic) NSArray *siriEndpointAccessoryUUIDs; // @dynamic siriEndpointAccessoryUUIDs;

@end

