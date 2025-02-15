//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSNumber, NSString;

@interface IDSPreflightMessage : FTIDSMessage
{
    NSString *_protocolVersion;	// 232 = 0xe8
    NSNumber *_phoneNumberValidationRetryCount;	// 240 = 0xf0
    NSString *_hardwareVersion;	// 248 = 0xf8
    NSString *_osVersion;	// 256 = 0x100
    NSString *_softwareVersion;	// 264 = 0x108
    NSString *_deviceName;	// 272 = 0x110
    NSString *_IMSI;	// 280 = 0x118
    NSString *_PLMN;	// 288 = 0x120
    NSString *_testData;	// 296 = 0x128
    NSNumber *_pnrReason;	// 304 = 0x130
    NSString *_hostHardwareVersion;	// 312 = 0x138
    NSString *_hostOsVersion;	// 320 = 0x140
    NSString *_hostSoftwareVersion;	// 328 = 0x148
    NSString *_hostDeviceName;	// 336 = 0x150
    NSNumber *_responseStatus;	// 344 = 0x158
    NSArray *_responseMechanisms;	// 352 = 0x160
}

- (void).cxx_destruct;	// IMP=0x0020000000025766
@property(copy, nonatomic) NSArray *responseMechanisms; // @synthesize responseMechanisms=_responseMechanisms;
@property(copy, nonatomic) NSNumber *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(copy, nonatomic) NSString *hostDeviceName; // @synthesize hostDeviceName=_hostDeviceName;
@property(copy, nonatomic) NSString *hostSoftwareVersion; // @synthesize hostSoftwareVersion=_hostSoftwareVersion;
@property(copy, nonatomic) NSString *hostOsVersion; // @synthesize hostOsVersion=_hostOsVersion;
@property(copy, nonatomic) NSString *hostHardwareVersion; // @synthesize hostHardwareVersion=_hostHardwareVersion;
@property(copy, nonatomic) NSNumber *pnrReason; // @synthesize pnrReason=_pnrReason;
@property(copy, nonatomic) NSString *testData; // @synthesize testData=_testData;
@property(copy, nonatomic) NSString *PLMN; // @synthesize PLMN=_PLMN;
@property(copy, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy, nonatomic) NSNumber *phoneNumberValidationRetryCount; // @synthesize phoneNumberValidationRetryCount=_phoneNumberValidationRetryCount;
@property(copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000002527b
- (_Bool)requiresPushTokenKeys;	// IMP=0x0010000000025273
- (id)bagKey;	// IMP=0x0010000000025266
- (id)requiredKeys;	// IMP=0x001000000002524d
- (id)messageBody;	// IMP=0x0010000000024dc5
- (id)additionalMessageHeaders;	// IMP=0x0010000000024cbd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000249b6

// Remaining properties
@property(copy, nonatomic) NSString *hostLanguage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N


@end

