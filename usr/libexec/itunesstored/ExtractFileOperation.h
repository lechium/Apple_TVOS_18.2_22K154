//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

@interface ExtractFileOperation : ISOperation
{
    long long _activeFileBytesCopied;	// 96 = 0x60
    NSString *_activeFilePath;	// 104 = 0x68
    NSString *_destinationFilePath;	// 112 = 0x70
    NSDictionary *_fileAttributes;	// 120 = 0x78
    double _lastSnapshotTime;	// 128 = 0x80
    NSString *_sourceFilePath;	// 136 = 0x88
    int _sourceFileType;	// 144 = 0x90
}

@property int sourceFileType; // @synthesize sourceFileType=_sourceFileType;
@property(retain) NSString *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
@property(copy) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
@property(retain) NSString *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
- (void)_updateProgressWithByteCount:(long long)arg1;	// IMP=0x001000000007cf0d
- (_Bool)_performBOMCopy:(id *)arg1;	// IMP=0x001000000007c48c
- (id)_newBOMCopierOptions;	// IMP=0x001000000007c428
- (void)_initializeProgress;	// IMP=0x001000000007c373
- (void)_copierUpdatedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x001000000007c302
- (void)_copierStartedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x001000000007c29f
- (void)_copierFinishedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x001000000007c26a
- (_Bool)_applyFileAttributesToDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007b929
- (void)run;	// IMP=0x001000000007b8a0
- (void)dealloc;	// IMP=0x001000000007b83a

@end

