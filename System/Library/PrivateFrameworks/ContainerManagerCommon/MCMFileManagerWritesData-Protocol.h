//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSURL;

@protocol MCMFileManagerWritesData
- (_Bool)writeData:(NSData *)arg1 toURL:(NSURL *)arg2 options:(unsigned long long)arg3 mode:(unsigned short)arg4 error:(id *)arg5;
- (unsigned long long)dataWritingOptionsForFileAtURL:(NSURL *)arg1;
@end

