//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSDictionary, NSString;

@interface IDSReportGeneralUnknownSenderMessage : FTIDSMessage
{
    NSDictionary *_unknownSenderInfo;	// 232 = 0xe8
    NSString *_responseMessage;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x002000000032c4a2
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy) NSDictionary *unknownSenderInfo; // @synthesize unknownSenderInfo=_unknownSenderInfo;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000032c2ec
- (id)messageBody;	// IMP=0x001000000032c26e
- (id)requiredKeys;	// IMP=0x001000000032c234
- (id)bagKey;	// IMP=0x001000000032c227
- (double)anisetteHeadersTimeout;	// IMP=0x001000000032c219
- (_Bool)wantsManagedRetries;	// IMP=0x001000000032c211
- (_Bool)wantsBodySignature;	// IMP=0x001000000032c209
- (int)maxTimeoutRetries;	// IMP=0x001000000032c1fe
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x001000000032c1f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000032c145
- (id)init;	// IMP=0x001000000032c0f1

@end

