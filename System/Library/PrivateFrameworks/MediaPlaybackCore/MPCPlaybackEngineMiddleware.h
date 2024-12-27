//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPCPlaybackEngineMiddleware : NSObject
{
    NSArray *_invalidationObservers;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002018c7
@property(retain, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)_stateDumpObject;	// IMP=0x000000000020173a
- (id)operationsForPlayerRequest:(id)arg1;	// IMP=0x000000000020167a
- (id)operationsForRequest:(id)arg1;	// IMP=0x000000000020160d
- (id)videoOutput:(id)arg1 chain:(id)arg2;	// IMP=0x0000000000201a82
- (id)playerVideoView:(id)arg1 chain:(id)arg2;	// IMP=0x00000000002019e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

