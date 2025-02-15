//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LZMADecoder, NSError, NSString, UnfairLock;
@protocol StreamDelegate, StreamReader;

@interface LZMAStreamReader
{
    UnfairLock *_lock;	// 8 = 0x8
    id <StreamReader> _streamReader;	// 16 = 0x10
    LZMADecoder *_decoder;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e0e28
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e0a63
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x00100000000e0780
- (void)open;	// IMP=0x00100000000e0734
- (void)close;	// IMP=0x00100000000e06d2
@property(readonly) _Bool hasBytesAvailable;
- (void)dealloc;	// IMP=0x00100000000e0414

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

