//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, boringssl_concrete_boringssl_ctx;
@protocol OS_dispatch_queue, OS_sec_array;

__attribute__((visibility("hidden")))
@interface boringssl_concrete_boringssl_psk_cache : NSObject
{
    NSObject<OS_sec_array> *list;	// 8 = 0x8
    boringssl_concrete_boringssl_ctx *context;	// 16 = 0x10
    CDUnknownBlockType psk_selection_block;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *psk_selection_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000069076

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

