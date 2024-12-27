//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSURLRequestDecoration : NSObject
{
}

+ (id)addPaymentHardwareStatusToRequest:(id)arg1;	// IMP=0x00800000005024db
+ (id)_addGUIDParameterToRequest:(id)arg1 fromPromise:(id)arg2 shouldPreserveEncoding:(_Bool)arg3;	// IMP=0x0080000000502001
+ (_Bool)_shouldSendGUIDForRequest:(id)arg1 patterns:(id)arg2 schemes:(id)arg3;	// IMP=0x0080000000501d4b
+ (id)addStoreFrontHeaderToRequest:(id)arg1 forAccount:(id)arg2 mediaType:(id)arg3 bag:(id)arg4;	// IMP=0x00800000005016c1
+ (id)addGUIDParameterToRequest:(id)arg1 bag:(id)arg2 preservingQueryEncoding:(_Bool)arg3;	// IMP=0x0080000000501082
+ (id)addTreatmentHeadersToRequest:(id)arg1 forTreatmentNamespace:(id)arg2;	// IMP=0x00800000004ffd91
+ (id)addAnisetteHeadersToRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;	// IMP=0x00800000004ffc85
+ (id)addFPDIHeadersToRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 retryCount:(long long)arg4 fairPlayDeviceIdentity:(id)arg5 fpdiNetworkProvider:(id)arg6;	// IMP=0x00800000004ff69f
+ (id)addAbsintheHeadersToRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 shouldUseRemoteSigningIfAvailable:(_Bool)arg4;	// IMP=0x00800000004ff2e4
+ (id)addMescalHeaderToRequest:(id)arg1 type:(long long)arg2 bag:(id)arg3 logKey:(id)arg4;	// IMP=0x00800000004fec9b

@end

