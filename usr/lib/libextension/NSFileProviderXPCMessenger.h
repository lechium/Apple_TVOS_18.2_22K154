//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileProviderProxy, NSString;
@protocol NSFileProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileProviderXPCMessenger : NSObject
{
    id <NSFileProvider> _fileProvider;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSFileProviderProxy *_fileProviderProxy;	// 24 = 0x18
}

- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000092f3cb
- (void)movingItemAtURL:(id)arg1 withInfo:(id)arg2 fileName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000092ef17
- (oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;	// IMP=0x000000000092ed0d
- (oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterOfURL:(id)arg2 withInfo:(id)arg3;	// IMP=0x000000000092e893
- (void)providePhysicalItemForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000092e432
- (oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2;	// IMP=0x000000000092e28e
- (void)provideItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000092e002
- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 withInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000092d7e4
- (void)checkInProviderWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000092d7d1
- (void)invalidate;	// IMP=0x000000000092d799
- (void)dealloc;	// IMP=0x000000000092d723
- (id)initWithFileProviderProxy:(id)arg1;	// IMP=0x000000000092d6b0
- (id)initWithFileProvider:(id)arg1 queue:(id)arg2;	// IMP=0x000000000092d62a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

