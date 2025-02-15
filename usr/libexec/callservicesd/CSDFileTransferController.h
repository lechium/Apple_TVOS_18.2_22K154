//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol CSDFileTransferringDelegate, CSDIDSService, OS_dispatch_queue;

@interface CSDFileTransferController : NSObject
{
    id <CSDFileTransferringDelegate> _delegate;	// 8 = 0x8
    id <CSDIDSService> _service;	// 16 = 0x10
    NSMutableDictionary *_clientFileURLByIdentifier;	// 24 = 0x18
    NSMutableDictionary *_temporaryFileURLByClientFileURL;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (void)deleteContentsAtURL:(id)arg1;	// IMP=0x00200000000b1f56
+ (id)renamedResourceURL:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000b1e9c
+ (id)renameResourceAtURL:(id)arg1 toResourceWithName:(id)arg2;	// IMP=0x00100000000b1d2c
+ (id)copyFileAtURL:(id)arg1 toTemporaryFileWithName:(id)arg2;	// IMP=0x00100000000b1a23
- (void).cxx_destruct;	// IMP=0x00200000000b289b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableDictionary *temporaryFileURLByClientFileURL; // @synthesize temporaryFileURLByClientFileURL=_temporaryFileURLByClientFileURL;
@property(readonly, nonatomic) NSMutableDictionary *clientFileURLByIdentifier; // @synthesize clientFileURLByIdentifier=_clientFileURLByIdentifier;
@property(retain, nonatomic) id <CSDIDSService> service; // @synthesize service=_service;
@property(nonatomic) __weak id <CSDFileTransferringDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cleanUpTemporaryFileIfExistsForClientFileURL:(id)arg1;	// IMP=0x00100000000b26b4
- (void)performFileCopierOperation:(unsigned long long)arg1 onInputURL:(id)arg2 outputURL:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b235a
- (void)zipDirectoryAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b2088
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000b16f7
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x00100000000b1448
- (void)transferFileAtTemporaryURL:(id)arg1 toDestinations:(id)arg2 withMetadata:(id)arg3 fromMember:(id)arg4;	// IMP=0x00100000000b0ca5
- (void)unzipArchiveAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b070d
- (void)transferFileAtSandboxExtendedURL:(id)arg1 toDestinations:(id)arg2 withMetadata:(id)arg3 fromMember:(id)arg4;	// IMP=0x00100000000b0567
- (void)transferFileAtURL:(id)arg1 toDestinations:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000b03b0
- (id)initWithService:(id)arg1;	// IMP=0x00100000000b02db
- (id)init;	// IMP=0x00100000000b0281

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

