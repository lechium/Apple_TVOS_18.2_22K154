//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLCurrentItemTransitionAction : PBCodable
{
    NSString *_previousItemId;	// 8 = 0x8
    NSString *_transitionItemId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c73e3
- (unsigned long long)hash;	// IMP=0x00000000001c7396
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c72de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c7240
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c71e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c71d6
- (id)dictionaryRepresentation;	// IMP=0x00000000001c7153
- (id)description;	// IMP=0x00000000001c70a4

@end

