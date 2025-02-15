//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsMac
{
    _Bool _hiDefEncoding;	// 34 = 0x22
    _Bool _isGVAEncoderAvailableInitialized;	// 35 = 0x23
    _Bool _isGVAEncoderAvailable;	// 36 = 0x24
    int _machineType;	// 40 = 0x28
    int _cpuFamily;	// 44 = 0x2c
    int _numProcessors;	// 48 = 0x30
    int _mhrtz;	// 52 = 0x34
    int _isG5;	// 56 = 0x38
    int _hardwareScore;	// 60 = 0x3c
    NSString *_cpuType;	// 64 = 0x40
    NSString *_machineName;	// 72 = 0x48
    unsigned int _screenWidth;	// 80 = 0x50
    unsigned int _screenHeight;	// 84 = 0x54
    unsigned long long _maxScreenEncodingSizeSupported;	// 88 = 0x58
    _Bool _supportsFilteredScreenCapture;	// 96 = 0x60
    NSString *_modelName;	// 104 = 0x68
    unsigned int _modelVersion;	// 112 = 0x70
    unsigned int _modelRevision;	// 116 = 0x74
    NSData *_boardId;	// 120 = 0x78
}

+ (_Bool)isCellularTappingSupported;	// IMP=0x001000000003f37b
+ (long long)deviceClass;	// IMP=0x001000000003e9e6
+ (id)sharedInstance;	// IMP=0x001000000003e122
+ (id)virtualHardwareSettings:(id)arg1;	// IMP=0x001000000003d186
@property(readonly, nonatomic) _Bool supportsFoveation;
@property(readonly, nonatomic) _Bool captureFormatPrefer16by9ForSquare;
@property(readonly, nonatomic) _Bool supportsOutOfProcessAudioDecoding;
@property(readonly, nonatomic) _Bool supportsOutOfProcessVideoDecoding;
@property(readonly, nonatomic) _Bool isMLEnhanceOneToOneSupported;
@property(readonly, nonatomic) _Bool isExternalCameraSupported;
@property(readonly, nonatomic) _Bool isSmartBrakeSupported;
@property(readonly, nonatomic) _Bool isViewPointCorrectionSupported;
@property(readonly, nonatomic) _Bool isMediaRecordingSupported;
@property(readonly, nonatomic) _Bool isRemoteCameraSenderSupported;
- (_Bool)preferPresentationTimestamp;	// IMP=0x000000000003f373
@property(readonly, nonatomic) long long screenShareCapabilities;
- (_Bool)disableMLScalarDuringSharing;	// IMP=0x000000000003f360
- (_Bool)supportsDedicatedSystemAudioStream;	// IMP=0x000000000003f1cb
- (_Bool)supportsSystemAudioTap;	// IMP=0x000000000003f1c3
- (_Bool)supportsScreenCapture;	// IMP=0x000000000003f1bb
- (_Bool)limitCameraDownlinkBitrateDuringSharing;	// IMP=0x000000000003f1a6
@property(readonly, nonatomic) NSArray *supportedVideoPayloads;
- (id)queryBoardId;	// IMP=0x000000000003f000
@property(readonly, nonatomic) _Bool shouldEnforceScreenFrameRateLimit;
@property(readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property(readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property(readonly, nonatomic) unsigned long long maxScreenEncodingSizeSupported;
- (_Bool)supportsFilteredScreenCapture;	// IMP=0x000000000003ec15
- (double)previewPreferredAspectRatio;	// IMP=0x000000000003ec07
- (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;	// IMP=0x000000000003ebf5
@property(readonly, nonatomic) unsigned int screenHeight;
@property(readonly, nonatomic) _Bool shouldOverrideGPUMuxing;
- (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;	// IMP=0x000000000003eb71
@property(readonly, nonatomic) unsigned int screenWidth;
- (void)_initializeScreenDimension;	// IMP=0x000000000003eb3c
@property(readonly, nonatomic) _Bool supportsDecodingSquareCameraVideo;
@property(readonly, nonatomic) _Bool supportsMultiway1080pStream;
@property(readonly, nonatomic) _Bool supportsAVFCapture;
- (unsigned int)maxFpsCameraCaptureDuringSharing;	// IMP=0x000000000003eaad
- (unsigned int)maxRemoteParticipants30fps;	// IMP=0x000000000003e9ee
@property(readonly, nonatomic) _Bool isPixelFormatAvailable;
- (void)addPixelFormat;	// IMP=0x000000000003e8fd
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) _Bool supportsCompressedPixelFormat;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
- (unsigned int)maxMultiwayFramerateSupported;	// IMP=0x000000000003e7de
@property(readonly, nonatomic) _Bool isCaptionsSupported;
- (unsigned int)maxOneToOneFramerateSupported;	// IMP=0x000000000003e7cb
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) int hardwareScore;
@property(readonly, nonatomic) NSString *machineName;
@property(readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property(readonly, nonatomic) unsigned int hwEncoderExitBitrate;
- (_Bool)isAppleSiliconMac;	// IMP=0x000000000003e2b5
@property(readonly, nonatomic) _Bool isMacmini;
- (_Bool)isMacBookAir;	// IMP=0x000000000003e283
- (_Bool)isIMacPro;	// IMP=0x000000000003e26a
@property(readonly, nonatomic) _Bool isIMac;
@property(readonly, nonatomic) _Bool isMacPro;
@property(readonly, nonatomic) _Bool isMacBookWVGA;
@property(readonly, nonatomic) _Bool isSpatialAudioSupported;
@property(readonly, nonatomic) _Bool supports1080pDecoding;
@property(readonly, nonatomic) _Bool supports1080pEncoding;
@property(readonly, nonatomic) _Bool canDoHiDefDecoding;
@property(readonly, nonatomic) _Bool canDoHEVC;
@property(readonly, nonatomic) _Bool canDoHiDefEncoding;
- (_Bool)isGVAEncoderAvailable;	// IMP=0x000000000003da3e
- (_Bool)_isModel:(id)arg1;	// IMP=0x000000000003d9e7
- (_Bool)_isMachineNewerThanSandybridge:(int)arg1;	// IMP=0x000000000003d97f
- (id)_getCPUTypeStringForMachineType:(int)arg1;	// IMP=0x000000000003d8f5
- (int)_getCPUFamilyType;	// IMP=0x000000000003d754
- (void)setupMachineName;	// IMP=0x000000000003d505
- (void)dealloc;	// IMP=0x000000000003d47c
- (id)initForDevice:(id)arg1;	// IMP=0x000000000003cf4d
- (id)init;	// IMP=0x000000000003ccc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isSiriVoicePlayoutSupported;
@property(readonly, nonatomic) _Bool isSiriVoiceTapSupported;
@property(readonly) Class superclass;

@end

