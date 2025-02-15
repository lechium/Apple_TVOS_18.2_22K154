//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, SHShazamKitServiceConnectionClient, SHShazamKitServiceConnectionProvider;

__attribute__((visibility("hidden")))
@interface SHShazamKitServiceConnection : NSObject
{
    struct os_unfair_lock_s _connectionLock;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    SHShazamKitServiceConnectionProvider *_connectionProvider;	// 24 = 0x18
    SHShazamKitServiceConnectionClient *_shazamKitClient;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002327b
@property(nonatomic) struct os_unfair_lock_s connectionLock; // @synthesize connectionLock=_connectionLock;
@property(readonly, nonatomic) SHShazamKitServiceConnectionClient *shazamKitClient; // @synthesize shazamKitClient=_shazamKitClient;
@property(readonly, nonatomic) SHShazamKitServiceConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
- (void)isHapticTrackAvailableForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023105
- (void)hapticsForMediaItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022fb0
- (void)mediaItemsForShazamIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022e5b
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022cfe
- (void)_libraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022bbe
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x0000000000022904
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x000000000002287d
- (void)stopRecognition;	// IMP=0x0000000000022813
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x0000000000022719
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x00000000000225b4
- (void)prepareMatcherForRequestID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022403
- (CDUnknownBlockType)matcherDelegateErrorHandlerForSignature:(id)arg1;	// IMP=0x0000000000022170
- (void)tearDownConnection;	// IMP=0x000000000002207b
- (void)attachDefaultConnectionHandlers;	// IMP=0x0000000000021dc9
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id delegate;
- (id)initWithConnectionProvider:(id)arg1;	// IMP=0x0000000000021ba6
- (void)dealloc;	// IMP=0x0000000000021b68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

