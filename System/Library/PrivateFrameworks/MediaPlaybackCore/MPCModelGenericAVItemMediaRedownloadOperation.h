//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class ICMediaRedownloadRequest, ICStoreRequestContext, MPCModelGenericAVItemAssetLoadProperties, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemMediaRedownloadOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    ICMediaRedownloadRequest *_mediaDownloadRequest;	// 16 = 0x10
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;	// 24 = 0x18
    ICStoreRequestContext *_requestContext;	// 32 = 0x20
    CDUnknownBlockType _responseHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002c6857
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // @synthesize assetLoadProperties=_assetLoadProperties;
- (void)execute;	// IMP=0x00000000002c5dd9
- (void)cancel;	// IMP=0x00000000002c5cdb
- (id)init;	// IMP=0x00000000002c5c77

@end

