//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionRequestedReplies : NSObject
{
    struct __CFDictionary *_replyDictionaryTable;	// 8 = 0x8
    struct __CFDictionary *_replyTransactionTable;	// 16 = 0x10
    struct __CFDictionary *_progressTable;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    unsigned char _invalid;	// 36 = 0x24
}

- (void)dealloc;	// IMP=0x000000000096074b
- (id)init;	// IMP=0x000000000096073b

@end

