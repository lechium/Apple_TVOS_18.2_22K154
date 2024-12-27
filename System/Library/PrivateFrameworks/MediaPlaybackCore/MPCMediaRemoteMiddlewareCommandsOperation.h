//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCFuture, MPCMediaRemoteMiddleware, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation
{
    CDUnknownBlockType _invalidationHandler;	// 8 = 0x8
    NSArray *_invalidationObservers;	// 16 = 0x10
    MPCMediaRemoteMiddleware *_middleware;	// 24 = 0x18
    MPCFuture *_supportedCommandsFuture;	// 32 = 0x20
    MPCFuture *_lastSectionContentItemFuture;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000212207
@property(retain, nonatomic) MPCFuture *lastSectionContentItemFuture; // @synthesize lastSectionContentItemFuture=_lastSectionContentItemFuture;
@property(retain, nonatomic) MPCFuture *supportedCommandsFuture; // @synthesize supportedCommandsFuture=_supportedCommandsFuture;
@property(retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (id)timeoutDescription;	// IMP=0x00000000002120d2
- (void)execute;	// IMP=0x0000000000211db5
- (id)initWithMiddleware:(id)arg1;	// IMP=0x0000000000211d47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

