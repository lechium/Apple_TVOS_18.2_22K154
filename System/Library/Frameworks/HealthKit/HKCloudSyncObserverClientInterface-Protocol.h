//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKCloudSyncObserverStatus, HKCloudSyncRequest, NSError;

@protocol HKCloudSyncObserverClientInterface <NSObject>
- (void)clientRemote_syncRequestDidComplete:(HKCloudSyncRequest *)arg1 success:(_Bool)arg2 error:(NSError *)arg3;
- (void)clientRemote_syncRequestDidStart:(HKCloudSyncRequest *)arg1;
- (void)clientRemote_syncDidStart;
- (void)clientRemote_didFailToPopulateStatusWithError:(NSError *)arg1;
- (void)clientRemote_didUpdateObserverWithSyncStatus:(HKCloudSyncObserverStatus *)arg1;
@end

