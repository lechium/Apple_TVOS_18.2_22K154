//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TRI)
+ (id)triArbitraryFileInDirWithPath:(id)arg1;	// IMP=0x006000000006c0e2
+ (_Bool)triIdempotentCreateDirectoryOrFaultWithPath:(id)arg1;	// IMP=0x006000000006bfb8
+ (_Bool)triRemoveFileProtectionIfPresentForPath:(id)arg1;	// IMP=0x006000000006bda3
+ (_Bool)triHasFileProtection:(id)arg1;	// IMP=0x006000000006bb41
- (_Bool)triRemoveItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006b65a
- (id)triCreateDirectoryForPath:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000006b43c
- (id)triPath:(id)arg1 relativeToParentPath:(id)arg2;	// IMP=0x001000000006b18f
- (_Bool)triSafeCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006b00f
@end

