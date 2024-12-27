//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDelegationNetServiceTXTRecord, NSArray, NSMutableArray, NSNetService, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDelegationProviderNetService : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_netServiceStreamResolutionQueue;	// 24 = 0x18
    NSMutableArray *_resolutionCompletionHandlers;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    ICDelegationNetServiceTXTRecord *_txtRecord;	// 48 = 0x30
    NSNetService *_netService;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001da7c7
@property(readonly, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (void)_updateTXTRecordProperties;	// IMP=0x00000000001da650
- (void)_setState:(long long)arg1;	// IMP=0x00000000001da501
- (void)_resolveWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001da427
@property(readonly, nonatomic) long long securityMode;
@property(readonly, copy, nonatomic) NSString *deviceName;
@property(readonly, copy, nonatomic) NSArray *delegationAccountUUIDs;
- (void)getResolvedStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001da0f7
- (void)netService:(id)arg1 didNotResolve:(id)arg2;	// IMP=0x00000000001da000
- (void)netServiceDidResolveAddress:(id)arg1;	// IMP=0x00000000001d9f32
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;	// IMP=0x00000000001d9e64
- (void)dealloc;	// IMP=0x00000000001d9e20
- (id)initWithNetService:(id)arg1;	// IMP=0x00000000001d9cf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

