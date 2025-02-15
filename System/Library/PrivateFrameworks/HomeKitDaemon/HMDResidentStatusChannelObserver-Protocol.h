//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDResidentStatus, HMDResidentStatusChannel, NSSet;

@protocol HMDResidentStatusChannelObserver <NSObject>

@optional
- (void)channel:(HMDResidentStatusChannel *)arg1 didObservePrimaryResidentChange:(HMDResidentStatus *)arg2;
- (void)channel:(HMDResidentStatusChannel *)arg1 didObserveDevicesAdded:(NSSet *)arg2 lost:(NSSet *)arg3 updated:(NSSet *)arg4;
@end

