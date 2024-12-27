//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _ICLLQueueQuery;

__attribute__((visibility("hidden")))
@interface _ICLLRemoveQueueItemAction : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
    _ICLLQueueQuery *_queueQuery;	// 16 = 0x10
    int _removeType;	// 24 = 0x18
    NSMutableArray *_removedItemIds;	// 32 = 0x20
    int _revision;	// 40 = 0x28
    CDStruct_c634eefe _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000006e619
- (unsigned long long)hash;	// IMP=0x000000000006e54f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e40b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006e1d4
- (void)writeTo:(id)arg1;	// IMP=0x000000000006e013
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006e006
- (id)dictionaryRepresentation;	// IMP=0x000000000006de75
- (id)description;	// IMP=0x000000000006ddc6

@end

