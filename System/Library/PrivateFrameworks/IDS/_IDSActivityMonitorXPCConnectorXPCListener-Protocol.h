//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/NSObject-Protocol.h>

@class IDSActivityUpdate, NSString;

@protocol _IDSActivityMonitorXPCConnectorXPCListener <NSObject>
- (void)handleIncomingUpdate:(IDSActivityUpdate *)arg1 onActivity:(NSString *)arg2 completion:(void (^)(void))arg3;
@end

