//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryNetworkCredential : NSObject
{
    NSUUID *_networkRouterUUID;	// 8 = 0x8
    NSNumber *_clientIdentifier;	// 16 = 0x10
    NSData *_wiFiPSK;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b8311b
@property(readonly) NSData *wiFiPSK; // @synthesize wiFiPSK=_wiFiPSK;
@property(readonly) NSNumber *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly) NSUUID *networkRouterUUID; // @synthesize networkRouterUUID=_networkRouterUUID;
- (id)initWithNetworkRouterUUID:(id)arg1 clientIdentifier:(id)arg2 wiFiPSK:(id)arg3;	// IMP=0x0000000000b83027

@end

