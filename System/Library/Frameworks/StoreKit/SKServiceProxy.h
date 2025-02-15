//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SKServiceProxy : NSObject
{
    NSLock *_serviceConnectionLock;	// 8 = 0x8
    NSXPCConnection *_serviceConnection;	// 16 = 0x10
}

+ (id)serviceProxy;	// IMP=0x00600000000220a2
+ (id)inAppClientInterface;	// IMP=0x0060000000021e92
+ (id)inAppServiceInterface;	// IMP=0x0060000000021e72
- (void).cxx_destruct;	// IMP=0x000000000002252b
- (id)inAppService;	// IMP=0x0000000000022517
- (id)inAppServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022505
- (id)objectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002241f
- (void)_serviceConnectionInvalidated;	// IMP=0x00000000000223da
- (id)serviceConnection;	// IMP=0x000000000002214d
- (id)init;	// IMP=0x00000000000220f7

@end

