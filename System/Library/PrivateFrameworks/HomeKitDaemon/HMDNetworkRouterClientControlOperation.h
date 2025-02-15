//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNetworkRouterClientConfiguration, HMDNetworkRouterControlOperation, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientControlOperation : NSObject
{
    HMDNetworkRouterControlOperation *_operation;	// 8 = 0x8
    HMDNetworkRouterClientConfiguration *_configuration;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006d939b
- (void).cxx_destruct;	// IMP=0x00000000006d9373
@property(retain, nonatomic) HMDNetworkRouterClientConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HMDNetworkRouterControlOperation *operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006d9081
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006d8ff3
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000006d8d2a
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006d89f8
- (id)initWithOperation:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000006d895f
- (id)init;	// IMP=0x00000000006d8930

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

