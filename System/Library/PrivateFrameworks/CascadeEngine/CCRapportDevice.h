//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, RPCompanionLinkClient, RPCompanionLinkDevice;

__attribute__((visibility("hidden")))
@interface CCRapportDevice : NSObject
{
    NSString *_rapportIdentifier;	// 8 = 0x8
    NSString *_ccDeviceIdentifier;	// 16 = 0x10
    RPCompanionLinkDevice *_device;	// 24 = 0x18
    RPCompanionLinkClient *_client;	// 32 = 0x20
    NSMutableArray *_requestQueue;	// 40 = 0x28
    unsigned long long _linkState;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000006e84
- (void).cxx_destruct;	// IMP=0x0000000000007013
@property(nonatomic) unsigned long long linkState; // @synthesize linkState=_linkState;
@property(retain, nonatomic) NSMutableArray *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property(retain, nonatomic) RPCompanionLinkDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *ccDeviceIdentifier; // @synthesize ccDeviceIdentifier=_ccDeviceIdentifier;
@property(readonly, nonatomic) NSString *rapportIdentifier; // @synthesize rapportIdentifier=_rapportIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006f19
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006e8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006e65
- (id)description;	// IMP=0x0000000000006d4d
- (unsigned long long)hash;	// IMP=0x0000000000006d09
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006c59
- (void)handleInvalidationWithError:(id)arg1;	// IMP=0x00000000000069b4
- (void)invalidateClientWithError:(id)arg1;	// IMP=0x0000000000006900
@property(readonly, nonatomic) long long platform;
@property(readonly, nonatomic) NSArray *serviceTypes;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *shortenedRapportIdentifier;
- (id)initWithRPCompanionLinkDevice:(id)arg1;	// IMP=0x00000000000066cb

@end

