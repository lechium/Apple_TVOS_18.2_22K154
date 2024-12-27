//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMAccessoryCategory, NSError, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupTrackingInfo : HMFObject
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
    NSString *_accessoryIDSIdentifier;	// 16 = 0x10
    HMAccessoryCategory *_accessoryCategory;	// 24 = 0x18
    NSString *_setupClientBundleID;	// 32 = 0x20
    unsigned long long _startTime;	// 40 = 0x28
    unsigned long long _endTime;	// 48 = 0x30
    NSError *_sessionError;	// 56 = 0x38
    long long _role;	// 64 = 0x40
    NSUUID *_identifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000066c22
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) long long role; // @synthesize role=_role;
@property(readonly, copy) NSError *sessionError; // @synthesize sessionError=_sessionError;
@property(readonly) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(readonly) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy) NSString *setupClientBundleID; // @synthesize setupClientBundleID=_setupClientBundleID;
@property(copy) HMAccessoryCategory *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(copy) NSString *accessoryIDSIdentifier; // @synthesize accessoryIDSIdentifier=_accessoryIDSIdentifier;
@property(copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)initWithIdentifier:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 role:(long long)arg4 accessoryUUID:(id)arg5 accessoryCategory:(id)arg6 accessoryIDSIdentifier:(id)arg7 setupClientBundleID:(id)arg8;	// IMP=0x00000000000669d6

@end

