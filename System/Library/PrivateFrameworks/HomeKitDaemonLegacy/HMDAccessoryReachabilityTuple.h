//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryReachabilityTuple : HMFObject
{
    _Bool _previouslySentReachability;	// 8 = 0x8
    _Bool _currentReachability;	// 9 = 0x9
    NSString *_accessoryUUID;	// 16 = 0x10
    unsigned long long _previouslySentSuspendedState;	// 24 = 0x18
    unsigned long long _currentSuspendedState;	// 32 = 0x20
}

+ (id)tupleWithAccessoryUUID:(id)arg1 reachable:(_Bool)arg2;	// IMP=0x00600000000e2510
- (void).cxx_destruct;	// IMP=0x00000000000e24fd
@property(nonatomic) unsigned long long currentSuspendedState; // @synthesize currentSuspendedState=_currentSuspendedState;
@property(nonatomic) unsigned long long previouslySentSuspendedState; // @synthesize previouslySentSuspendedState=_previouslySentSuspendedState;
@property(nonatomic) _Bool currentReachability; // @synthesize currentReachability=_currentReachability;
@property(nonatomic) _Bool previouslySentReachability; // @synthesize previouslySentReachability=_previouslySentReachability;
@property(retain, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)description;	// IMP=0x00000000000e22fd
- (unsigned long long)hash;	// IMP=0x00000000000e22b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2228

@end

