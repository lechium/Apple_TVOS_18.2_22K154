//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class C2MPCloudKitInfo, C2MPDeviceInfo, C2MPGenericEvent, C2MPNetworkEvent, C2MPServerInfo, NSString;

__attribute__((visibility("hidden")))
@interface C2MPMetric : PBCodable
{
    unsigned long long _reportFrequency;	// 8 = 0x8
    unsigned long long _reportFrequencyBase;	// 16 = 0x10
    unsigned long long _triggers;	// 24 = 0x18
    C2MPCloudKitInfo *_cloudkitInfo;	// 32 = 0x20
    C2MPDeviceInfo *_deviceInfo;	// 40 = 0x28
    C2MPGenericEvent *_genericEvent;	// 48 = 0x30
    int _metricType;	// 56 = 0x38
    C2MPNetworkEvent *_networkEvent;	// 64 = 0x40
    NSString *_reportTransportSourceApplicationBundleIdentifier;	// 72 = 0x48
    NSString *_reportTransportSourceApplicationSecondaryIdentifier;	// 80 = 0x50
    C2MPServerInfo *_serverInfo;	// 88 = 0x58
    _Bool _reportTransportAllowExpensiveAccess;	// 96 = 0x60
    _Bool _reportTransportAllowPowerNapScheduling;	// 97 = 0x61
    struct {
        unsigned int reportFrequency:1;
        unsigned int reportFrequencyBase:1;
        unsigned int triggers:1;
        unsigned int metricType:1;
        unsigned int reportTransportAllowExpensiveAccess:1;
        unsigned int reportTransportAllowPowerNapScheduling:1;
    } _has;	// 100 = 0x64
}

- (void).cxx_destruct;	// IMP=0x00000000000341f7
@property(retain, nonatomic) C2MPGenericEvent *genericEvent; // @synthesize genericEvent=_genericEvent;
@property(retain, nonatomic) C2MPNetworkEvent *networkEvent; // @synthesize networkEvent=_networkEvent;
@property(retain, nonatomic) NSString *reportTransportSourceApplicationSecondaryIdentifier; // @synthesize reportTransportSourceApplicationSecondaryIdentifier=_reportTransportSourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *reportTransportSourceApplicationBundleIdentifier; // @synthesize reportTransportSourceApplicationBundleIdentifier=_reportTransportSourceApplicationBundleIdentifier;
@property(nonatomic) _Bool reportTransportAllowPowerNapScheduling; // @synthesize reportTransportAllowPowerNapScheduling=_reportTransportAllowPowerNapScheduling;
@property(nonatomic) _Bool reportTransportAllowExpensiveAccess; // @synthesize reportTransportAllowExpensiveAccess=_reportTransportAllowExpensiveAccess;
@property(nonatomic) unsigned long long reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property(nonatomic) unsigned long long reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property(nonatomic) unsigned long long triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) C2MPServerInfo *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(retain, nonatomic) C2MPCloudKitInfo *cloudkitInfo; // @synthesize cloudkitInfo=_cloudkitInfo;
@property(retain, nonatomic) C2MPDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000033e7c
- (unsigned long long)hash;	// IMP=0x0000000000033cd5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033a15
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000337df
- (void)copyTo:(id)arg1;	// IMP=0x0000000000033628
- (void)writeTo:(id)arg1;	// IMP=0x0000000000033469
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003345c
- (id)dictionaryRepresentation;	// IMP=0x0000000000032924
- (id)description;	// IMP=0x0000000000032875
@property(readonly, nonatomic) _Bool hasGenericEvent;
@property(readonly, nonatomic) _Bool hasNetworkEvent;
@property(readonly, nonatomic) _Bool hasReportTransportSourceApplicationSecondaryIdentifier;
@property(readonly, nonatomic) _Bool hasReportTransportSourceApplicationBundleIdentifier;
@property(nonatomic) _Bool hasReportTransportAllowPowerNapScheduling;
@property(nonatomic) _Bool hasReportTransportAllowExpensiveAccess;
@property(nonatomic) _Bool hasReportFrequencyBase;
@property(nonatomic) _Bool hasReportFrequency;
@property(nonatomic) _Bool hasTriggers;
@property(readonly, nonatomic) _Bool hasServerInfo;
@property(readonly, nonatomic) _Bool hasCloudkitInfo;
@property(readonly, nonatomic) _Bool hasDeviceInfo;
- (int)StringAsMetricType:(id)arg1;	// IMP=0x00000000000325d2
- (id)metricTypeAsString:(int)arg1;	// IMP=0x0000000000032566
@property(nonatomic) _Bool hasMetricType;
@property(nonatomic) int metricType; // @synthesize metricType=_metricType;

@end

