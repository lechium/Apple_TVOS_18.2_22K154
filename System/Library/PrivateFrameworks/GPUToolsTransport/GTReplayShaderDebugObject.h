//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GTReplayShaderDebugObject
{
    struct GTPoint3D _minThreadPositionInGrid;	// 40 = 0x28
    struct GTPoint3D _maxThreadPositionInGrid;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000007488
@property(nonatomic) struct GTPoint3D maxThreadPositionInGrid; // @synthesize maxThreadPositionInGrid=_maxThreadPositionInGrid;
@property(nonatomic) struct GTPoint3D minThreadPositionInGrid; // @synthesize minThreadPositionInGrid=_minThreadPositionInGrid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000755d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007490

@end

