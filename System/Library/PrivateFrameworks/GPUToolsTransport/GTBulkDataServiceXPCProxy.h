//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTBulkDataTransferOptions, GTServiceConnection, NSSet;
@protocol OS_dispatch_queue, OS_os_log;

@interface GTBulkDataServiceXPCProxy : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    GTServiceConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    GTBulkDataTransferOptions *_defaultTransferOptions;	// 32 = 0x20
    NSSet *_ignoreMethods;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000c242
- (unsigned long long)uploadData:(id)arg1 usingTransferOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000bf26
- (void)uploadData:(id)arg1 usingTransferOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bd59
- (unsigned long long)uploadData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bd40
- (void)uploadData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bd27
- (_Bool)uploadChunk:(id)arg1 forHandle:(unsigned long long)arg2 isFinalChunk:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000000bc0f
- (unsigned long long)newUploadWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bb2d
- (id)downloadData:(unsigned long long)arg1 usingTransferOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b830
- (void)downloadData:(unsigned long long)arg1 usingTransferOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b5c1
- (id)downloadData:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000b5a8
- (void)downloadData:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b58f
- (void)downloadData:(unsigned long long)arg1 usingTransferOptions:(id)arg2 chunkHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b47e
- (id)transferOptions;	// IMP=0x000000000000b460
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000000b3db
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x000000000000b1f1

@end

