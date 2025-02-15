//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface VCPMADPhotosFetchProcessingTask
{
    NSURL *_photoLibraryURL;	// 8 = 0x8
    CDUnknownBlockType _fetchBlock;	// 16 = 0x10
    CDUnknownBlockType _progressHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000094c9d
- (_Bool)run:(id *)arg1;	// IMP=0x0010000000094417
- (id)initWithFetchBlock:(CDUnknownBlockType)arg1 photoLibraryWithURL:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000094286

@end

