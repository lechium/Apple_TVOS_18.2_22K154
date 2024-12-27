//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPCPlayerResponseSection, NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerInsertItemsCommand
{
    _Bool _supportsCreateStation;	// 8 = 0x8
    NSArray *_devices;	// 16 = 0x10
    NSSet *_supportedInsertionPositions;	// 24 = 0x18
    NSSet *_supportedQueueTypes;	// 32 = 0x20
    NSSet *_supportedCustomDataQueueIdentifiers;	// 40 = 0x28
    MPCPlayerResponseSection *_lastSection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000027b936
@property(retain, nonatomic) MPCPlayerResponseSection *lastSection; // @synthesize lastSection=_lastSection;
@property(retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers; // @synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers;
@property(retain, nonatomic) NSSet *supportedQueueTypes; // @synthesize supportedQueueTypes=_supportedQueueTypes;
@property(retain, nonatomic) NSSet *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
@property(nonatomic) _Bool supportsCreateStation; // @synthesize supportsCreateStation=_supportsCreateStation;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (_Bool)_isSupportedPlaybackIntent:(id)arg1 forRemotePlayer:(_Bool)arg2 atInsertionPosition:(int)arg3;	// IMP=0x000000000027b513
- (id)_createRadioStationCommandRequest;	// IMP=0x000000000027b35e
- (id)_insertWithOptions:(id)arg1;	// IMP=0x000000000027b137
- (id)insertWithPlaybackIntent:(id)arg1;	// IMP=0x000000000027ae73
@property(readonly) MPCPlayerResponseSection *section;
- (id)insertAfterLastSection;	// IMP=0x000000000027ad2b
- (id)insertAtEndOfUpNextWithPlaybackIntent:(id)arg1;	// IMP=0x000000000027aaa0
- (id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg1;	// IMP=0x000000000027a946
- (id)insertPlaybackIntent:(id)arg1 afterItem:(id)arg2;	// IMP=0x000000000027a726
- (id)insertAfterPlayingItemWithPlaybackIntent:(id)arg1;	// IMP=0x000000000027a32f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

