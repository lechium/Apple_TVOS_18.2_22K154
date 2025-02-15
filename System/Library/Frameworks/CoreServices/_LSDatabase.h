//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FSNode;

__attribute__((visibility("hidden")))
@interface _LSDatabase : NSObject
{
    struct __CSStore *store;	// 8 = 0x8
    struct LSSchema schema;	// 16 = 0x10
    FSNode *node;	// 1640 = 0x668
    struct LSSessionKey sessionKey;	// 1648 = 0x670
    struct __CSStoreAccessContext *accessContext;	// 1656 = 0x678
    unsigned int needsUpdate:1;	// 1664 = 0x680
    unsigned int isForcedForXCTesting:1;	// 1664 = 0x680
    unsigned int isForcedForRemoteUpdates:1;	// 1664 = 0x680
}

- (void).cxx_destruct;	// IMP=0x0000000000095d1e
- (id)description;	// IMP=0x0000000000095201
- (void)dealloc;	// IMP=0x000000000009514d
- (id)_init;	// IMP=0x00000000000950bf
- (id)init;	// IMP=0x000000000009509a

@end

