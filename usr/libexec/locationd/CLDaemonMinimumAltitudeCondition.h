//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLMinimumAltitudeCondition.h>

@class NSString;
@protocol CLIntersiloProxyDelegateProtocol;

@interface CLDaemonMinimumAltitudeCondition : CLMinimumAltitudeCondition
{
    id <CLIntersiloProxyDelegateProtocol> _barometerCalibrationProxy;	// 8 = 0x8
    _Bool valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid;
- (unsigned long long)diagnosticMaskIfNonFunctional;	// IMP=0x0010000000f18570
- (void)stopMonitoring;	// IMP=0x0010000000f183f3
- (void)startMonitoring;	// IMP=0x0010000000f18215
- (_Bool)isAuthorized;	// IMP=0x0000000000f181e5
- (void)dealloc;	// IMP=0x0010000000f180d0
- (id)initFromClientCondition:(id)arg1 clientKeyPath:(id)arg2 authorizationContext:(id)arg3 universe:(id)arg4 identifier:(id)arg5 callbackHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000f17f40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

