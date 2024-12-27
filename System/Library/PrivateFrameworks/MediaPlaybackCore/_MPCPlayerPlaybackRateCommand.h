//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerPlaybackRateCommand
{
    float _preferredPlaybackRate;	// 16 = 0x10
    NSArray *_supportedPlaybackRates;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000298a1a
@property(nonatomic) float preferredPlaybackRate; // @synthesize preferredPlaybackRate=_preferredPlaybackRate;
@property(copy, nonatomic) NSArray *supportedPlaybackRates; // @synthesize supportedPlaybackRates=_supportedPlaybackRates;
- (id)setPlaybackRate:(float)arg1;	// IMP=0x0000000000298754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

