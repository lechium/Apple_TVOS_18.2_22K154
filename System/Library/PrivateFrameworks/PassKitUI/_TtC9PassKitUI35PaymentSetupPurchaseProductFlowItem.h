//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI35PaymentSetupPurchaseProductFlowItem : NSObject
{
    MISSING_TYPE *context;	// 8 = 0x8
    MISSING_TYPE *product;	// 16 = 0x10
    MISSING_TYPE *viewController;	// 24 = 0x18
    MISSING_TYPE *_isManualProvisioning;	// 32 = 0x20
    MISSING_TYPE *delegate;	// 40 = 0x28
    MISSING_TYPE *identifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000b0af0
- (id)init;	// IMP=0x00000000000b0a90
- (void)purchaseViewController:(id)arg1 didPerformPurchaseWithCredential:(id)arg2;	// IMP=0x00000000000b1050
- (void)purchaseViewControllerDidRequestTransferBalance:(id)arg1;	// IMP=0x00000000000b0e30

@end

