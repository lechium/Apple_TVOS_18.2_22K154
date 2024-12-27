//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_h3_0rtt_storage_canvas : NSObject
{
    NSObject<OS_dispatch_data> *settings_data;	// 8 = 0x8
    NSObject<OS_dispatch_data> *quic_state;	// 16 = 0x10
    NSObject<OS_dispatch_data> *tls_state;	// 24 = 0x18
    _Bool dirty;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000787e70
- (void)dealloc;	// IMP=0x0000000000787e40
- (id)init;	// IMP=0x0000000000787bc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

