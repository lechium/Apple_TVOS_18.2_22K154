//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSDictionary, NSString, PKPass, PKPaymentSetupProduct;

@protocol PKProvisioningAnalyticsSessionReportingResponder <NSObject>
- (void)setPass:(PKPass *)arg1;
- (void)setSetupProduct:(PKPaymentSetupProduct *)arg1;
- (void)resetProductTypes;
- (void)setProductType:(NSString *)arg1 subtype:(NSString *)arg2;
- (void)didReceiveEvent:(NSDictionary *)arg1;
@end

