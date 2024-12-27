//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPaymentPass;

@protocol PKPaymentDashboardCellActionHandleable <NSObject>
- (long long)viewType;
- (_Bool)enableDisclosure;
- (PKPaymentPass *)pass;

@optional
- (void)setActionHandler:(void (^)(UIView<PKPaymentDashboardCellActionHandleable> *, PKPaymentPassAction *))arg1;
@end

