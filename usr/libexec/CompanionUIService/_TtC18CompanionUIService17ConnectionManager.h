//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC18CompanionUIService17ConnectionManager : NSObject
{
    MISSING_TYPE *connectionQueue;	// 8 = 0x8
    MISSING_TYPE *listener;	// 16 = 0x10
    MISSING_TYPE *connection;	// 24 = 0x18
    MISSING_TYPE *server;	// 32 = 0x20
    MISSING_TYPE *interface;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000000036f0
- (id)init;	// IMP=0x00100000000036a0
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000033f0

@end

