//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class Protocol;

__attribute__((visibility("hidden")))
@interface _MPMiddlewareChainBuilderProxy : NSProxy
{
    Protocol *_protocol;	// 8 = 0x8
}

+ (id)allocWithProtocol:(id)arg1;	// IMP=0x006000000023e043
- (void).cxx_destruct;	// IMP=0x000000000023df0f
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000023decd
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000023ddbd

@end

