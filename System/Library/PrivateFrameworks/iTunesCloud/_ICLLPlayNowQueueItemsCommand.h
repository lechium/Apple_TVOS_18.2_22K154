//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _ICLLRadioSource;

__attribute__((visibility("hidden")))
@interface _ICLLPlayNowQueueItemsCommand : PBCodable
{
    NSMutableArray *_items;	// 8 = 0x8
    int _position;	// 16 = 0x10
    NSString *_preferredPlayItemId;	// 24 = 0x18
    NSString *_queueContext;	// 32 = 0x20
    _ICLLRadioSource *_radioSource;	// 40 = 0x28
    int _revision;	// 48 = 0x30
    CDStruct_bf543796 _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000008844
- (unsigned long long)hash;	// IMP=0x0000000000008776
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008608
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008395
- (void)writeTo:(id)arg1;	// IMP=0x00000000000081b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000081a8
- (id)dictionaryRepresentation;	// IMP=0x0000000000007e16
- (id)description;	// IMP=0x0000000000007d67

@end

