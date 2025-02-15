//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFPairingIdentity, NSString;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedAirPlayAccessory
{
    HMFPairingIdentity *_pairingIdentity;	// 24 = 0x18
    NSString *_model;	// 32 = 0x20
    NSString *_manufacturer;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000004d9b91
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004d9b89
- (void).cxx_destruct;	// IMP=0x00000000004d8ede
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
- (id)logIdentifier;	// IMP=0x00000000004d8e82
- (void)associateToHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004d85f5
@property(readonly) _Bool supportsAssociation;
@property(copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004d82da
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004d81af
- (id)addTransactionForHome:(id)arg1;	// IMP=0x00000000004d7cd2
- (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;	// IMP=0x00000000004d7c51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

