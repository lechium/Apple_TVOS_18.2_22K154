//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Osprey/OspreyChannel.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface SNOspreyChannel : OspreyChannel
{
    MISSING_TYPE *connectionConfiguration;	// 8 = 0x8
    MISSING_TYPE *ospreyClientStreamingContext;	// 528 = 0x210
    MISSING_TYPE *ospreyRequestBuilder;	// 536 = 0x218
    MISSING_TYPE *ospreyConnectionMetrics;	// 552 = 0x228
    MISSING_TYPE *connectionMetrics;	// 568 = 0x238
    MISSING_TYPE *lock;	// 2008 = 0x7d8
    MISSING_TYPE *connectionIdentifier;	// 2016 = 0x7e0
    MISSING_TYPE *configuration;	// 2032 = 0x7f0
}

- (void).cxx_destruct;	// IMP=0x000000000002061a
- (id)init;	// IMP=0x00000000000205d9
- (id)initWithURL:(id)arg1 configuration:(id)arg2 useCache:(_Bool)arg3;	// IMP=0x000000000002045b
- (id)initWithURL:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000002028d
- (id)bidirectionalStreamingRequestWithMethodName:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 streamingResponseHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001ff45
@property(nonatomic, readonly) NSString *description;

@end

