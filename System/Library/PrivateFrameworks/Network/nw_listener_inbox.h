//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_endpoint, OS_nw_interface, OS_nw_parameters, nw_listener_inbox_delegate;

__attribute__((visibility("hidden")))
@interface nw_listener_inbox : NSObject
{
    NSObject<nw_listener_inbox_delegate> *_delegate;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSString *_description;	// 24 = 0x18
    NSObject<OS_nw_endpoint> *_local_endpoint;	// 32 = 0x20
    NSObject<OS_nw_interface> *_interface;	// 40 = 0x28
    NSObject<OS_nw_parameters> *_parameters;	// 48 = 0x30
    int _level;	// 56 = 0x38
    unsigned int _suspended:1;	// 60 = 0x3c
    _Bool _multicast;	// 61 = 0x3d
}

- (void).cxx_destruct;	// IMP=0x00000000009e0b00
@property(nonatomic) _Bool multicast; // @synthesize multicast=_multicast;
@property(readonly, nonatomic) NSObject<OS_nw_interface> *interface; // @synthesize interface=_interface;
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *local_endpoint; // @synthesize local_endpoint=_local_endpoint;
- (_Bool)cancel;	// IMP=0x00000000009e07e0
- (_Bool)resume;	// IMP=0x00000000009e0700
- (_Bool)isSuspended;	// IMP=0x00000000009e06f0
- (_Bool)suspend;	// IMP=0x00000000009e0610
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000009e02f0
- (id)start;	// IMP=0x00000000009e02e0

@end

