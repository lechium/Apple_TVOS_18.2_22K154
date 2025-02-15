//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWPrivilegedHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_listener;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
    NSMutableSet *_allKnownEntitlementSet;	// 32 = 0x20
    NSMutableArray *_allKnownEntitlementGroup;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000074ba50
@property(retain) NSMutableArray *allKnownEntitlementGroup; // @synthesize allKnownEntitlementGroup=_allKnownEntitlementGroup;
@property(retain) NSMutableSet *allKnownEntitlementSet; // @synthesize allKnownEntitlementSet=_allKnownEntitlementSet;
@property(retain) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)handleRequest:(id)arg1 onConnection:(id)arg2;	// IMP=0x000000000074b440
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000074adc0
- (void)startThrottlePolicyEventListener;	// IMP=0x000000000074ad70
- (_Bool)startXPCListener;	// IMP=0x000000000074a5b0
- (void)registerHelperFunctions;	// IMP=0x0000000000749950
- (void)registerHandlerFunction:(CDUnknownFunctionPointerType)arg1 type:(int)arg2 allowedEntitlementGroup:(id)arg3;	// IMP=0x0000000000748540

@end

