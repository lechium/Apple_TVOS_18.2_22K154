//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11HomeKitCore9XPCServer : NSObject
{
    MISSING_TYPE *homesStore;	// 8 = 0x8
    MISSING_TYPE *listener;	// 16 = 0x10
    MISSING_TYPE *storeServer;	// 24 = 0x18
    MISSING_TYPE *proxies;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000057ec0
- (id)init;	// IMP=0x0000000000057e60
- (void)start;	// IMP=0x0000000000058030
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000582e0

@end

