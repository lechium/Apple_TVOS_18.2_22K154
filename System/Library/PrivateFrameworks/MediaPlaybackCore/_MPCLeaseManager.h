//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _MPCLeaseManager : NSObject
{
    MPCPlaybackEngine *_playbackEngine;	// 8 = 0x8
    NSMutableSet *_leaseEndIgnoreReasons;	// 16 = 0x10
    NSMutableDictionary *_prepareCompletions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002f072d
@property(retain, nonatomic) NSMutableDictionary *prepareCompletions; // @synthesize prepareCompletions=_prepareCompletions;
@property(retain, nonatomic) NSMutableSet *leaseEndIgnoreReasons; // @synthesize leaseEndIgnoreReasons=_leaseEndIgnoreReasons;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_updateStateForPlaybackPrevention;	// IMP=0x00000000002f03eb
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1;	// IMP=0x00000000002f03d9
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;	// IMP=0x00000000002f0318
- (void)setCanStealLeaseIfNeeded;	// IMP=0x00000000002f0246
- (void)prepareForCurrentItemPlayback;	// IMP=0x00000000002f0234
- (void)endIgnoringLeaseEndEventsForReason:(id)arg1;	// IMP=0x00000000002f01e9
- (void)beginIgnoringLeaseEndEventsForReason:(id)arg1;	// IMP=0x00000000002f01d3
- (void)prepareForPlaybackWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002efd0b
- (void)getHasPreparedLeaseForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002efbc5
- (void)dealloc;	// IMP=0x00000000002efb50
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000002efa44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

