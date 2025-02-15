//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSObject, NSString;
@protocol OS_dispatch_queue, StreamDelegate, StreamReader;

@interface FairPlayStreamReader
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSData *_scratchBuffer;	// 16 = 0x10
    id <StreamReader> _streamReader;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001746dc
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000017410e
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0010000000173dd9
- (void)close;	// IMP=0x0010000000173d77
- (void)open;	// IMP=0x0010000000173d2b
@property(readonly) _Bool hasBytesAvailable;
- (void)dealloc;	// IMP=0x0010000000173b6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property __weak id <StreamDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSError *streamError;
@property(readonly) unsigned long long streamStatus;
@property(readonly) Class superclass;

@end

