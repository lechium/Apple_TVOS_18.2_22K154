//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface XDCInstallResponse : PBCodable
{
    int _error;	// 8 = 0x8
    NSMutableArray *_externalIDStrings;	// 16 = 0x10
    struct {
        unsigned int error:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000df924
- (unsigned long long)hash;	// IMP=0x00100000000df8d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000df817
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000df64e
- (void)writeTo:(id)arg1;	// IMP=0x00100000000df4e7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000df2f5
- (id)dictionaryRepresentation;	// IMP=0x00100000000df234
- (id)description;	// IMP=0x00100000000df185

@end

