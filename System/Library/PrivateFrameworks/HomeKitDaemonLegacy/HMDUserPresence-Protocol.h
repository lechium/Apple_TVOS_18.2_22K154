//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDUser;

@protocol HMDUserPresence <NSObject>
@property(readonly, nonatomic, getter=isNotAtHome) _Bool notAtHome;
@property(readonly, nonatomic, getter=isAtHome) _Bool atHome;
@property(readonly, nonatomic) HMDUser *user;
@end

