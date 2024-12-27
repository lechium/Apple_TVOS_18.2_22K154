//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString;

@protocol TUReportingControllerDataSource <NSObject>
- (void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)didStartRequestForStream:(long long)arg1 withTransactionID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)didCleanUpForStream:(long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)registeredStream:(long long)arg1 withAvailability:(int)arg2 reply:(void (^)(NSError *))arg3;
@end

