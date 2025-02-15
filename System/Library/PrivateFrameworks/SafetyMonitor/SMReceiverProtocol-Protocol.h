//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/NSObject-Protocol.h>

@class NSUUID;

@protocol SMReceiverProtocol <NSObject>
- (void)detailsViewOpenedForSessionID:(NSUUID *)arg1;
- (void)fetchReceiverSafetyCacheForSessionID:(NSUUID *)arg1 completion:(void (^)(SMCache *, SMCache *, NSError *))arg2;
- (void)userRequestedCacheDownloadForSessionID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchReceiverSessionStatusForSessionID:(NSUUID *)arg1 completion:(void (^)(SMReceiverSessionStatus *, NSError *))arg2;
- (void)fetchAllReceiverSessionStatusWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

