//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSObject, NSString;
@protocol CTXPCServiceInterface;

__attribute__((visibility("hidden")))
@interface CoreTelephonyClientRemoteAsyncProxy : NSProxy
{
    NSObject<CTXPCServiceInterface> *_target;	// 8 = 0x8
    struct queue _userQueue;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000073d8c
- (void).cxx_destruct;	// IMP=0x0000000000073d57
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000073d3a
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000073900
- (id)initWithXPCObject:(id)arg1 userQueue:(struct queue)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000073649

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

