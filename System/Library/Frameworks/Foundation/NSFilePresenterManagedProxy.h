//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileAccessProcessManager;
@protocol NSFilePresenterXPCInterface><NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface NSFilePresenterManagedProxy : NSObject
{
    unsigned long long _filePresenterResponses;	// 8 = 0x8
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> *_xpcProxy;	// 16 = 0x10
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> *_nonboostingXPCProxy;	// 24 = 0x18
    NSFileAccessProcessManager *_processManager;	// 32 = 0x20
    CDUnknownBlockType _errorHandler;	// 40 = 0x28
}

@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain) NSFileAccessProcessManager *processManager; // @synthesize processManager=_processManager;
@property unsigned long long filePresenterResponses; // @synthesize filePresenterResponses=_filePresenterResponses;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000937131
- (id)remoteObjectProxy;	// IMP=0x0000000000937128
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000093705d
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000937047
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000937031
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000936f9d
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000936f69
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000936e1e
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000936d5b
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000936cb1
- (void)_safelySendMessageWithSelector:(SEL)arg1 withErrorCompletionHandler:(CDUnknownBlockType)arg2 sender:(CDUnknownBlockType)arg3;	// IMP=0x00000000009369cd
- (void)dealloc;	// IMP=0x0000000000936952
- (id)initWithXPCProxy:(id)arg1;	// IMP=0x00000000009368bd
- (_Bool)_presenterRespondsToSelector:(SEL)arg1;	// IMP=0x00000000009367d3

@end

