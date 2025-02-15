//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_resolver_config : NSObject
{
    struct retained_ptr<NSObject<OS_xpc_object>*> dictionary;	// 8 = 0x8
    unsigned char identifier[16];	// 24 = 0x18
    struct retained_ptr<NSObject<OS_dispatch_source>*> kernel_event_source;	// 40 = 0x28
    struct retained_ptr<NSObject<OS_nw_fd_wrapper>*> kernel_event_wrapper;	// 56 = 0x38
    struct retained_ptr<NSObject<OS_nw_fd_wrapper>*> agent_fd;	// 72 = 0x48
    struct unfair_mutex lock;	// 88 = 0x58
    unsigned int generation;	// 92 = 0x5c
}

- (id).cxx_construct;	// IMP=0x000000000084f3b0
- (void).cxx_destruct;	// IMP=0x000000000084f2a0
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000084ed80
- (id)init;	// IMP=0x000000000084eab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

