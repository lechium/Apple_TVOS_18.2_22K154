//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol ICDMusicUserSocialProfileProviderDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ICDMusicUserSocialProfileProvider : NSObject
{
    NSMutableSet *_contextsPendingUserProfileUpdate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_retryTimer;	// 24 = 0x18
    id <ICDMusicUserSocialProfileProviderDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000f0757
- (void)_onQueue_retryPendingUpdateAttempt:(unsigned int)arg1;	// IMP=0x00100000000f0622
- (void)_onQueue_teardownRetrySource;	// IMP=0x00100000000f05ec
- (void)_onQueue_setupRetrySourceForAttempt:(unsigned int)arg1;	// IMP=0x00100000000f04d8
- (void)_performMusicKitRequestWithURL:(id)arg1 storeRequestContext:(id)arg2 ignoreCache:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f0239
- (_Bool)_errorIsRecoverable:(id)arg1;	// IMP=0x00100000000f009f
- (void)_performMusicUserProfileRequestWithUserProfileContext:(id)arg1 ignoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000eff78
- (void)_clearCacheForContext:(id)arg1;	// IMP=0x00100000000efbd1
- (void)_cacheResponse:(id)arg1 forContext:(id)arg2;	// IMP=0x00100000000ef8c3
- (id)_getCachedResponseForContext:(id)arg1;	// IMP=0x00100000000ef2a6
- (id)_cacheContainerPath;	// IMP=0x00100000000ef1e4
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x00100000000ef157
- (void)fetchMusicUserProfileWithStoreRequestContext:(id)arg1 ignoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000eed53
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000eec9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

