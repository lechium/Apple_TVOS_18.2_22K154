//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol CLIntersiloUniverse;

@interface CLEEDMediaServiceHandler : NSObject
{
    id <CLIntersiloUniverse> fUniverse;	// 8 = 0x8
    CDUnknownBlockType fCompletionCallback;	// 16 = 0x10
    CDUnknownBlockType fErrorCallback;	// 24 = 0x18
    CDUnknownBlockType fGetMitigationCallback;	// 32 = 0x20
    CDUnknownBlockType fGetUploadConfigCallback;	// 40 = 0x28
    NSXPCConnection *fConnection;	// 48 = 0x30
}

- (void)processMediaEndOfExtendedSessionNotification;	// IMP=0x0020000000f6691e
- (void)processMediaForMitigations:(id)arg1;	// IMP=0x0010000000f6655c
- (void)notifyProcessingCompletion;	// IMP=0x0010000000f663aa
- (void)processMediaForRequestID:(id)arg1 callUUID:(id)arg2 uploadURL:(id)arg3 sharedInfoPrefix:(id)arg4 combinedSecret:(id)arg5 token:(id)arg6 mediaList:(id)arg7 mitigation:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0010000000f65dd0
- (void)cleanup;	// IMP=0x0010000000f65a95
- (void)handleRemoteProxyError:(id)arg1 forProcessIdentifier:(int)arg2;	// IMP=0x0010000000f6581f
- (void)connectToMediaService;	// IMP=0x0010000000f649fd
- (void)dealloc;	// IMP=0x0010000000f647c1
- (id)initWithUniverse:(id)arg1 serviceCompletionCB:(CDUnknownBlockType)arg2 getMitigationCB:(CDUnknownBlockType)arg3 getUploadConfigCB:(CDUnknownBlockType)arg4 errorCB:(CDUnknownBlockType)arg5;	// IMP=0x0010000000f647b9

@end

