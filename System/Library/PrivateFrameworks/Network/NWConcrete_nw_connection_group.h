//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_array, OS_nw_error, OS_nw_group_descriptor, OS_nw_listener, OS_nw_parameters, OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_connection_group : NSObject
{
    NSObject<OS_dispatch_queue> *client_queue;	// 8 = 0x8
    unsigned int client_qos_class;	// 16 = 0x10
    NWConcrete_nw_connection_group *internally_retained_object;	// 24 = 0x18
    CDUnknownBlockType state_changed_handler;	// 32 = 0x20
    int state;	// 40 = 0x28
    NSObject<OS_nw_error> *last_error;	// 48 = 0x30
    NSObject<OS_nw_parameters> *parameters;	// 56 = 0x38
    NSObject<OS_nw_group_descriptor> *group_descriptor;	// 64 = 0x40
    NSObject<OS_nw_path_evaluator> *group_evaluator;	// 72 = 0x48
    CDUnknownBlockType membership_change_handler;	// 80 = 0x50
    NSObject<OS_nw_listener> *listener;	// 88 = 0x58
    NSObject<OS_nw_listener> *unicast_listener;	// 96 = 0x60
    NSObject<OS_nw_array> *connections;	// 104 = 0x68
    NSObject<OS_nw_array> *send_requests;	// 112 = 0x70
    unsigned char group_uuid[16];	// 120 = 0x78
    CDUnknownBlockType receive_handler;	// 136 = 0x88
    CDUnknownBlockType new_connection_handler;	// 144 = 0x90
    char *description;	// 152 = 0x98
    char *redacted_description;	// 160 = 0xa0
    unsigned int log_id;	// 168 = 0xa8
    struct mutex lock;	// 172 = 0xac
    unsigned int maximum_message_size;	// 176 = 0xb0
    unsigned int connection_limit;	// 180 = 0xb4
    unsigned int new_connection_limit;	// 184 = 0xb8
    unsigned short initial_port;	// 188 = 0xbc
    unsigned int started:1;	// 190 = 0xbe
    unsigned int reject_oversized_messages:1;	// 190 = 0xbe
    unsigned int is_server:1;	// 190 = 0xbe
    unsigned int has_listener_started:1;	// 190 = 0xbe
    unsigned int is_listener_ready:1;	// 190 = 0xbe
    unsigned int is_unicast_listener_ready:1;	// 190 = 0xbe
    unsigned int is_first_connection_ready:1;	// 190 = 0xbe
    unsigned int has_user_cancelled:1;	// 190 = 0xbe
}

- (id).cxx_construct;	// IMP=0x0000000000236c80
- (void).cxx_destruct;	// IMP=0x0000000000236bc0
- (id)redactedDescription;	// IMP=0x0000000000236b80
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000236830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

