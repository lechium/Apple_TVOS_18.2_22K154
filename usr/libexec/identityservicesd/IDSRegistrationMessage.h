//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;
@protocol IDSBaseMessageSigningSession;

@interface IDSRegistrationMessage : FTIDSMessage
{
    NSData *_validationData;	// 232 = 0xe8
    NSArray *_responseServices;	// 240 = 0xf0
    NSString *_language;	// 248 = 0xf8
    NSArray *_services;	// 256 = 0x100
    NSString *_hardwareVersion;	// 264 = 0x108
    NSString *_osVersion;	// 272 = 0x110
    NSString *_softwareVersion;	// 280 = 0x118
    NSDictionary *_privateDeviceData;	// 288 = 0x120
    NSString *_deviceName;	// 296 = 0x128
    NSString *_hostLanguage;	// 304 = 0x130
    NSString *_hostHardwareVersion;	// 312 = 0x138
    NSString *_hostOsVersion;	// 320 = 0x140
    NSString *_hostDeviceName;	// 328 = 0x148
    NSString *_hostSoftwareVersion;	// 336 = 0x150
    NSNumber *_responseHBI;	// 344 = 0x158
    NSString *_requestReasonString;	// 352 = 0x160
}

- (void).cxx_destruct;	// IMP=0x002000000026f96e
@property(copy) NSString *requestReasonString; // @synthesize requestReasonString=_requestReasonString;
@property(copy) NSNumber *responseHBI; // @synthesize responseHBI=_responseHBI;
@property(copy, nonatomic) NSString *hostSoftwareVersion; // @synthesize hostSoftwareVersion=_hostSoftwareVersion;
@property(copy, nonatomic) NSString *hostDeviceName; // @synthesize hostDeviceName=_hostDeviceName;
@property(copy, nonatomic) NSString *hostOsVersion; // @synthesize hostOsVersion=_hostOsVersion;
@property(copy, nonatomic) NSString *hostHardwareVersion; // @synthesize hostHardwareVersion=_hostHardwareVersion;
@property(copy, nonatomic) NSString *hostLanguage; // @synthesize hostLanguage=_hostLanguage;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSDictionary *privateDeviceData; // @synthesize privateDeviceData=_privateDeviceData;
@property(copy) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy) NSArray *services; // @synthesize services=_services;
@property(copy) NSString *language; // @synthesize language=_language;
@property(copy) NSArray *responseServices; // @synthesize responseServices=_responseServices;
@property(copy) NSData *validationData; // @synthesize validationData=_validationData;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000026f60c
- (double)anisetteHeadersTimeout;	// IMP=0x001000000026f5fe
- (id)nonStandardMessageHeadersForOutgoingPush;	// IMP=0x001000000026f5f6
- (id)messageBody;	// IMP=0x001000000026f19e
- (id)additionalMessageHeaders;	// IMP=0x001000000026f0dd
- (id)requiredKeys;	// IMP=0x001000000026f054
- (_Bool)isMultipleAuthCertCapable;	// IMP=0x001000000026f04c
- (id)bagKey;	// IMP=0x001000000026f03f
- (_Bool)requiresPushTokenKeys;	// IMP=0x001000000026f037
- (_Bool)hasRequiredKeys:(id *)arg1;	// IMP=0x001000000026f008
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000026ed01

// Remaining properties
@property(copy) id <IDSBaseMessageSigningSession> signingSession;

@end

