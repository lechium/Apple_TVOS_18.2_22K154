//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface DCClientHandler : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000368c
- (void)appAttestationIsSupportedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003550
- (void)appAttestationAssert:(id)arg1 keyId:(id)arg2 clientDataHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003495
- (void)appAttestationAttestKey:(id)arg1 keyId:(id)arg2 clientDataHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000033da
- (void)appAttestationCreateKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000334a
- (id)_stringValueForEntitlement:(id)arg1;	// IMP=0x00100000000032e6
- (id)_generateAppIDFromCurrentConnection;	// IMP=0x0010000000003081
- (_Bool)_isSupported;	// IMP=0x001000000000303e
- (void)isSupportedDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002ff2
- (void)baaSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002ded
- (void)baaSignaturesForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002b6d
- (void)fetchOpaqueBlobWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000297a
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000002920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

