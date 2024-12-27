//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSSWifiNetworkState : NSObject
{
    float _signalStrength;	// 8 = 0x8
    NSString *_networkName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000072960
@property(readonly, nonatomic) float signalStrength; // @synthesize signalStrength=_signalStrength;
@property(readonly, copy, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000072570
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000072550
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000724a0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000072400
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000072340
- (id)succinctDescription;	// IMP=0x00100000000722d0
- (id)initWithNetworkName:(id)arg1 signalStrength:(float)arg2;	// IMP=0x0010000000071a80

// Remaining properties
@property(readonly) Class superclass;

@end

