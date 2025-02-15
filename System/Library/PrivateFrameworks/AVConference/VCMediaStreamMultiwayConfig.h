//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaStreamMultiwayConfig : NSObject
{
    NSString *_sessionId;	// 8 = 0x8
    NSString *_participantId;	// 16 = 0x10
    unsigned long long _remoteIDSParticipantID;	// 24 = 0x18
    unsigned int _ssrc;	// 32 = 0x20
    unsigned int _maxNetworkBitrate;	// 36 = 0x24
    unsigned int _maxMediaBitrate;	// 40 = 0x28
    float _maxPacketsPerSecond;	// 44 = 0x2c
    unsigned short _idsStreamID;	// 48 = 0x30
    unsigned int _qualityIndex;	// 52 = 0x34
    unsigned int _maxIDSStreamIdCount;	// 56 = 0x38
    unsigned short _repairedStreamID;	// 60 = 0x3c
    unsigned int _repairedMaxNetworkBitrate;	// 64 = 0x40
    int _repairedFECLevel;	// 68 = 0x44
    _Bool _startOnDemand;	// 72 = 0x48
    _Bool _isOneToOne;	// 73 = 0x49
    _Bool _shouldIgnoreRTPHeaderExtensions;	// 74 = 0x4a
    unsigned int _streamGroupID;	// 76 = 0x4c
    unsigned short _v2StreamID;	// 80 = 0x50
    struct {
        unsigned int maxNetworkBitrate:1;
        unsigned int maxMediaBitrate:1;
        unsigned int maxPacketsPerSecond:1;
        unsigned int idsStreamID:1;
        unsigned int qualityIndex:1;
        unsigned int maxIDSStreamIdCount:1;
        unsigned int repairedStreamID:1;
        unsigned int repairedMaxNetworkBitrate:1;
        unsigned int v2StreamID:1;
    } _has;	// 84 = 0x54
    NSMutableDictionary *_txPayloadMap;	// 88 = 0x58
    NSMutableDictionary *_rxPayloadMap;	// 96 = 0x60
    unsigned int _negotiationProtocolMask;	// 104 = 0x68
}

@property(readonly, nonatomic) NSDictionary *txPayloadMap; // @synthesize txPayloadMap=_txPayloadMap;
@property(readonly, nonatomic) NSDictionary *rxPayloadMap; // @synthesize rxPayloadMap=_rxPayloadMap;
@property(nonatomic) unsigned short v2StreamID; // @synthesize v2StreamID=_v2StreamID;
@property(nonatomic) int repairedFECLevel; // @synthesize repairedFECLevel=_repairedFECLevel;
@property(nonatomic) unsigned int negotiationProtocolMask; // @synthesize negotiationProtocolMask=_negotiationProtocolMask;
@property(nonatomic) unsigned int streamGroupID; // @synthesize streamGroupID=_streamGroupID;
@property(nonatomic) _Bool shouldIgnoreRTPHeaderExtensions; // @synthesize shouldIgnoreRTPHeaderExtensions=_shouldIgnoreRTPHeaderExtensions;
@property(nonatomic) _Bool isOneToOne; // @synthesize isOneToOne=_isOneToOne;
@property(nonatomic) _Bool startOnDemand; // @synthesize startOnDemand=_startOnDemand;
@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned short repairedStreamID; // @synthesize repairedStreamID=_repairedStreamID;
@property(nonatomic) unsigned int maxIDSStreamIdCount; // @synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) unsigned short idsStreamID; // @synthesize idsStreamID=_idsStreamID;
@property(nonatomic) float maxPacketsPerSecond; // @synthesize maxPacketsPerSecond=_maxPacketsPerSecond;
@property(nonatomic) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
@property(nonatomic) unsigned long long remoteIDSParticipantID; // @synthesize remoteIDSParticipantID=_remoteIDSParticipantID;
@property(retain, nonatomic) NSString *participantId; // @synthesize participantId=_participantId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)addTxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;	// IMP=0x0000000000442fc7
- (void)addRxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;	// IMP=0x0000000000442f5e
@property(readonly, nonatomic) _Bool hasRepairedMaxNetworkBitrate;
@property(readonly, nonatomic) _Bool hasRepairedStreamID;
@property(readonly, nonatomic) _Bool hasMaxIDSStreamIdCount;
@property(readonly, nonatomic) _Bool hasQualityIndex;
@property(readonly, nonatomic) _Bool hasV2StreamID;
@property(readonly, nonatomic) _Bool hasIdsStreamID;
@property(readonly, nonatomic) _Bool hasMaxPacketsPerSecond;
@property(readonly, nonatomic) _Bool hasMaxMediaBitrate;
@property(readonly, nonatomic) _Bool hasMaxNetworkBitrate;
@property(readonly, nonatomic) NSArray *streamIds;
- (void)dealloc;	// IMP=0x0000000000442d3b
- (id)init;	// IMP=0x0000000000442cbc

@end

