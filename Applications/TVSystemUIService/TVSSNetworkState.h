//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVSSWifiNetworkState;

@interface TVSSNetworkState : NSObject
{
    _Bool _internetAvailable;	// 8 = 0x8
    _Bool _vpnConfigured;	// 9 = 0x9
    _Bool _vpnActive;	// 10 = 0xa
    unsigned long long _activeInterfaceType;	// 16 = 0x10
    TVSSWifiNetworkState *_wifiState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000073890
@property(readonly, nonatomic, getter=isVPNActive) _Bool vpnActive; // @synthesize vpnActive=_vpnActive;
@property(readonly, nonatomic, getter=isVPNConfigured) _Bool vpnConfigured; // @synthesize vpnConfigured=_vpnConfigured;
@property(readonly, nonatomic) TVSSWifiNetworkState *wifiState; // @synthesize wifiState=_wifiState;
@property(readonly, nonatomic, getter=isInternetAvailable) _Bool internetAvailable; // @synthesize internetAvailable=_internetAvailable;
@property(readonly, nonatomic) unsigned long long activeInterfaceType; // @synthesize activeInterfaceType=_activeInterfaceType;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000073110
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000730f0
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000073010
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000072f70
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000072d90
- (id)succinctDescription;	// IMP=0x0010000000072d20
- (id)initWithActiveInterfaceType:(unsigned long long)arg1 internetAvailable:(_Bool)arg2 wifiState:(id)arg3 vpnConfigured:(_Bool)arg4 vpnActive:(_Bool)arg5;	// IMP=0x0010000000072990

// Remaining properties
@property(readonly) Class superclass;

@end

