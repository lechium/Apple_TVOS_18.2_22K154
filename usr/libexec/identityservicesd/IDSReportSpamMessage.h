//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSString;

@interface IDSReportSpamMessage : FTIDSMessage
{
    NSArray *_spamMessages;	// 232 = 0xe8
    NSString *_responseMessage;	// 240 = 0xf0
    NSArray *_responseSpamMessages;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x002000000033996e
@property(copy) NSArray *responseSpamMessages; // @synthesize responseSpamMessages=_responseSpamMessages;
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy) NSArray *spamMessages; // @synthesize spamMessages=_spamMessages;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000339750
- (id)messageBody;	// IMP=0x00100000003396d2
- (id)requiredKeys;	// IMP=0x0010000000339698
- (id)bagKey;	// IMP=0x001000000033968b
- (double)anisetteHeadersTimeout;	// IMP=0x001000000033967d
- (_Bool)wantsManagedRetries;	// IMP=0x0010000000339675
- (_Bool)wantsBodySignature;	// IMP=0x001000000033966d
- (int)maxTimeoutRetries;	// IMP=0x0010000000339662
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x001000000033965a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000033957b
- (id)init;	// IMP=0x0010000000339527

@end

