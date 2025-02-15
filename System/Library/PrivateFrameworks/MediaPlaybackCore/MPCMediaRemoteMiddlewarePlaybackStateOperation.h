//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCFuture, MPCMediaRemoteMiddleware, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation
{
    CDUnknownBlockType _invalidationHandler;	// 8 = 0x8
    NSArray *_invalidationObservers;	// 16 = 0x10
    MPCMediaRemoteMiddleware *_middleware;	// 24 = 0x18
    MPCFuture *_playbackStateFuture;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001e3087
@property(retain, nonatomic) MPCFuture *playbackStateFuture; // @synthesize playbackStateFuture=_playbackStateFuture;
@property(retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (id)timeoutDescription;	// IMP=0x00000000001e2f9e
- (void)execute;	// IMP=0x00000000001e2cbc
- (id)initWithMiddleware:(id)arg1;	// IMP=0x00000000001e2c4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

