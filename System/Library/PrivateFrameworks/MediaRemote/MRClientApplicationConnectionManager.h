//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface MRClientApplicationConnectionManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_connections;	// 16 = 0x10
    NSMapTable *_listeners;	// 24 = 0x18
    NSMapTable *_listenerPendingConnections;	// 32 = 0x20
    NSMapTable *_handoffSessionHandlers;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x00400000000eaeea
- (void).cxx_destruct;	// IMP=0x00000000000ebbd6
@property(readonly, nonatomic) NSMapTable *handoffSessionHandlers; // @synthesize handoffSessionHandlers=_handoffSessionHandlers;
@property(readonly, nonatomic) NSMapTable *listenerPendingConnections; // @synthesize listenerPendingConnections=_listenerPendingConnections;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMapTable *listeners; // @synthesize listeners=_listeners;
@property(readonly, nonatomic) NSMapTable *connections; // @synthesize connections=_connections;
- (CDUnknownBlockType)handoffSessionHandlerForPlayerPath:(id)arg1;	// IMP=0x00000000000ebb2a
- (void)registerHandoffSessionHandlerForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eba9b
- (void)listenerForHandlingConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb8f6
- (id)connectionForIdentifier:(id)arg1;	// IMP=0x00000000000eb862
- (void)unregisterConnection:(id)arg1;	// IMP=0x00000000000eb7c0
- (void)registerConnection:(id)arg1;	// IMP=0x00000000000eb71e
- (id)listenerForServiceName:(id)arg1 playerPath:(id)arg2;	// IMP=0x00000000000eb64e
- (void)registerListener:(id)arg1;	// IMP=0x00000000000eaf3f
- (id)init;	// IMP=0x00000000000eae02

@end

