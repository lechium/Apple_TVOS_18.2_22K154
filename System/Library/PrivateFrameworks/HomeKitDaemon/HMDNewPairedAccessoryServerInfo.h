//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPAccessoryServer, HMDAccessoryNetworkCredential, HMDAccessoryPairingEvent, HMDHome, NSUUID;
@protocol MKFAccessory;

__attribute__((visibility("hidden")))
@interface HMDNewPairedAccessoryServerInfo : NSObject
{
    HAPAccessoryServer *_server;	// 8 = 0x8
    NSUUID *_primaryAccessoryUUID;	// 16 = 0x10
    id <MKFAccessory> _hostAccessory;	// 24 = 0x18
    long long _certificationStatus;	// 32 = 0x20
    HMDAccessoryNetworkCredential *_networkCredential;	// 40 = 0x28
    HMDAccessoryPairingEvent *_pairingEvent;	// 48 = 0x30
    HMDHome *_home;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000bd839a
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMDAccessoryPairingEvent *pairingEvent; // @synthesize pairingEvent=_pairingEvent;
@property(readonly) HMDAccessoryNetworkCredential *networkCredential; // @synthesize networkCredential=_networkCredential;
@property(readonly) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(readonly) id <MKFAccessory> hostAccessory; // @synthesize hostAccessory=_hostAccessory;
@property(readonly) NSUUID *primaryAccessoryUUID; // @synthesize primaryAccessoryUUID=_primaryAccessoryUUID;
@property(readonly) HAPAccessoryServer *server; // @synthesize server=_server;
- (id)description;	// IMP=0x0000000000bd821e
- (id)initWithServer:(id)arg1 home:(id)arg2 primaryAccessoryUUID:(id)arg3 certificationStatus:(long long)arg4 hostAccessory:(id)arg5 networkCredential:(id)arg6 pairingEvent:(id)arg7;	// IMP=0x0000000000bd80f3

@end

