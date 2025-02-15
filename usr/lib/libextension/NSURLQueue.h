//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLQueueNode;

__attribute__((visibility("hidden")))
@interface NSURLQueue : NSObject
{
    unsigned long long count;	// 8 = 0x8
    NSURLQueueNode *head;	// 16 = 0x10
    NSURLQueueNode *tail;	// 24 = 0x18
    id monitor;	// 32 = 0x20
    _Bool waitOnTake;	// 40 = 0x28
    _Bool _pad1;	// 41 = 0x29
    _Bool _pad2;	// 42 = 0x2a
    _Bool _pad3;	// 43 = 0x2b
}

+ (id)newNode;	// IMP=0x00600000008861b0
- (void)setWaitOnTake:(_Bool)arg1;	// IMP=0x000000000088663b
- (_Bool)waitOnTake;	// IMP=0x0000000000886632
- (unsigned long long)count;	// IMP=0x0000000000886628
- (_Bool)isEmpty;	// IMP=0x000000000088661a
- (long long)indexOf:(id)arg1;	// IMP=0x00000000008865b1
- (void)clear;	// IMP=0x0000000000886541
- (_Bool)remove:(id)arg1;	// IMP=0x0000000000886498
- (id)peekAt:(unsigned long long)arg1;	// IMP=0x0000000000886443
- (id)peek;	// IMP=0x00000000008863fd
- (id)take;	// IMP=0x0000000000886358
- (void)put:(id)arg1;	// IMP=0x00000000008862ae
- (void)dealloc;	// IMP=0x0000000000886243
- (id)init;	// IMP=0x00000000008861c1

@end

