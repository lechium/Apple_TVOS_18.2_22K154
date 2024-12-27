//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, ApplicationProxy, NSArray, NSString, UnfairLock, _TtC9appstored6LogKey;
@protocol AMSBagProtocol, ApplicationRepairDelegate;

@interface FactoryApplicationRepair : NSObject
{
    ApplicationProxy *_application;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    UnfairLock *_lock;	// 32 = 0x20
    _TtC9appstored6LogKey *_logKey;	// 40 = 0x28
    _Bool _establishesActiveAccount;	// 48 = 0x30
    _Bool _ignoresPreviousClaimAttempts;	// 49 = 0x31
    id <ApplicationRepairDelegate> _delegate;	// 56 = 0x38
    NSArray *_repairedBundleIDs;	// 64 = 0x40
}

+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logKey:(id)arg3;	// IMP=0x00200000000e149b
- (void).cxx_destruct;	// IMP=0x00200000000e4f9e
- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e4d2c
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e4cc4
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e4ae1
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e4835
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e1b8b
@property(readonly, nonatomic) NSString *repairType;
- (id)repairedBundleIDs;	// IMP=0x00100000000e134c
@property(retain, nonatomic) _TtC9appstored6LogKey *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) int fairPlayStatus;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;	// IMP=0x00100000000e0efa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

