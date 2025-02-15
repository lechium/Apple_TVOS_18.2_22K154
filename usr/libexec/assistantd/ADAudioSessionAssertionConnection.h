//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFTwoArgumentSafetyBlock, NSString, NSXPCConnection;
@protocol AFRelinquishableAssertion, OS_dispatch_queue;

@interface ADAudioSessionAssertionConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _processIdentifier;	// 16 = 0x10
    id <AFRelinquishableAssertion> _assertion;	// 24 = 0x18
    NSXPCConnection *_xpcConnection;	// 32 = 0x20
    AFTwoArgumentSafetyBlock *_relinquishmentHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000148b03
- (void)_clearXPCConnection;	// IMP=0x0010000000148a08
- (void)_relinquishAssertionWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00100000001488ca
- (void)_finalizeWithContext:(id)arg1 error:(id)arg2;	// IMP=0x001000000014873e
- (void)invalidate;	// IMP=0x001000000014865f
- (oneway void)relinquishAudioSessionWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000148461
- (oneway void)acquireAudioSessionWithContext:(id)arg1 relinquishmentHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001482fb
- (void)dealloc;	// IMP=0x001000000014819c
@property(readonly, copy) NSString *description;
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000147f64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

