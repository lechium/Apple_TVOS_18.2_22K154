//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSData;
@protocol HMDAPSConnectionDelegate;

@protocol HMDAPSConnection <NSObject>
@property(readonly, retain, nonatomic) NSData *publicToken;
@property __weak id <HMDAPSConnectionDelegate> delegate;
- (void)setKeepAliveIntervalForConfiguration:(long long)arg1;
@end

