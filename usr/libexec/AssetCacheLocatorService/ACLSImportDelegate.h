//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;
@protocol OS_dispatch_queue;

@interface ACLSImportDelegate : NSObject
{
    unsigned int _tag;	// 8 = 0x8
    int _responseCode;	// 12 = 0xc
    NSFileHandle *_fileHandle;	// 16 = 0x10
    unsigned long long _fileOffset;	// 24 = 0x18
    unsigned long long _length;	// 32 = 0x20
    CDUnknownBlockType _callback;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000007610
@property int responseCode; // @synthesize responseCode=_responseCode;
@property unsigned int tag; // @synthesize tag=_tag;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property unsigned long long length; // @synthesize length=_length;
@property unsigned long long fileOffset; // @synthesize fileOffset=_fileOffset;
@property(retain) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000754b
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000739f
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000000705a
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006ea5
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006d4b
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006c14
- (id)initWithFileHandle:(id)arg1 fileOffset:(unsigned long long)arg2 length:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5 tag:(unsigned int)arg6;	// IMP=0x0010000000006b15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

