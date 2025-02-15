//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface MCInteractionClient : NSObject
{
    NSString *_defaultStatus;	// 8 = 0x8
    NSString *_lastStatus;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001a12f
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSString *defaultStatus;
- (void)waitForEnrollmentToFinishWithPersonaID:(id)arg1;	// IMP=0x001000000001a0aa
- (_Bool)requestCurrentPasscodeOutPasscode:(id *)arg1;	// IMP=0x0010000000019cf5
- (_Bool)didBeginInstallingNextProfileData:(id)arg1;	// IMP=0x0010000000019b4b
- (_Bool)didUpdateStatus:(id)arg1;	// IMP=0x001000000001997c
- (_Bool)didFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x00100000000196c8
- (_Bool)showUserWarnings:(id)arg1 outResult:(_Bool *)arg2;	// IMP=0x0010000000019278
- (void)_receivedUserInput:(id)arg1 preflight:(_Bool)arg2 payloadIndex:(unsigned long long)arg3 delegate:(id)arg4 semaphore:(id)arg5 error:(id)arg6 outResponses:(id)arg7;	// IMP=0x0010000000018e1c
- (void)requestManagedRestoreWithManagedAppleID:(id)arg1 personaID:(id)arg2;	// IMP=0x00100000000189c8
- (_Bool)requestMAIDSignIn:(id)arg1 personaID:(id)arg2 outError:(id *)arg3 isCancelled:(_Bool *)arg4;	// IMP=0x00100000000183ff
- (_Bool)requestUserInput:(id)arg1 delegate:(id)arg2 outResult:(id *)arg3;	// IMP=0x0010000000017f77
- (id)initWithXPCClientConnection:(id)arg1;	// IMP=0x0010000000017f0f

@end

