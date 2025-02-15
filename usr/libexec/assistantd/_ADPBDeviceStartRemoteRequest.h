//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class AFRequestInfo, NSData, NSString;

@interface _ADPBDeviceStartRemoteRequest : PBRequest
{
    NSData *_handoffData;	// 8 = 0x8
    NSString *_handoffNotification;	// 16 = 0x10
    NSString *_handoffOriginDeviceName;	// 24 = 0x18
    NSString *_handoffUrlString;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    _Bool _requiresUserInteraction;	// 48 = 0x30
    struct {
        unsigned int requiresUserInteraction:1;
    } _has;	// 52 = 0x34
}

+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x00200000000f00b2
- (void).cxx_destruct;	// IMP=0x0020000000246b23
@property(retain, nonatomic) NSString *handoffOriginDeviceName; // @synthesize handoffOriginDeviceName=_handoffOriginDeviceName;
@property(retain, nonatomic) NSString *handoffNotification; // @synthesize handoffNotification=_handoffNotification;
@property(nonatomic) _Bool requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;
@property(retain, nonatomic) NSString *handoffUrlString; // @synthesize handoffUrlString=_handoffUrlString;
@property(retain, nonatomic) NSData *handoffData; // @synthesize handoffData=_handoffData;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000246977
- (unsigned long long)hash;	// IMP=0x00100000002468b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000024673a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002465fe
- (void)copyTo:(id)arg1;	// IMP=0x001000000024651b
- (void)writeTo:(id)arg1;	// IMP=0x0010000000246440
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002461bf
- (id)dictionaryRepresentation;	// IMP=0x0010000000246062
- (id)description;	// IMP=0x0010000000245fb3
@property(readonly, nonatomic) _Bool hasHandoffOriginDeviceName;
@property(readonly, nonatomic) _Bool hasHandoffNotification;
@property(nonatomic) _Bool hasRequiresUserInteraction;
@property(readonly, nonatomic) _Bool hasHandoffUrlString;
@property(readonly, nonatomic) _Bool hasHandoffData;
@property(readonly, nonatomic) _Bool hasText;
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011332b
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a7db1
@property(copy, nonatomic, setter=_ad_setRequestInfo:) AFRequestInfo *_ad_requestInfo;

@end

