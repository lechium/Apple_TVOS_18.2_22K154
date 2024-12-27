//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFileHandle.h"

@class NSObject;
@protocol OS_dispatch_data, OS_dispatch_io, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteFileHandle : NSFileHandle
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Atomic int _error;	// 12 = 0xc
    _Atomic int _resultSocket;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_dsrc;	// 24 = 0x18
    NSObject<OS_dispatch_data> *_resultData;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_fhQueue;	// 40 = 0x28
    NSObject<OS_dispatch_io> *_readChannel;	// 48 = 0x30
    CDUnknownBlockType _readabilityHandler;	// 56 = 0x38
    CDUnknownBlockType _writeabilityHandler;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_readMonitoringSource;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_writeMonitoringSource;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_monitoringQueue;	// 88 = 0x58
    int _fd;	// 96 = 0x60
    _Atomic unsigned short _flags;	// 100 = 0x64
}

- (void)_closeOnDealloc;	// IMP=0x00000000007915f7
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000791562
- (CDUnknownBlockType)writeabilityHandler;	// IMP=0x000000000079151e
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000079148c
- (CDUnknownBlockType)readabilityHandler;	// IMP=0x0000000000791448
- (void)_locked_clearHandler:(CDUnknownBlockType *)arg1 forSource:(id *)arg2;	// IMP=0x0000000000791414
- (id)_monitor:(int)arg1;	// IMP=0x00000000007911d3
- (void)waitForDataInBackgroundAndNotify;	// IMP=0x00000000007911bf
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;	// IMP=0x00000000007911a5
- (void)acceptConnectionInBackgroundAndNotify;	// IMP=0x0000000000791191
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;	// IMP=0x0000000000791177
- (void)readToEndOfFileInBackgroundAndNotify;	// IMP=0x0000000000791163
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;	// IMP=0x0000000000791149
- (void)readInBackgroundAndNotify;	// IMP=0x0000000000791135
- (void)readInBackgroundAndNotifyForModes:(id)arg1;	// IMP=0x000000000079111b
- (void)performActivity:(long long)arg1 modes:(id)arg2;	// IMP=0x00000000007904a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000079049b
- (void)dealloc;	// IMP=0x00000000007903cb
- (void)setPort:(id)arg1;	// IMP=0x00000000007903c5
- (id)port;	// IMP=0x00000000007903bd
- (_Bool)closeAndReturnError:(out id *)arg1;	// IMP=0x0000000000790299
- (void)closeFile;	// IMP=0x00000000007901a1
- (void)_cancelDispatchSources;	// IMP=0x00000000007900d7
- (_Bool)synchronizeAndReturnError:(out id *)arg1;	// IMP=0x000000000078ffb3
- (void)synchronizeFile;	// IMP=0x000000000078ff71
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000078fe4d
- (void)truncateFileAtOffset:(unsigned long long)arg1;	// IMP=0x000000000078fdea
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000078fcc6
- (void)seekToFileOffset:(unsigned long long)arg1;	// IMP=0x000000000078fc7b
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000078fb4e
- (unsigned long long)seekToEndOfFile;	// IMP=0x000000000078fb01
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000078f9d4
- (unsigned long long)offsetInFile;	// IMP=0x000000000078f987
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000078f863
- (void)writeData:(id)arg1;	// IMP=0x000000000078f6cc
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;	// IMP=0x000000000078f5af
- (id)readDataToEndOfFile;	// IMP=0x000000000078f596
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000078f479
- (id)readDataOfLength:(unsigned long long)arg1;	// IMP=0x000000000078f115
- (unsigned long long)readDataOfLength:(unsigned long long)arg1 buffer:(char *)arg2;	// IMP=0x000000000078ef9f
- (id)availableData;	// IMP=0x000000000078ee79
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;	// IMP=0x000000000078ee64
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000078ed87
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000078ec44
- (id)initWithFileDescriptor:(int)arg1;	// IMP=0x000000000078ec30
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(_Bool)arg2;	// IMP=0x000000000078ebcb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000078eb09
- (id)init;	// IMP=0x000000000078eab5
- (int)fileDescriptor;	// IMP=0x000000000078ea8f

@end

