//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AMSPaymentConfirmationResult : NSObject
{
    MISSING_TYPE *paymentConfirmationChoice;	// 8 = 0x8
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0010000000044e8f
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000044e52
- (void).cxx_destruct;	// IMP=0x0000000000045525
- (id)init;	// IMP=0x00000000000454bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000045062
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000044fc4
- (id)initWitChoice:(long long)arg1;	// IMP=0x0000000000044e10
@property(nonatomic, readonly) long long paymentConfirmationChoice; // @synthesize paymentConfirmationChoice;

@end

