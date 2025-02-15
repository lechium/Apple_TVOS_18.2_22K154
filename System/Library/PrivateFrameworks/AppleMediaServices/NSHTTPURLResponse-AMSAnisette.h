//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSHTTPURLResponse.h>

@class NSData, NSString;

@interface NSHTTPURLResponse (AMSAnisette)
- (long long)_anisetteType;	// IMP=0x003000000053887b
@property(readonly, nonatomic) NSString *ams_actionNameV1_5;
@property(readonly, nonatomic) NSString *ams_actionNameV1;
@property(readonly, nonatomic) NSString *ams_actionName;
@property(readonly, nonatomic) NSData *ams_actionDataV1_5;
@property(readonly, nonatomic) NSData *ams_actionDataV1;
@property(readonly, nonatomic) NSData *ams_actionData;
@property(readonly) _Bool ams_isFraudReportCallbackResponse;
@property(readonly) _Bool ams_isFraudReportRetryResponse;
@property(readonly) _Bool ams_isFraudReportInitURLResponse;
@property(readonly) NSString *ams_fsrRequestInterval;
@property(readonly) NSString *ams_fsrInitUrl;
@property(readonly) NSString *ams_fsrCallbackUrl;
@property(readonly) NSString *ams_fsrTransactionID;
@property(readonly) NSString *ams_fsrKeyID;
@property(readonly) NSString *ams_fsrAnonymousID;
@property(readonly) NSString *ams_fsrNameSpace;
@property(readonly) NSString *ams_fsrData;
@end

