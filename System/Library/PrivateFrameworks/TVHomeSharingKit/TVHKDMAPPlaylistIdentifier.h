//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVHKDMAPPlaylistIdentifier
{
    unsigned long long _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000032a1c
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000032e0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032c51
- (unsigned long long)hash;	// IMP=0x0000000000032b96
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032ae2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032a24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000329dc
- (id)initWithProtocol:(unsigned long long)arg1 type:(unsigned long long)arg2 nonPersistentID:(unsigned long long)arg3 persistentID:(unsigned long long)arg4;	// IMP=0x0000000000032992
- (id)initWithProtocol:(unsigned long long)arg1 nonPersistentID:(unsigned long long)arg2 persistentID:(unsigned long long)arg3;	// IMP=0x0000000000032923

@end

