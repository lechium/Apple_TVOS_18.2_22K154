//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICPBDGSFinishDelegationRequest : PBRequest
{
    NSMutableArray *_playerDelegateInfoTokens;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e05bc
- (unsigned long long)hash;	// IMP=0x00000000000e059f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e050f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e0371
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e023b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e022e
- (id)dictionaryRepresentation;	// IMP=0x00000000000dfffe
- (id)description;	// IMP=0x00000000000dff4f

@end

