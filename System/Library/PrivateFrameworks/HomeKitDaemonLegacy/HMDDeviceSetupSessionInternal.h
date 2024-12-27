//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSData, NSDictionary, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupSessionInternal : HMFObject
{
    unsigned long long _state;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    NSData *_sessionData;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
    NSUserDefaults *_userDefaults;	// 40 = 0x28
}

+ (id)allowedClasses;	// IMP=0x00600000002c08cf
+ (_Bool)isSupported;	// IMP=0x00600000002c0827
+ (long long)role;	// IMP=0x00600000002c077f
- (void).cxx_destruct;	// IMP=0x00000000002c0b8e
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSData *sessionData; // @synthesize sessionData=_sessionData;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (_Bool)processSessionData:(id)arg1 outAccessoryUUID:(id *)arg2 outAccessoryCategory:(id *)arg3 outAccessoryIDSIdentifier:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000002c0a44
- (id)initWithHomeManager:(id)arg1 userDefaults:(id)arg2;	// IMP=0x00000000002c099a

@end

