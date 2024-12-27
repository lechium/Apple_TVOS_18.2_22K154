//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDHomeMediaSystemHandler, HMDUser, NSArray, NSUUID;

@protocol HMDHomeMediaSystemHandlerDelegate <NSObject>
- (void)mediaSystemController:(HMDHomeMediaSystemHandler *)arg1 didRemoveMediaSystem:(NSUUID *)arg2;
- (void)mediaSystemController:(HMDHomeMediaSystemHandler *)arg1 removeAccessories:(NSArray *)arg2 fromAssistantAccessControl:(HMDUser *)arg3;
@end

