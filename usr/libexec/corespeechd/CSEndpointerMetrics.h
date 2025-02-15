//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSASRFeatures, NSArray, NSDictionary, NSString, OSDFeatures;

@interface CSEndpointerMetrics : NSObject
{
    _Bool _isRequestTimeOut;	// 8 = 0x8
    _Bool _isAnchorTimeBuffered;	// 9 = 0x9
    double _totalAudioRecorded;	// 16 = 0x10
    unsigned long long _endpointBufferHostTime;	// 24 = 0x18
    NSArray *_featuresAtEndpoint;	// 32 = 0x20
    long long _endpointerType;	// 40 = 0x28
    NSDictionary *_asrFeatureLatencyDistribution;	// 48 = 0x30
    NSDictionary *_additionalMetrics;	// 56 = 0x38
    double _trailingSilenceDurationAtEndpoint;	// 64 = 0x40
    NSString *_requestId;	// 72 = 0x48
    OSDFeatures *_osdFeaturesAtEndpoint;	// 80 = 0x50
    CSASRFeatures *_asrFeaturesAtEndpoint;	// 88 = 0x58
    NSString *_assetConfigVersion;	// 96 = 0x60
    double _blkHepAudioOrigin;	// 104 = 0x68
    double _vtExtraAudioAtStartInMs;	// 112 = 0x70
    unsigned long long _firstAudioSampleSensorTimestamp;	// 120 = 0x78
    unsigned long long _endpointHostTime;	// 128 = 0x80
    unsigned long long _audioDeliveryHostTimeDelta;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000dee63
- (void).cxx_destruct;	// IMP=0x00200000000dee04
@property(nonatomic) unsigned long long audioDeliveryHostTimeDelta; // @synthesize audioDeliveryHostTimeDelta=_audioDeliveryHostTimeDelta;
@property(nonatomic) unsigned long long endpointHostTime; // @synthesize endpointHostTime=_endpointHostTime;
@property(nonatomic) unsigned long long firstAudioSampleSensorTimestamp; // @synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp;
@property(nonatomic) double vtExtraAudioAtStartInMs; // @synthesize vtExtraAudioAtStartInMs=_vtExtraAudioAtStartInMs;
@property(nonatomic) double blkHepAudioOrigin; // @synthesize blkHepAudioOrigin=_blkHepAudioOrigin;
@property(retain, nonatomic) NSString *assetConfigVersion; // @synthesize assetConfigVersion=_assetConfigVersion;
@property(nonatomic) _Bool isAnchorTimeBuffered; // @synthesize isAnchorTimeBuffered=_isAnchorTimeBuffered;
@property(nonatomic) _Bool isRequestTimeOut; // @synthesize isRequestTimeOut=_isRequestTimeOut;
@property(retain, nonatomic) CSASRFeatures *asrFeaturesAtEndpoint; // @synthesize asrFeaturesAtEndpoint=_asrFeaturesAtEndpoint;
@property(retain, nonatomic) OSDFeatures *osdFeaturesAtEndpoint; // @synthesize osdFeaturesAtEndpoint=_osdFeaturesAtEndpoint;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) double trailingSilenceDurationAtEndpoint; // @synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint;
@property(retain, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
@property(retain, nonatomic) NSDictionary *asrFeatureLatencyDistribution; // @synthesize asrFeatureLatencyDistribution=_asrFeatureLatencyDistribution;
@property(nonatomic) long long endpointerType; // @synthesize endpointerType=_endpointerType;
@property(retain, nonatomic) NSArray *featuresAtEndpoint; // @synthesize featuresAtEndpoint=_featuresAtEndpoint;
@property(nonatomic) unsigned long long endpointBufferHostTime; // @synthesize endpointBufferHostTime=_endpointBufferHostTime;
@property(nonatomic) double totalAudioRecorded; // @synthesize totalAudioRecorded=_totalAudioRecorded;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000deabd
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000de756
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000de74b
- (id)description;	// IMP=0x00100000000de665
- (id)metricsCopyWithRequestId:(id)arg1 lastAudioChunkHostTime:(unsigned long long)arg2;	// IMP=0x00100000000de50c
- (id)initWithTotalAudioRecorded:(double)arg1 endpointBufferHostTime:(unsigned long long)arg2 featuresAtEndpoint:(id)arg3 endpointerType:(long long)arg4 asrFeatureLatencyDistribution:(id)arg5 additionalMetrics:(id)arg6 trailingSilenceDurationAtEndpoint:(double)arg7 requestId:(id)arg8;	// IMP=0x00100000000de39e
- (id)initWithTotalAudioRecorded:(double)arg1 endpointBufferHostTime:(unsigned long long)arg2 featuresAtEndpoint:(id)arg3 endpointerType:(long long)arg4 asrFeatureLatencyDistribution:(id)arg5 additionalMetrics:(id)arg6 trailingSilenceDurationAtEndpoint:(double)arg7 requestId:(id)arg8 osdFeatures:(id)arg9 asrFeatures:(id)arg10 isRequestTimeOut:(_Bool)arg11 assetConfigVersion:(id)arg12 blkHepAudioOrigin:(double)arg13 vtExtraAudioAtStartInMs:(double)arg14 firstAudioSampleSensorTimestamp:(unsigned long long)arg15 isAnchorTimeBuffered:(_Bool)arg16 endpointHostTime:(unsigned long long)arg17 audioDeliveryHostTimeDelta:(unsigned long long)arg18;	// IMP=0x00100000000de1b6

@end

