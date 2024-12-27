//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, UIColor;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SiriUIURLSessionImageDownload : NSObject
{
    struct CGSize _fitToSize;	// 8 = 0x8
    NSMutableData *_downloadedData;	// 24 = 0x18
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    id _client;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_renderTimer;	// 56 = 0x38
    _Bool _newDataAvailableToRender;	// 64 = 0x40
    struct CGImageSource *_imageSource;	// 72 = 0x48
    unsigned long long _lastUpdatedLength;	// 80 = 0x50
    _Bool _finished;	// 88 = 0x58
    _Bool _hasSentFinished;	// 89 = 0x59
    UIColor *_backgroundFillColor;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000000b577
- (void)finishedFromURL:(id)arg1 error:(id)arg2;	// IMP=0x000000000000b422
- (void)appendDownloadedData:(id)arg1 fromURL:(id)arg2;	// IMP=0x000000000000b0dc
- (void)_updateImageFromURL:(id)arg1 error:(id)arg2;	// IMP=0x000000000000a77e
- (void)dealloc;	// IMP=0x000000000000a737
- (id)initWithFitToSize:(struct CGSize)arg1 progressHandler:(CDUnknownBlockType)arg2 incremental:(_Bool)arg3 client:(id)arg4 fillColor:(id)arg5;	// IMP=0x000000000000a5cd

@end

