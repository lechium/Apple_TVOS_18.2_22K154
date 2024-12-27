//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKClientProxy, GKFairPlaySessionProvider, GKNetworkRequestManagerSessionDelegate, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration, _TtC14GameDaemonCore32GKInstrumentedURLSessionDelegate;
@protocol GKEntityCacheProviderProtocol, OS_dispatch_queue;

@interface GKNetworkRequestManager : NSObject
{
    _Bool _firstUnlockedState;	// 8 = 0x8
    _Bool _reportedExessiveRequests;	// 9 = 0x9
    _Bool _fairPlaySessionReady;	// 10 = 0xa
    struct os_unfair_lock_s _pendingCallbacksLock;	// 12 = 0xc
    struct os_unfair_lock_s _waitListCallbacksLock;	// 16 = 0x10
    id <GKEntityCacheProviderProtocol> _entityCacheProvider;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    NSURLSessionConfiguration *_backgroundConfig;	// 40 = 0x28
    NSURLSession *_backgroundSession;	// 48 = 0x30
    GKNetworkRequestManagerSessionDelegate *_backgroundTasksSessionDelegate;	// 56 = 0x38
    _TtC14GameDaemonCore32GKInstrumentedURLSessionDelegate *_inProcessTasksSessionDelegate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_stateQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 80 = 0x50
    long long _currentState;	// 88 = 0x58
    NSDictionary *_serviceDependancyMappings;	// 96 = 0x60
    NSMutableDictionary *_existingTasks;	// 104 = 0x68
    NSMutableDictionary *_pendingCallbacks;	// 112 = 0x70
    NSURLSession *_inProcessSession;	// 120 = 0x78
    NSURLSessionConfiguration *_inProcessConfig;	// 128 = 0x80
    GKFairPlaySessionProvider *_fairPlaySessionProvider;	// 136 = 0x88
}

+ (id)taskWithRequest:(id)arg1 description:(id)arg2 session:(id)arg3;	// IMP=0x00200000000ccf86
+ (id)uuidFromTask:(id)arg1;	// IMP=0x00100000000ccf28
+ (_Bool)useJSONForBagKey:(id)arg1;	// IMP=0x00100000000ca1e9
+ (_Bool)entityIsReleaseStateAwareForBagKey:(id)arg1;	// IMP=0x00100000000ca14d
+ (id)networkRequestFromNsurlTask:(id)arg1;	// IMP=0x00100000000c87eb
+ (Class)networkRequestClass:(id)arg1;	// IMP=0x00100000000c852c
+ (id)commonNetworkRequestManager;	// IMP=0x00100000000c7865
+ (id)dictionaryFromTaskDescription:(id)arg1;	// IMP=0x00100000000c7045
+ (id)makeEntityIDWithRequest:(id)arg1 bagKey:(id)arg2;	// IMP=0x00100000001a942f
+ (id)makeEntityCacheProviderInMemory:(_Bool)arg1;	// IMP=0x00100000001a572e
- (void).cxx_destruct;	// IMP=0x00200000000cdb85
@property(retain, nonatomic) GKFairPlaySessionProvider *fairPlaySessionProvider; // @synthesize fairPlaySessionProvider=_fairPlaySessionProvider;
@property _Bool fairPlaySessionReady; // @synthesize fairPlaySessionReady=_fairPlaySessionReady;
@property(retain, nonatomic) NSURLSessionConfiguration *inProcessConfig; // @synthesize inProcessConfig=_inProcessConfig;
@property(retain, nonatomic) NSURLSession *inProcessSession; // @synthesize inProcessSession=_inProcessSession;
@property(retain, nonatomic) NSMutableDictionary *pendingCallbacks; // @synthesize pendingCallbacks=_pendingCallbacks;
@property(nonatomic) struct os_unfair_lock_s waitListCallbacksLock; // @synthesize waitListCallbacksLock=_waitListCallbacksLock;
@property(nonatomic) struct os_unfair_lock_s pendingCallbacksLock; // @synthesize pendingCallbacksLock=_pendingCallbacksLock;
- (struct os_unfair_lock_s);	// IMP=0x00100000000cdad8
@property(nonatomic) _Bool reportedExessiveRequests; // @synthesize reportedExessiveRequests=_reportedExessiveRequests;
@property(retain, nonatomic) NSMutableDictionary *existingTasks; // @synthesize existingTasks=_existingTasks;
@property(retain, nonatomic) NSDictionary *serviceDependancyMappings; // @synthesize serviceDependancyMappings=_serviceDependancyMappings;
@property(nonatomic) _Bool firstUnlockedState; // @synthesize firstUnlockedState=_firstUnlockedState;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) _TtC14GameDaemonCore32GKInstrumentedURLSessionDelegate *inProcessTasksSessionDelegate; // @synthesize inProcessTasksSessionDelegate=_inProcessTasksSessionDelegate;
@property(retain, nonatomic) GKNetworkRequestManagerSessionDelegate *backgroundTasksSessionDelegate; // @synthesize backgroundTasksSessionDelegate=_backgroundTasksSessionDelegate;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSURLSessionConfiguration *backgroundConfig; // @synthesize backgroundConfig=_backgroundConfig;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <GKEntityCacheProviderProtocol> entityCacheProvider; // @synthesize entityCacheProvider=_entityCacheProvider;
- (id)networkRequestManagerStateQueue;	// IMP=0x00100000000cd9a2
- (void)issuePending;	// IMP=0x00100000000cd388
- (id)taskFromIdentifier:(id)arg1;	// IMP=0x00100000000cd260
- (id)pendingLocation;	// IMP=0x00100000000cd1c5
- (id)resultsLocation;	// IMP=0x00100000000cd12a
- (void)issueRequest:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 locale:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000cce42
- (void)_issueRequestForPlayer:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 locale:(id)arg4 playerCredential:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000cc066
- (void)issueRequestForPlayer:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 locale:(id)arg4 playerCredential:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000cbe31
- (void)issueRequest:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cbe0f
- (id)canSafelyIssueRequest:(id)arg1;	// IMP=0x00100000000cbc97
- (id)existingWaitListDate:(id)arg1;	// IMP=0x00100000000cbbd5
- (void)handleRetryAfter:(id)arg1;	// IMP=0x00100000000cb8bd
- (void)setWaitPeriod:(id)arg1 waitPeriod:(double)arg2;	// IMP=0x00100000000cb6a0
- (id)waitListLocation;	// IMP=0x00100000000cb61f
- (void)writeToNetwork:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cace7
- (void)assembleRequestForPlayer:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 sapSession:(id)arg4 playerCredential:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000ca578
- (void)assembleRequest:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 sapSession:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ca492
- (id)playerCredentialsForClientProxy:(id)arg1;	// IMP=0x00100000000ca3b4
- (void)setupSessionsAsync;	// IMP=0x00100000000c948c
- (void)handleTaskFinished:(id)arg1;	// IMP=0x00100000000c905e
- (void)addNetworkRequest:(id)arg1 description:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00100000000c8d30
- (_Bool)managerReady;	// IMP=0x00100000000c8c88
- (id)dictionaryForBagAndPlayer:(id)arg1 createIfNotPresent:(_Bool)arg2 description:(id)arg3;	// IMP=0x00100000000c899b
- (long long)relatedTasksExistForBagKey:(id)arg1;	// IMP=0x00100000000c7f3a
- (void)cancelCurrentTasks;	// IMP=0x00100000000c7b89
- (id)initWithInMemoryEntityCache:(_Bool)arg1;	// IMP=0x00100000000c78e9
- (_Bool)beforeFirstUnlock;	// IMP=0x00100000000c7853
- (void)writeToPendingStore:(id)arg1 fileName:(id)arg2;	// IMP=0x00100000000c7559
- (id)contentsOfPendingStore:(id)arg1;	// IMP=0x00100000000c7457
- (void)cleanUpPendingStore:(id)arg1;	// IMP=0x00100000000c72f5
- (id)pathToTempFile:(id)arg1 fileName:(id)arg2;	// IMP=0x00100000000c728c
- (id)filePathToTempFile:(id)arg1 fileName:(id)arg2;	// IMP=0x00100000000c71ea
- (void)getFairPlaySession:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c71d4
- (id)retrieveAndClearCallbacks:(id)arg1 parameters:(id)arg2;	// IMP=0x00100000000c6d8d
- (_Bool)doesCallbackListExistFor:(id)arg1 parameters:(id)arg2 callback:(id)arg3;	// IMP=0x00100000000c6a66
- (void)deleteEntitiesWithBagKey:(NSString *)arg1 clientProxy:(GKClientProxy *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x00100000001a8e5a
- (void)readEntityWithRequest:(NSDictionary *)arg1 bagKey:(NSString *)arg2 includeStaleCacheData:(_Bool)arg3 clientProxy:(GKClientProxy *)arg4 entityMaker:(id <NSSecureCoding> (^)(NSDictionary *))arg5 completionHandler:(void (^)(id <NSSecureCoding>, NSError *))arg6;	// IMP=0x00100000001a88f4
- (void)readEntityWithRequest:(id)arg1 bagKey:(id)arg2 includeStaleCacheData:(_Bool)arg3 clientProxy:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 entityMaker:(CDUnknownBlockType)arg6;	// IMP=0x00100000001a7012
- (void)createEntityWithRequest:(NSDictionary *)arg1 bagKey:(NSString *)arg2 clientProxy:(GKClientProxy *)arg3 entityMaker:(_TtC14GameDaemonCore17GKCacheableEntity * (^)(NSDictionary *))arg4 completionHandler:(void (^)(id <NSSecureCoding>, NSError *))arg5;	// IMP=0x00100000001a69a5
- (void)createEntityWithRequest:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 entityMaker:(CDUnknownBlockType)arg5;	// IMP=0x00100000001a5cbc

@end

