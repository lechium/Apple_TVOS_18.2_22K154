//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDialogRequest, AMSURLTaskInfo, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinanceVerifyPurchaseResponse : NSObject
{
    AMSDialogRequest *_dialogRequest;	// 8 = 0x8
    NSDictionary *_responseDictionary;	// 16 = 0x10
    AMSURLTaskInfo *_taskInfo;	// 24 = 0x18
    long long _verifyType;	// 32 = 0x20
}

+ (long long)_verifyTypeFromPayload:(id)arg1;	// IMP=0x00100000003c7ff7
+ (id)_dialogRequestForCVVFromPayload:(id)arg1 verifyType:(long long)arg2;	// IMP=0x00100000003c5813
+ (id)_dialogRequestForCarrierFromPayload:(id)arg1 verifyType:(long long)arg2;	// IMP=0x00100000003c53e3
+ (_Bool)isVerifyPurchasePayload:(id)arg1;	// IMP=0x00100000003c49ca
- (void).cxx_destruct;	// IMP=0x00000000003c8111
@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
@property(retain, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) AMSDialogRequest *dialogRequest; // @synthesize dialogRequest=_dialogRequest;
- (id)_runCVVRequestForCode:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003c7a48
- (id)_runCarrierVerifyCode:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003c73dd
- (id)_runCarrierNewCodeWithError:(id *)arg1;	// IMP=0x00000000003c6db9
- (id)_handleCVVDialogResult:(id)arg1 shouldReattempt:(_Bool *)arg2;	// IMP=0x00000000003c6590
- (id)_handleCarrierDialogResult:(id)arg1 shouldReattempt:(_Bool *)arg2;	// IMP=0x00000000003c5b0e
- (id)performWithTaskInfo:(id)arg1;	// IMP=0x00000000003c49e3
- (id)initWithPayload:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00000000003c4760

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

