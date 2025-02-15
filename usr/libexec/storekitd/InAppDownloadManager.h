//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable, NSMutableDictionary, NSOperationQueue;

@interface InAppDownloadManager : NSObject
{
    NSLock *_downloadLock;	// 8 = 0x8
    NSOperationQueue *_downloadQueue;	// 16 = 0x10
    NSMapTable *_observers;	// 24 = 0x18
    NSMutableDictionary *_pendingDownloads;	// 32 = 0x20
}

+ (id)manager;	// IMP=0x004000000000b1e1
- (void);	// IMP=0x002000000000d421
- (void)_notifyObserversDownloadStatusChanged:(id)arg1;	// IMP=0x001000000000d26b
- (id)processDownloadsForTransactions:(id)arg1;	// IMP=0x001000000000cb3e
- (void)removeDownloadsForTransactionID:(id)arg1;	// IMP=0x001000000000c194
- (void)pauseDownloadWithID:(id)arg1;	// IMP=0x001000000000be38
- (void)cancelDownloadWithID:(id)arg1;	// IMP=0x001000000000badc
- (_Bool)startDownloadWithID:(id)arg1 client:(id)arg2 auditToken:(CDStruct_6ad76789)arg3;	// IMP=0x001000000000b48d
- (void)removeDownloadObserver:(id)arg1;	// IMP=0x001000000000b410
- (id)addDownloadObserver:(id)arg1;	// IMP=0x001000000000b342
- (id)init;	// IMP=0x001000000000b266

@end

