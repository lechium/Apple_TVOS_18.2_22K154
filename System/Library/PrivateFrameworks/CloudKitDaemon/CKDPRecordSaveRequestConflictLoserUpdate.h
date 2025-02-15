//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable
{
    NSMutableArray *_conflictLoserEtags;	// 8 = 0x8
}

+ (Class)conflictLoserEtagsType;	// IMP=0x001000000033ce28
- (void).cxx_destruct;	// IMP=0x000000000033d682
@property(retain, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000033d524
- (unsigned long long)hash;	// IMP=0x000000000033d507
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033d477
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033d2b3
- (void)copyTo:(id)arg1;	// IMP=0x000000000033d1ee
- (void)writeTo:(id)arg1;	// IMP=0x000000000033d0b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000033d0ab
- (id)dictionaryRepresentation;	// IMP=0x000000000033cee8
- (id)description;	// IMP=0x000000000033ce39
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000033ce0b
- (unsigned long long)conflictLoserEtagsCount;	// IMP=0x000000000033cdee
- (void)addConflictLoserEtags:(id)arg1;	// IMP=0x000000000033cd84
- (void)clearConflictLoserEtags;	// IMP=0x000000000033cd67

@end

