//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class AuthCredential, ChannelPublishPayload;

__attribute__((visibility("hidden")))
@interface SharedChannelPublishRequest : PBRequest
{
    AuthCredential *_authCredential;	// 8 = 0x8
    ChannelPublishPayload *_channelPublishPayload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000055e0e
@property(retain, nonatomic) ChannelPublishPayload *channelPublishPayload; // @synthesize channelPublishPayload=_channelPublishPayload;
@property(retain, nonatomic) AuthCredential *authCredential; // @synthesize authCredential=_authCredential;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000055d35
- (unsigned long long)hash;	// IMP=0x0000000000055ce8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000055c30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055b92
- (void)copyTo:(id)arg1;	// IMP=0x0000000000055b2f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000055ad2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000055ac5
- (id)dictionaryRepresentation;	// IMP=0x0000000000055813
- (id)description;	// IMP=0x0000000000055764
@property(readonly, nonatomic) _Bool hasChannelPublishPayload;
@property(readonly, nonatomic) _Bool hasAuthCredential;

@end

