//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTDeviceCapabilities;

@interface GTDeviceCapabilitiesXPCDispatcher
{
    id <GTDeviceCapabilities> _service;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000076f5
- (void)deviceCompatibilityCapabilitiesWithHeapDescriptors_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000000761f
- (void)inferiorEnvironment_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000007549
- (void)gpuToolsVersionQuery:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000000748c
- (void)daemonDeviceCapabilities:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00100000000073cf
- (id)initWithService:(id)arg1 properties:(id)arg2;	// IMP=0x001000000000732f

@end

