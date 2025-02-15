//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUTools/DYBaseDaemon.h>

@class DYTransport, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DYEmbeddedDaemon : DYBaseDaemon
{
    struct _CSTypeRef _symbolicator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_symbolicatorQueue;	// 24 = 0x18
    DYTransport *_helperTransport;	// 32 = 0x20
    NSString *_guestAppIdentifier;	// 40 = 0x28
    CDUnknownBlockType _terminationHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000060f7
- (void)terminate:(int)arg1;	// IMP=0x0010000000005fa1
- (void)handleMessage:(id)arg1;	// IMP=0x0010000000005433
- (id)getApplications;	// IMP=0x001000000000511a
- (id)processApplication:(id)arg1;	// IMP=0x0010000000004b7d
- (_Bool)launchInferior:(id)arg1 finalEnvironment:(id *)arg2 error:(id *)arg3;	// IMP=0x0010000000004197
- (_Bool)launchUIServer:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000037bd
- (int)launchInferiorWithIdentifer:(id)arg1 environment:(id)arg2 arguments:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000002f59
- (int)launchInferiorWithPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 workingDirectory:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000024b5
- (_Bool)bringAppToForeground:(id)arg1;	// IMP=0x001000000000214e
- (void)cacheInferiorAppIdentifier;	// IMP=0x001000000000201c
- (_Bool)createInferiorTransportAndSetEnvironment:(id)arg1 uniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000001e7b
- (id)captureAPISupportForAPI:(unsigned int)arg1;	// IMP=0x0010000000001e2e
- (id)initWithTransport:(id)arg1 terminationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001c6c

@end

