//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface MPPPersistentIDsPredicate : PBCodable
{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _persistentIDs;	// 8 = 0x8
    _Bool _shouldContain;	// 32 = 0x20
    struct {
        unsigned int shouldContain:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;
- (unsigned long long)hash;	// IMP=0x00000000002dfd0c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002dfc7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002dfbf9
- (void)copyTo:(id)arg1;	// IMP=0x00000000002dfb18
- (void)writeTo:(id)arg1;	// IMP=0x00000000002dfa7a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002dfa6d
- (id)dictionaryRepresentation;	// IMP=0x00000000002df985
- (id)description;	// IMP=0x00000000002df8d6
- (void)setPersistentIDs:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000002df8bf
- (long long)persistentIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002df7ee
- (void)addPersistentIDs:(long long)arg1;	// IMP=0x00000000002df7da
- (void)clearPersistentIDs;	// IMP=0x00000000002df7c9
@property(readonly, nonatomic) long long *persistentIDs;
@property(readonly, nonatomic) unsigned long long persistentIDsCount;
@property(nonatomic) _Bool hasShouldContain;
- (void)dealloc;	// IMP=0x00000000002df721

@end

