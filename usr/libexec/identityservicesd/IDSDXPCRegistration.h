//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCTAdapter, IDSDAccountController, IDSUserStore, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCRegistration : NSObject
{
    _Bool _onlyAllowReads;	// 8 = 0x8
    IDSUserStore *_userStore;	// 16 = 0x10
    IDSDAccountController *_accountController;	// 24 = 0x18
    IDSCTAdapter *_ctAdapter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000003be807
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSCTAdapter *ctAdapter; // @synthesize ctAdapter=_ctAdapter;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(nonatomic) _Bool onlyAllowReads; // @synthesize onlyAllowReads=_onlyAllowReads;
- (void)constructRAResponseDictionaryForServices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000003be783
- (void)enableTemporaryPhoneAlias:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003be281
- (void)disableTemporaryPhoneAlias:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003bdd7c
- (void)removeTemporaryPhoneAlias:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003bd923
- (void)setSelectedSubscriptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003bd336
- (void)unselectSubscription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003bce96
- (void)selectSubscription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003bc898
- (void)requestUnselectedTemporaryPhoneAliasesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003bc41c
- (void)requestSelectedSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003bbdb0
- (id)initWithQueue:(id)arg1 connection:(id)arg2;	// IMP=0x00100000003bbc76
- (id)initWithQueue:(id)arg1 connection:(id)arg2 userStore:(id)arg3 accountController:(id)arg4 ctAdapter:(id)arg5;	// IMP=0x00100000003bba08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

