//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class CKContainerID, HMBCloudDatabase, HMDHH2FrameworkSwitch;

@protocol HMDHH2FrameworkSwitchDataSource <NSObject>
@property(readonly) unsigned long long setupMode;
@property(readonly) _Bool isHH2Enabled;
- (HMBCloudDatabase *)controller:(HMDHH2FrameworkSwitch *)arg1 cloudDatabaseWithContainerID:(CKContainerID *)arg2;
@end

