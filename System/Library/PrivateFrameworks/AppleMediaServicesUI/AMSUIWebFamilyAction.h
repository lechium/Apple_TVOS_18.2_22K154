//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebFamilyAction
{
    ACAccount *_account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000087ae2
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_dictionaryFromLookupResult:(id)arg1;	// IMP=0x0000000000087545
- (id)runAction;	// IMP=0x000000000008725b
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000008717d

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

