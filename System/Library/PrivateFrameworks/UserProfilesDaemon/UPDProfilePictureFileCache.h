//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSURL;

__attribute__((visibility("hidden")))
@interface UPDProfilePictureFileCache : NSObject
{
    NSFileManager *_fileManager;	// 8 = 0x8
    NSURL *_cacheDirectoryURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005a1c
- (_Bool)_parseProfilePictureFileName:(id)arg1 altDSID:(out id *)arg2 uuidString:(out id *)arg3;	// IMP=0x00000000000057f1
- (_Bool)_parseProfilePictureFileURL:(id)arg1 directoryURL:(out id *)arg2 fileName:(out id *)arg3 altDSID:(out id *)arg4 uuidString:(out id *)arg5;	// IMP=0x000000000000563a
- (_Bool)_isProfilePictureFileName:(id)arg1;	// IMP=0x0000000000005623
- (id)_imageFileURLForFileName:(id)arg1;	// IMP=0x000000000000560d
- (id)_profilePictureFileNameFromURL:(id)arg1;	// IMP=0x00000000000055cb
- (_Bool)_removeFileAtURL:(id)arg1;	// IMP=0x0000000000005480
- (id)_fileURLsInCacheDirectoryWithError:(out id *)arg1;	// IMP=0x0000000000005453
- (id)removeAllFilesExcludingImageFileNames:(id)arg1;	// IMP=0x000000000000506b
- (id)removeAllFiles;	// IMP=0x0000000000005057
- (_Bool)removeFileNamed:(id)arg1;	// IMP=0x0000000000005006
- (id)saveImageData:(id)arg1 forAltDSID:(id)arg2 error:(out id *)arg3;	// IMP=0x0000000000004d4b
- (id)imageFileURLForFileName:(id)arg1;	// IMP=0x0000000000004cc2
- (id)altDSIDForFileName:(id)arg1;	// IMP=0x0000000000004c87
- (id)imageFileNamesByAltDSID;	// IMP=0x000000000000477e
- (id)initWithCachesURL:(id)arg1;	// IMP=0x0000000000004448

@end

