//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFPairingIdentity, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDAirPlayAccessoryModel
{
}

+ (id)properties;	// IMP=0x001000000082c474
+ (Class)cd_entityClass;	// IMP=0x00100000007f716e
+ (id)cd_parentReferenceName;	// IMP=0x00100000007f7161

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *minimumUserPriviledge; // @dynamic minimumUserPriviledge;
@property(retain, nonatomic) HMFPairingIdentity *pairingIdentity; // @dynamic pairingIdentity;
@property(retain, nonatomic) NSString *password; // @dynamic password;
@property(readonly) Class superclass;

@end

