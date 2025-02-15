//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPhoneNumberValidationStateMachine, IDSServer, IDSUserStore, NSString;
@protocol IDSPhoneUserRegistryDeviceSupport, OS_dispatch_queue;

@interface IDSPhoneUserRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSUserStore *_userStore;	// 16 = 0x10
    IDSServer *_server;	// 24 = 0x18
    IDSPhoneNumberValidationStateMachine *_phoneNumberValidator;	// 32 = 0x20
    id <IDSPhoneUserRegistryDeviceSupport> _deviceSupport;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000048b6b5
@property(readonly, nonatomic) id <IDSPhoneUserRegistryDeviceSupport> deviceSupport; // @synthesize deviceSupport=_deviceSupport;
@property(readonly, nonatomic) IDSPhoneNumberValidationStateMachine *phoneNumberValidator; // @synthesize phoneNumberValidator=_phoneNumberValidator;
@property(readonly, nonatomic) IDSServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)requestUserConsentToValidatePhoneNumberForCTPNR:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000048b673
- (id)authenticatePhoneUser;	// IMP=0x001000000048b66b
- (id)localPhoneAuthenticationCertificates;	// IMP=0x001000000048afbf
- (id)phoneAuthenticationCertificateSigningRequestForUser:(id)arg1;	// IMP=0x001000000048aef4
- (struct __SecKey *)phoneAuthenticationCertificatePrivateKey;	// IMP=0x001000000048ae79
- (struct __SecKey *)phoneAuthenticationCertificatePublicKey;	// IMP=0x001000000048adfe
- (id)initWithQueue:(id)arg1 userStore:(id)arg2 server:(id)arg3 phoneNumberValidator:(id)arg4 deviceSupport:(id)arg5;	// IMP=0x001000000048acf7
- (id)initWithQueue:(id)arg1 userStore:(id)arg2 deviceSupport:(id)arg3;	// IMP=0x001000000048ac36
- (id)initWithQueue:(id)arg1 userStore:(id)arg2;	// IMP=0x001000000048ab6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

