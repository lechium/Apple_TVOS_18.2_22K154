//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmLowLatencyContinuousTier
{
    double _previousRateControlTime;	// 5264 = 0x1490
    double _bandwidthWall;	// 5272 = 0x1498
    int _bandwidthWallConfidence;	// 5280 = 0x14a0
    double _speedFactor;	// 5288 = 0x14a8
}

- (_Bool)setUpVTable;	// IMP=0x00000000003cceb2
- (void)dealloc;	// IMP=0x00000000003cce60
- (id)init;	// IMP=0x00000000003ccdf8

@end

