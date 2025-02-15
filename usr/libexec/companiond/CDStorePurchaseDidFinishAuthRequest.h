//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDelegatePurchaseResult, NSError, NSString;

@interface CDStorePurchaseDidFinishAuthRequest : NSObject
{
    AMSDelegatePurchaseResult *_purchaseResult;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    unsigned long long _deviceFlags;	// 24 = 0x18
    NSString *_deviceModel;	// 32 = 0x20
    NSString *_deviceName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001e113
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(nonatomic) unsigned long long deviceFlags; // @synthesize deviceFlags=_deviceFlags;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) AMSDelegatePurchaseResult *purchaseResult; // @synthesize purchaseResult=_purchaseResult;
@property(readonly, copy) NSString *description;
- (id)makeRapportDictionary;	// IMP=0x001000000001de32
- (id)initWithRapportDictionary:(id)arg1;	// IMP=0x001000000001dca7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

