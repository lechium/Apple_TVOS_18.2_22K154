//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDelegatePurchaseRequest, NSString;

@interface CDStorePurchaseGetAuthInfoResponse : NSObject
{
    AMSDelegatePurchaseRequest *_purchaseRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001dc97
@property(retain, nonatomic) AMSDelegatePurchaseRequest *purchaseRequest; // @synthesize purchaseRequest=_purchaseRequest;
@property(readonly, copy) NSString *description;
- (id)makeRapportDictionary;	// IMP=0x001000000001db61
- (id)initWithRapportDictionary:(id)arg1;	// IMP=0x001000000001dabb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

