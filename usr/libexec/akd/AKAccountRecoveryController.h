//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthenticationUILiaison, AKClient, AKRequestDispatcher;

@interface AKAccountRecoveryController : NSObject
{
    AKAuthenticationUILiaison *_authUILiaison;	// 8 = 0x8
    AKClient *_client;	// 16 = 0x10
    AKRequestDispatcher *_requestDispatcher;	// 24 = 0x18
}

+ (_Bool)shouldProcessServerUIRequest:(id)arg1;	// IMP=0x004000000001aa93
- (void).cxx_destruct;	// IMP=0x002000000001cbae
- (id)_recoveryContextFromServerInfo:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001ca55
- (void)persistRecoveryKeyWithContext:(id)arg1 authContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c75b
- (void)verifyMasterKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001be2f
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b687
- (void)retrieveRecoveryDataForServerContext:(id)arg1 recoveryInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ab17
- (id)initWithUILiaison:(id)arg1 client:(id)arg2;	// IMP=0x001000000001a9fc
- (id)initWithUILiaison:(id)arg1 client:(id)arg2 requestDispatcher:(id)arg3;	// IMP=0x001000000001a944

@end

