//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CPLSyncSessionRescheduler-Protocol.h"

@protocol CPLCloudKitRescheduler <CPLSyncSessionRescheduler>
- (void)dropBackgroundActivityRequest:(id)arg1;
- (id)acquireBackgroundActivityWithCompletionHandler:(void (^)(NSError *))arg1;
@end

