//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CPLDaemonConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000fa4e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f9d1
- (void)close;	// IMP=0x001000000000f99f
- (void)dealloc;	// IMP=0x001000000000f95d
- (id)init;	// IMP=0x001000000000f853

@end

