//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKBundle, PKDServer;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface PKDXpcClient : NSObject
{
    _Bool _acceptWork;	// 8 = 0x8
    _Bool _sandboxed;	// 9 = 0x9
    unsigned int _requestCount;	// 12 = 0xc
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    PKDServer *_server;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_clientid;	// 40 = 0x28
    PKBundle *_bundle;	// 48 = 0x30
    struct __SecTask *__task;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    CDStruct_4c969caf _auditToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001ba10
@property(nonatomic) unsigned int requestCount; // @synthesize requestCount=_requestCount;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property struct __SecTask *_task; // @synthesize _task=__task;
@property(readonly, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property _Bool acceptWork; // @synthesize acceptWork=_acceptWork;
@property(retain) PKBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly) NSString *clientid; // @synthesize clientid=_clientid;
@property(copy) NSString *path; // @synthesize path=_path;
@property(readonly) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly) PKDServer *server; // @synthesize server=_server;
@property __weak NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x000000000001b750
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x000000000001b6f0
- (id)entitlementValueForKey:(id)arg1;	// IMP=0x000000000001b640
@property(readonly) int pid;
- (void)dead;	// IMP=0x000000000001b560
- (void)dying;	// IMP=0x000000000001b510
- (void)dealloc;	// IMP=0x000000000001b4d0
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x000000000001aaa0

@end

