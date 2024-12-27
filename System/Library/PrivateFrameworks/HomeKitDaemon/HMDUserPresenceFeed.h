//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, HMUserPresenceAuthorization, HMUserPresenceCompute;

__attribute__((visibility("hidden")))
@interface HMDUserPresenceFeed : HMFObject
{
    HMDUser *_user;	// 8 = 0x8
    HMUserPresenceAuthorization *_presenceAuthStatus;	// 16 = 0x10
    HMUserPresenceCompute *_presenceComputeStatus;	// 24 = 0x18
    HMDUserPresenceRegion *_presenceRegion;	// 32 = 0x20
    HMDUserPresenceUpdateReason *_reason;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000014ae1d
@property(readonly, nonatomic) HMDUserPresenceUpdateReason *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDUserPresenceRegion *presenceRegion; // @synthesize presenceRegion=_presenceRegion;
@property(readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // @synthesize presenceComputeStatus=_presenceComputeStatus;
@property(readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property(readonly, nonatomic) __weak HMDUser *user; // @synthesize user=_user;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014ab01
- (id)description;	// IMP=0x000000000014a9e9
- (id)initWithUser:(id)arg1 presenceAuthStatus:(id)arg2 presenceComputeStatus:(id)arg3 presenceRegion:(id)arg4 reason:(id)arg5;	// IMP=0x000000000014a8d3

@end

