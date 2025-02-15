//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMEEvent, NSArray, NSString;
@protocol HMEPersistentConnection;

@protocol HMEPersistentConnectionServerDelegate <NSObject>
- (_Bool)shouldAllowEvent:(HMEEvent *)arg1 topic:(NSString *)arg2 connection:(id <HMEPersistentConnection>)arg3;
- (void)sendUpdatedCachedEvents:(NSArray *)arg1 toConnection:(id <HMEPersistentConnection>)arg2;
- (void)sendUpdatedEvents:(NSArray *)arg1 toConnection:(id <HMEPersistentConnection>)arg2;
@end

