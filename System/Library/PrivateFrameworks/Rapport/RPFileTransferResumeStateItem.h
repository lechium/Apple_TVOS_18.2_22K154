//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RPFileTransferResumeStateItem : NSObject
{
    NSMutableDictionary *_fileInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004f16b
- (_Bool)outputFileItemUsable:(id)arg1;	// IMP=0x000000000004ed77
- (_Bool)sourceFileItemUsable:(id)arg1;	// IMP=0x000000000004ea82
- (void)setError:(id)arg1;	// IMP=0x000000000004ea33
- (id)error;	// IMP=0x000000000004ea16
- (void)setBytesWritten:(unsigned long long)arg1;	// IMP=0x000000000004e9bb
- (unsigned long long)bytesWritten;	// IMP=0x000000000004e963
- (void)setFileModTimeNsec:(unsigned long long)arg1;	// IMP=0x000000000004e908
- (unsigned long long)fileModTimeNsec;	// IMP=0x000000000004e8b0
- (void)setFileModTime:(unsigned long long)arg1;	// IMP=0x000000000004e855
- (unsigned long long)fileModTime;	// IMP=0x000000000004e7fd
- (void)setFileOffset:(unsigned long long)arg1;	// IMP=0x000000000004e7a2
- (unsigned long long)fileOffset;	// IMP=0x000000000004e74a
- (void)setFileSize:(unsigned long long)arg1;	// IMP=0x000000000004e6ef
- (unsigned long long)fileSize;	// IMP=0x000000000004e697
- (void)setFileName:(id)arg1;	// IMP=0x000000000004e67a
- (id)fileName;	// IMP=0x000000000004e65d
- (void)setItemURL:(id)arg1;	// IMP=0x000000000004e640
- (id)itemURL;	// IMP=0x000000000004e623
- (id)fileInfo;	// IMP=0x000000000004e615
- (void)dealloc;	// IMP=0x000000000004e5d2
- (id)initWithStateDict:(id)arg1;	// IMP=0x000000000004e554
- (id)initWithFileTransferRequestDict:(id)arg1;	// IMP=0x000000000004e3a8

@end

