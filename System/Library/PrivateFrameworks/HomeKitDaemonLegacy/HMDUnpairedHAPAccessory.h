//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDUnpairedHAPAccessory
{
    NSMutableArray *_accessoryServers;	// 24 = 0x18
    long long _certificationStatus;	// 32 = 0x20
    NSData *_setupHash;	// 40 = 0x28
    long long _linkType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000009f0ee4
@property(readonly, nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
- (long long)associationOptions;	// IMP=0x00000000009f0d2c
- (_Bool)requiresThreadRouter;	// IMP=0x00000000009f0bee
- (id)serialNumber;	// IMP=0x00000000009f09ef
- (id)productID;	// IMP=0x00000000009f086a
- (id)vendorID;	// IMP=0x00000000009f06e5
- (id)commissioningID;	// IMP=0x00000000009f0560
- (id)nodeID;	// IMP=0x00000000009f03db
- (id)rootPublicKey;	// IMP=0x00000000009f0256
- (_Bool)isKnownToSystemCommissioner;	// IMP=0x00000000009f0118
- (_Bool)supportsCHIP;	// IMP=0x00000000009effd8
- (_Bool)hasIPLink;	// IMP=0x00000000009efdca
- (_Bool)hasBTLELink;	// IMP=0x00000000009efc8a
@property(readonly, nonatomic) unsigned long long transportTypes;
- (id)preferredAccessoryServer;	// IMP=0x00000000009ef82d
- (void)removeAccessoryServer:(id)arg1;	// IMP=0x00000000009ef63d
- (void)addAccessoryServer:(id)arg1;	// IMP=0x00000000009ef3dd
@property(readonly, copy) NSArray *accessoryServers;
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000009ef16e
- (_Bool)isReachable;	// IMP=0x00000000009ef126
- (id)dumpDescription;	// IMP=0x00000000009eed5b
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;	// IMP=0x00000000009eec9f
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;	// IMP=0x00000000009eec1a
- (id)initWithAccessoryServer:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000009eea8c

@end

