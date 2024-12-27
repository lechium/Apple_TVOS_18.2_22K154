//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSDistantObjectRequest.h"

@class NSArray, NSConnection, NSInvocation;

__attribute__((visibility("hidden")))
@interface NSConcreteDistantObjectRequest : NSDistantObjectRequest
{
    NSInvocation *invocation;	// 8 = 0x8
    NSArray *importedObjects;	// 16 = 0x10
    id conversation;	// 24 = 0x18
    unsigned int sequence;	// 32 = 0x20
    NSConnection *connection;	// 40 = 0x28
}

- (void)dealloc;	// IMP=0x0000000000762b8c
- (void)replyWithException:(id)arg1;	// IMP=0x0000000000762b1d
- (id)conversation;	// IMP=0x0000000000762aff
- (id)connection;	// IMP=0x0000000000762ae1
- (id)invocation;	// IMP=0x0000000000762ac3
- (id)initWithInvocation:(id)arg1 conversation:(id)arg2 sequence:(unsigned int)arg3 importedObjects:(id)arg4 connection:(id)arg5;	// IMP=0x0000000000762a40

@end

