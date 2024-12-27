//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (FezAdditions)
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;	// IMP=0x0060000000008b97
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;	// IMP=0x0060000000008b75
- (_Bool)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4 asCopy:(_Bool)arg5;	// IMP=0x00600000000089b3
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;	// IMP=0x00600000000087cb
- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;	// IMP=0x0060000000008517
- (_Bool)makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;	// IMP=0x0060000000008429
- (_Bool)_isPathOnMissingVolume:(id)arg1;	// IMP=0x00600000000082f7
- (id)_randomSimilarFilePathAsPath:(id)arg1;	// IMP=0x0060000000008225
- (id)_randomTemporaryPathWithFileName:(id)arg1 withAppendedPathComponent:(id)arg2;	// IMP=0x00600000000080a9
- (id)_randomTemporaryPathWithFileName:(id)arg1;	// IMP=0x0060000000007f6a
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 withAppendedPathComponent:(id)arg3;	// IMP=0x0060000000007e8e
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2;	// IMP=0x0060000000007dd0
- (id)_randomTemporaryPathWithSuffix:(id)arg1 withAppendedPathComponent:(id)arg2;	// IMP=0x0060000000007db9
- (id)_randomTemporaryPathWithSuffix:(id)arg1;	// IMP=0x0060000000007da5
- (id)_generateLinkForURL:(id)arg1;	// IMP=0x0060000000007b39
@end

