//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GTReplayDecodeAB
{
    unsigned short _type;	// 8 = 0x8
    unsigned int _index;	// 12 = 0xc
    CDUnion_afa92939 _dispatchUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000673b
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) unsigned short type; // @synthesize type=_type;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006815
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006743

@end

