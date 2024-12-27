//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSAlwaysOnTimeline.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BLSAlwaysOnExplicitEntriesTimeline : BLSAlwaysOnTimeline
{
    NSArray *_explicitEntries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015427
- (id)unconfiguredEntriesForDateInterval:(id)arg1 previousEntry:(id)arg2;	// IMP=0x0000000000014fc8
- (long long)requestedFidelityForStartEntryInDateInterval:(id)arg1 withPreviousEntry:(id)arg2;	// IMP=0x0000000000014c7c
- (id)description;	// IMP=0x0000000000014973
- (id)initWithEntries:(id)arg1 identifier:(id)arg2 configure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014865

@end

