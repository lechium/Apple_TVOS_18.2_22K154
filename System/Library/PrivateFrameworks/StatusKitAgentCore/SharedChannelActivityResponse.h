//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ChannelActivityActivationResponse, ChannelActivityDeactivationResponse, ChannelActivityPollingResponse;

__attribute__((visibility("hidden")))
@interface SharedChannelActivityResponse : PBCodable
{
    ChannelActivityActivationResponse *_activationResponse;	// 8 = 0x8
    ChannelActivityDeactivationResponse *_deactivationResponse;	// 16 = 0x10
    ChannelActivityPollingResponse *_pollingResponse;	// 24 = 0x18
    int _response;	// 32 = 0x20
    struct {
        unsigned int response:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000085a34
@property(retain, nonatomic) ChannelActivityPollingResponse *pollingResponse; // @synthesize pollingResponse=_pollingResponse;
@property(retain, nonatomic) ChannelActivityDeactivationResponse *deactivationResponse; // @synthesize deactivationResponse=_deactivationResponse;
@property(retain, nonatomic) ChannelActivityActivationResponse *activationResponse; // @synthesize activationResponse=_activationResponse;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008591c
- (unsigned long long)hash;	// IMP=0x0000000000085885
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008576f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000085686
- (void)copyTo:(id)arg1;	// IMP=0x00000000000855e3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000085569
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008555c
- (id)dictionaryRepresentation;	// IMP=0x000000000008509d
- (id)description;	// IMP=0x0000000000084fee
- (void)clearOneofValuesForResponse;	// IMP=0x0000000000084f7c
- (int)StringAsResponse:(id)arg1;	// IMP=0x0000000000084ec8
- (id)responseAsString:(int)arg1;	// IMP=0x0000000000084e7f
@property(nonatomic) _Bool hasResponse;
@property(nonatomic) int response; // @synthesize response=_response;
@property(readonly, nonatomic) _Bool hasPollingResponse;
@property(readonly, nonatomic) _Bool hasDeactivationResponse;
@property(readonly, nonatomic) _Bool hasActivationResponse;

@end

