//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBInnerMessage : PBCodable
{
    unsigned int _counter;	// 8 = 0x8
    NSData *_debugInfo;	// 16 = 0x10
    NSData *_ktGossipData;	// 24 = 0x18
    NSData *_message;	// 32 = 0x20
    struct {
        unsigned int counter:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000020411
@property(retain, nonatomic) NSData *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(retain, nonatomic) NSData *ktGossipData; // @synthesize ktGossipData=_ktGossipData;
@property(nonatomic) unsigned int counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSData *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000202ef
- (unsigned long long)hash;	// IMP=0x0000000000020254
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020145
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002005c
- (void)copyTo:(id)arg1;	// IMP=0x000000000001ffbe
- (void)writeTo:(id)arg1;	// IMP=0x000000000001ff14
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001ff07
- (id)dictionaryRepresentation;	// IMP=0x000000000001fbc8
- (id)description;	// IMP=0x000000000001fb19
@property(readonly, nonatomic) _Bool hasDebugInfo;
@property(readonly, nonatomic) _Bool hasKtGossipData;
@property(nonatomic) _Bool hasCounter;
- (id)attributes;	// IMP=0x000000000000e9d9

@end

