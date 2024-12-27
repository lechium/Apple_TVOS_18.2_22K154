//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_endpoint, OS_nw_protocol_stack, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_transform : NSObject
{
    unsigned int clear_application:1;	// 8 = 0x8
    unsigned int clear_transport:1;	// 8 = 0x8
    unsigned int clear_internet:1;	// 8 = 0x8
    unsigned int no_proxy:1;	// 8 = 0x8
    unsigned int prohibit_direct:1;	// 8 = 0x8
    unsigned int tfo:1;	// 8 = 0x8
    unsigned int tfo_no_cookie:1;	// 8 = 0x8
    unsigned int no_fallback:1;	// 8 = 0x8
    unsigned int fast_open_force_enable:1;	// 9 = 0x9
    unsigned int set_multipath_service:1;	// 9 = 0x9
    unsigned int set_traffic_class:1;	// 9 = 0x9
    unsigned int traffic_class;	// 12 = 0xc
    int fallback_mode;	// 16 = 0x10
    int multipath_service;	// 20 = 0x14
    int data_mode;	// 24 = 0x18
    NSObject<OS_nw_endpoint> *replace_endpoint;	// 32 = 0x20
    NSObject<OS_xpc_object> *disabled_protocols;	// 40 = 0x28
    NSObject<OS_xpc_object> *match_url_schemes;	// 48 = 0x30
    NSObject<OS_nw_protocol_stack> *transform_stack;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000901980
- (void)dealloc;	// IMP=0x0000000000901950
- (id)init;	// IMP=0x0000000000901680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

