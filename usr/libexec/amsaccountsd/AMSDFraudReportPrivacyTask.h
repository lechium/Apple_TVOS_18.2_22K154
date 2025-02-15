//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;

@interface AMSDFraudReportPrivacyTask : AMSTask
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
}

+ (id)_blindedTransactionWithTransactionID:(id)arg1 pks:(id)arg2 keyID:(id)arg3 error:(id *)arg4;	// IMP=0x004000000001fcf3
+ (id)performUnBlindingFraudReportForResponse:(id)arg1 tdmToken:(id)arg2 pks:(id)arg3 error:(id *)arg4;	// IMP=0x001000000001f88a
- (void).cxx_destruct;	// IMP=0x002000000001feec
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (id)performBlindingWithTransactionID:(id)arg1 keyID:(id)arg2;	// IMP=0x001000000001ecb5
- (id)initWithBag:(id)arg1;	// IMP=0x001000000001ec02

@end

