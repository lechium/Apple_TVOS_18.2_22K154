//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _ICLLParticipantQuery : PBCodable
{
    NSMutableArray *_participants;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010ec04
- (unsigned long long)hash;	// IMP=0x000000000010ebe7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010eb57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010e9b9
- (void)writeTo:(id)arg1;	// IMP=0x000000000010e883
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010e876
- (id)dictionaryRepresentation;	// IMP=0x000000000010e646
- (id)description;	// IMP=0x000000000010e597

@end

