//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomePresenceRemote : HMFObject
{
    NSDictionary *_userPresenceMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b30a47
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
- (_Bool)isAnyUserAtHome;	// IMP=0x0000000000b308c9
- (_Bool)isNoUserAtHome;	// IMP=0x0000000000b30752
- (_Bool)areUsersNotAtHome:(id)arg1;	// IMP=0x0000000000b30578
- (_Bool)areUsersAtHome:(id)arg1;	// IMP=0x0000000000b3039e
- (_Bool)isUserNotAtHome:(id)arg1;	// IMP=0x0000000000b30355
- (_Bool)isUserAtHome:(id)arg1;	// IMP=0x0000000000b3030c
- (id)regionForUser:(id)arg1;	// IMP=0x0000000000b301e3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b300d0
@property(readonly, copy) NSString *description;
- (id)initWithPresenceByPairingIdentity:(id)arg1;	// IMP=0x0000000000b2fddd
- (id)initWithPresenceByUserId:(id)arg1;	// IMP=0x0000000000b2fb56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

