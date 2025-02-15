//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SDPMini;

__attribute__((visibility("hidden")))
@interface VCCallInfo : NSObject
{
    unsigned int callID;	// 8 = 0x8
    NSString *participantID;	// 16 = 0x10
    unsigned int auNumber;	// 24 = 0x18
    unsigned int maxBandwidth;	// 28 = 0x1c
    unsigned int cellBandwidth;	// 32 = 0x20
    _Bool videoIsPaused;	// 36 = 0x24
    _Bool isPreLionOS;	// 37 = 0x25
    _Bool isVideoQualityDegraded;	// 38 = 0x26
    NSString *sdpString;	// 40 = 0x28
    SDPMini *sdp;	// 48 = 0x30
    _Bool is4x;	// 56 = 0x38
    _Bool isIOS;	// 57 = 0x39
    _Bool usesInitialFECImplementation;	// 58 = 0x3a
    _Bool supportsDynamicMaxBitrate;	// 59 = 0x3b
    _Bool supportsSpecialAACBundle;	// 60 = 0x3c
    _Bool supportsSKEOptimization;	// 61 = 0x3d
    unsigned int visibleRectCropping;	// 64 = 0x40
    _Bool useNewPLCalc;	// 68 = 0x44
    double firstDegradedMeasure;	// 72 = 0x48
    double videoDegradedThreshold;	// 80 = 0x50
    unsigned char u8Version;	// 88 = 0x58
    NSString *_frameworkVersion;	// 96 = 0x60
    NSString *_osVersion;	// 104 = 0x68
    NSString *_deviceType;	// 112 = 0x70
    _Bool _isVideoQualityNearDegraded;	// 120 = 0x78
    double _videoNearDegradedThreshold;	// 128 = 0x80
}

+ (unsigned char)getVCCurrentVersion;	// IMP=0x0060000000459f42
@property(nonatomic) _Bool isVideoQualityNearDegraded; // @synthesize isVideoQualityNearDegraded=_isVideoQualityNearDegraded;
@property(copy, nonatomic) NSString *frameworkVersion; // @synthesize frameworkVersion=_frameworkVersion;
@property(copy, nonatomic) NSString *OSVersion; // @synthesize OSVersion=_osVersion;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) unsigned char u8Version; // @synthesize u8Version;
@property(nonatomic) _Bool supportsSKEOptimization; // @synthesize supportsSKEOptimization;
@property(readonly, nonatomic) _Bool supportsSpecialAACBundle; // @synthesize supportsSpecialAACBundle;
@property(readonly, nonatomic) _Bool useNewPLCalc; // @synthesize useNewPLCalc;
@property(nonatomic) unsigned int visibleRectCropping; // @synthesize visibleRectCropping;
@property(retain, nonatomic) SDPMini *sdp; // @synthesize sdp;
@property(retain, nonatomic) NSString *sdpString; // @synthesize sdpString;
@property(nonatomic) _Bool supportsDynamicMaxBitrate; // @synthesize supportsDynamicMaxBitrate;
@property(readonly, nonatomic) _Bool usesInitialFECImplementation; // @synthesize usesInitialFECImplementation;
@property(readonly, nonatomic) _Bool isIOS; // @synthesize isIOS;
@property(nonatomic) _Bool videoIsPaused; // @synthesize videoIsPaused;
@property(nonatomic) _Bool isVideoQualityDegraded; // @synthesize isVideoQualityDegraded;
@property(nonatomic) _Bool isPreLionOS; // @synthesize isPreLionOS;
@property(nonatomic) unsigned int cellBandwidth; // @synthesize cellBandwidth;
@property(nonatomic) unsigned int maxBandwidth; // @synthesize maxBandwidth;
@property(nonatomic) unsigned int auNumber; // @synthesize auNumber;
@property(copy, nonatomic) NSString *participantID; // @synthesize participantID;
@property unsigned int callID; // @synthesize callID;
@property(readonly, nonatomic) _Bool isHDVideoSupported;
- (_Bool)supportSDPCompression;	// IMP=0x0000000000459f35
- (void)setUserAgent:(id)arg1;	// IMP=0x0000000000459df3
- (struct VoiceIOFarEndVersionInfo)audioVersionInfo:(_Bool)arg1;	// IMP=0x0000000000459d92
@property(readonly) _Bool supportsDynamicContentsRectWithAspectPreservation;
- (_Bool)updateWithLastDecodedFrameTime:(double)arg1 time:(double)arg2;	// IMP=0x0000000000459af5
@property(readonly, nonatomic) _Bool requiresImplicitFeatureString;
- (void)dealloc;	// IMP=0x0000000000459a36
- (id)init;	// IMP=0x000000000045986c

@end

