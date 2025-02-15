//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface RMStoreDataFetcher : NSObject
{
    NSURLSession *_URLSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009c89d
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (_Bool)_validateResponseForURL:(id)arg1 statusCode:(id)arg2 headers:(id)arg3 fetchedData:(id)arg4 downloadURL:(id)arg5 error:(id *)arg6;	// IMP=0x001000000009c661
- (id)_userAgent;	// IMP=0x001000000009c543
- (id)_createRequestWithURL:(id)arg1 additionalHeaders:(id)arg2;	// IMP=0x001000000009c442
- (id)_dictionaryForResponse:(id)arg1 downloadedData:(id)arg2 downloadedURL:(id)arg3;	// IMP=0x001000000009c24d
- (void)_processDownloadResponseWithURL:(id)arg1 downloadURL:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009bf3c
- (_Bool)_moveDownloadedFile:(id)arg1 downloadURL:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009ba2b
- (id)_downloadTaskWithURL:(id)arg1 additionalHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009b8a8
- (void)_downloadDataAtURL:(id)arg1 downloadURL:(id)arg2 additionalHeaders:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009b632
- (void)_downloadMDMDataAtURL:(id)arg1 downloadURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009b534
- (void)_processDataResponseWithURL:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009b23d
- (id)_dataTaskWithURL:(id)arg1 additionalHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009b0b9
- (void)_fetchDataAtURL:(id)arg1 additionalHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009ae43
- (void)_fetchMDMDataAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ad5f
- (id)_makeSession;	// IMP=0x001000000009acf0
- (void)downloadResponseDataAtURL:(id)arg1 downloadURL:(id)arg2 extensionToken:(id)arg3 useDDM:(_Bool)arg4 additionalHeaders:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000009a730
- (void)downloadDataAtURL:(id)arg1 downloadURL:(id)arg2 extensionToken:(id)arg3 useDDM:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009a3ac
- (void)fetchResponseDataAtURL:(id)arg1 useDDM:(_Bool)arg2 additionalHeaders:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009a1b4
- (void)fetchDataAtURL:(id)arg1 useDDM:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a0ce

@end

