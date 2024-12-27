//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class HMDRemoteEventRouterProtoChangeRegistrationsMessage, HMDRemoteEventRouterProtoConnectMessage, HMDRemoteEventRouterProtoDisconnectMessage, HMDRemoteEventRouterProtoFetchEventsMessage, HMDRemoteEventRouterProtoKeepAliveMessage, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoMessage : PBCodable
{
    HMDRemoteEventRouterProtoChangeRegistrationsMessage *_changeRegistrations;	// 8 = 0x8
    HMDRemoteEventRouterProtoConnectMessage *_connect;	// 16 = 0x10
    HMDRemoteEventRouterProtoDisconnectMessage *_disconnect;	// 24 = 0x18
    HMDRemoteEventRouterProtoFetchEventsMessage *_fetchEvents;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    HMDRemoteEventRouterProtoKeepAliveMessage *_keepAlive;	// 48 = 0x30
    int _request;	// 56 = 0x38
    struct {
        unsigned int request:1;
    } _has;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000b54094
@property(retain, nonatomic) HMDRemoteEventRouterProtoFetchEventsMessage *fetchEvents; // @synthesize fetchEvents=_fetchEvents;
@property(retain, nonatomic) HMDRemoteEventRouterProtoDisconnectMessage *disconnect; // @synthesize disconnect=_disconnect;
@property(retain, nonatomic) HMDRemoteEventRouterProtoKeepAliveMessage *keepAlive; // @synthesize keepAlive=_keepAlive;
@property(retain, nonatomic) HMDRemoteEventRouterProtoChangeRegistrationsMessage *changeRegistrations; // @synthesize changeRegistrations=_changeRegistrations;
@property(retain, nonatomic) HMDRemoteEventRouterProtoConnectMessage *connect; // @synthesize connect=_connect;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b53ea9
- (unsigned long long)hash;	// IMP=0x0000000000b53dbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b53c25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b53acc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b539c9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b538f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b534ad
- (id)dictionaryRepresentation;	// IMP=0x0000000000b53256
- (id)description;	// IMP=0x0000000000b531a7
- (void)clearOneofValuesForRequest;	// IMP=0x0000000000b53111
- (int)StringAsRequest:(id)arg1;	// IMP=0x0000000000b5301f
- (id)requestAsString:(int)arg1;	// IMP=0x0000000000b52fd7
@property(nonatomic) _Bool hasRequest;
@property(nonatomic) int request; // @synthesize request=_request;
@property(readonly, nonatomic) _Bool hasFetchEvents;
@property(readonly, nonatomic) _Bool hasDisconnect;
@property(readonly, nonatomic) _Bool hasKeepAlive;
@property(readonly, nonatomic) _Bool hasChangeRegistrations;
@property(readonly, nonatomic) _Bool hasConnect;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

