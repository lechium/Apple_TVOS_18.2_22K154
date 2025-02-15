//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSCache, NSString, NSURL, NSURLSessionDataTask, UIImage;

__attribute__((visibility("hidden")))
@interface MKPlaceCollectionImageDownloadOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    UIImage *_downloadedImage;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSString *_cacheId;	// 32 = 0x20
    NSURLSessionDataTask *_downloadTask;	// 40 = 0x28
    NSCache *_downloadCache;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000e605d
@property(nonatomic) __weak NSCache *downloadCache; // @synthesize downloadCache=_downloadCache;
@property(retain, nonatomic) NSURLSessionDataTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSString *cacheId; // @synthesize cacheId=_cacheId;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIImage *downloadedImage; // @synthesize downloadedImage=_downloadedImage;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool executing; // @synthesize executing=_executing;
- (void)cancel;	// IMP=0x00000000000e5eee
- (_Bool)isFinished;	// IMP=0x00000000000e5ede
- (_Bool)isExecuting;	// IMP=0x00000000000e5ece
- (void)markOperationAsComplete;	// IMP=0x00000000000e5d96
- (void)main;	// IMP=0x00000000000e55c4
- (void)start;	// IMP=0x00000000000e5516
- (id)initWithUrl:(id)arg1 downloadCache:(id)arg2 cacheId:(id)arg3;	// IMP=0x00000000000e5424

@end

