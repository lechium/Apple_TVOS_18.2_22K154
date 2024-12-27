//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol HMBAPSConnectionDelegate;

@protocol HMBAPSConnection <NSObject>
@property(copy) NSArray *enabledTopics;
@property __weak id <HMBAPSConnectionDelegate> delegate;
- (void)invalidateTokenForTopic:(NSString *)arg1 identifier:(NSString *)arg2;
- (void)requestTokenForTopic:(NSString *)arg1 identifier:(NSString *)arg2;
@end

