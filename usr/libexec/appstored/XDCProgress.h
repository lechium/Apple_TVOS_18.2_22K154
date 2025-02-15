//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface XDCProgress : PBCodable
{
    long long _completedUnitCount;	// 8 = 0x8
    long long _totalUnitCount;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000113767
- (unsigned long long)hash;	// IMP=0x0010000000113719
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000113667
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001135d1
- (void)writeTo:(id)arg1;	// IMP=0x001000000011355a
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000011354d
- (id)dictionaryRepresentation;	// IMP=0x00100000001131f8
- (id)description;	// IMP=0x0010000000113149

@end

