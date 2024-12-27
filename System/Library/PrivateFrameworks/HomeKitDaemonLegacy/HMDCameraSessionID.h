//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraSessionID : HMFObject
{
    _Bool _spiClient;	// 8 = 0x8
    NSString *_description;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    NSString *_hostProcessBundleIdentifier;	// 32 = 0x20
    NSMutableDictionary *_milestones;	// 40 = 0x28
    NSString *_deviceSectionName;	// 48 = 0x30
    NSMutableDictionary *_deviceMilestones;	// 56 = 0x38
}

+ (id)uptimeNumberInMilliseconds;	// IMP=0x0010000000ae5c91
+ (long long)uptimeInMilliseconds;	// IMP=0x0010000000ae5c79
+ (id)hostProcessBundleIdentifierForMessage:(id)arg1;	// IMP=0x0010000000ae5b36
- (void).cxx_destruct;	// IMP=0x0000000000ae5ac1
@property(readonly) NSMutableDictionary *deviceMilestones; // @synthesize deviceMilestones=_deviceMilestones;
@property(readonly) NSString *deviceSectionName; // @synthesize deviceSectionName=_deviceSectionName;
@property(readonly) NSMutableDictionary *milestones; // @synthesize milestones=_milestones;
@property(readonly, getter=isSPIClient) _Bool spiClient; // @synthesize spiClient=_spiClient;
@property(readonly, copy) NSString *hostProcessBundleIdentifier; // @synthesize hostProcessBundleIdentifier=_hostProcessBundleIdentifier;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)description;	// IMP=0x0000000000ae5a2b
- (void)addParameterFor:(id)arg1 value:(id)arg2;	// IMP=0x0000000000ae58d5
- (void)setParameterForPath:(id)arg1 value:(id)arg2;	// IMP=0x0000000000ae57eb
- (void)setParameterFor:(id)arg1 value:(id)arg2;	// IMP=0x0000000000ae5760
- (void)markMilestoneForPath:(id)arg1;	// IMP=0x0000000000ae55cc
- (void)markMilestoneFor:(id)arg1 withTimestamp:(id)arg2;	// IMP=0x0000000000ae5541
- (void)markMilestoneFor:(id)arg1;	// IMP=0x0000000000ae54d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ae53cd
- (unsigned long long)hash;	// IMP=0x0000000000ae5389
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ae52cb
- (id)initWithSessionID:(id)arg1 hostProcessBundleIdentifier:(id)arg2 isSPIClient:(_Bool)arg3 deviceSectionName:(id)arg4 description:(id)arg5;	// IMP=0x0000000000ae5124
- (id)initWithSessionID:(id)arg1 message:(id)arg2 description:(id)arg3;	// IMP=0x0000000000ae4ff6

@end

