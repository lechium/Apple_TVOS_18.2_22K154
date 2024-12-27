//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKClientProxy, GKDataTransport, GKPlayerCredential, GKPlayerInternal;

@interface GKService : NSObject
{
    GKClientProxy *_clientProxy;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    GKPlayerInternal *_localPlayer;	// 24 = 0x18
    GKPlayerCredential *_credential;	// 32 = 0x20
}

+ (Class)interfaceClass;	// IMP=0x0040000000003f4c
+ (unsigned long long)requiredEntitlements;	// IMP=0x0010000000003e33
+ (id)serviceForBundleID:(id)arg1 localPlayer:(id)arg2;	// IMP=0x0010000000003da1
+ (id)serviceFromService:(id)arg1;	// IMP=0x0010000000003caa
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3;	// IMP=0x0010000000003c13
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 credential:(id)arg3;	// IMP=0x0010000000003b4c
- (void).cxx_destruct;	// IMP=0x0020000000004478
@property(retain) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain) GKPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(retain) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (id)transactionGroupWithName:(id)arg1 forPlayerID:(id)arg2;	// IMP=0x0010000000004350
- (id)transactionGroupWithName:(id)arg1;	// IMP=0x00100000000042ac
- (id)transportBypassingMultiUser;	// IMP=0x00100000000041c5
- (id)transactionGroupBypassingMultiUser;	// IMP=0x001000000000407f
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x001000000000406d
- (_Bool)requiresAuthentication;	// IMP=0x0010000000004065
- (id)initWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x001000000000387f
- (id)initWithoutCredentialWithTransport:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000000037ec
- (void)_coreInitWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x0010000000003641

@end

