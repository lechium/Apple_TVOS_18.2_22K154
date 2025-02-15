//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ADRequestLifecycleObserver, AFRequestInfo;
@protocol ADCommandCenterClient;

@protocol ADRequestLifecycleListening <NSObject>
- (void)requestLifecycleObserver:(ADRequestLifecycleObserver *)arg1 requestDidEndWithInfo:(AFRequestInfo *)arg2 origin:(long long)arg3 client:(id <ADCommandCenterClient>)arg4;
- (void)requestLifecycleObserver:(ADRequestLifecycleObserver *)arg1 requestWasCancelledWithInfo:(AFRequestInfo *)arg2 forReason:(long long)arg3 origin:(long long)arg4 client:(id <ADCommandCenterClient>)arg5 successorInfo:(AFRequestInfo *)arg6;
- (void)requestLifecycleObserver:(ADRequestLifecycleObserver *)arg1 requestWillBeginWithInfo:(AFRequestInfo *)arg2 origin:(long long)arg3 client:(id <ADCommandCenterClient>)arg4;
@end

