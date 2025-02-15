//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface IDSReportClientEventMessage : FTIDSMessage
{
    MISSING_TYPE *_report;	// 232 = 0xe8
    NSString *_reportType;	// 240 = 0xf0
    NSString *_hardwareVersion;	// 248 = 0xf8
    NSString *_osVersion;	// 256 = 0x100
    NSDictionary *_responseMessage;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00200000000e8327
@property(copy) NSDictionary *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy) NSString *reportType; // @synthesize reportType=_reportType;
@property(copy) NSDictionary *report; // @synthesize report=_report;
- (void)handleResponseBody:(id)arg1;	// IMP=0x00100000000e7f88
- (id)parsedIDSMessageResult;	// IMP=0x00100000000e7f76
- (id)messageBody;	// IMP=0x00100000000e7dcf
- (id)requiredKeys;	// IMP=0x00100000000e7d76
- (id)bagKey;	// IMP=0x00100000000e7d69
- (_Bool)wantsIDSProtocolVersion;	// IMP=0x00100000000e7d61
- (double)anisetteHeadersTimeout;	// IMP=0x00100000000e7d53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e7c74
- (id)init;	// IMP=0x00100000000e7c20

@end

