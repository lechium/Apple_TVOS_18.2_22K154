//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSArray;

@protocol VCHardwareSettingsProtocol <NSObject>
+ (_Bool)isCellularTappingSupported;
@property(readonly, nonatomic) _Bool captureFormatPrefer16by9ForSquare;
@property(readonly, nonatomic) _Bool supportsOutOfProcessAudioDecoding;
@property(readonly, nonatomic) _Bool supportsOutOfProcessVideoDecoding;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) _Bool supportsCompressedPixelFormat;
@property(readonly, nonatomic) _Bool isMLEnhanceOneToOneSupported;
@property(readonly, nonatomic) _Bool isMediaRecordingSupported;
@property(readonly, nonatomic) _Bool supportsDecodingSquareCameraVideo;
@property(readonly, nonatomic) _Bool supportsMultiway1080pStream;
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) _Bool isExternalCameraSupported;
@property(readonly, nonatomic) _Bool isSmartBrakeSupported;
@property(readonly, nonatomic) _Bool isViewPointCorrectionSupported;
@property(readonly, nonatomic) _Bool isSiriVoicePlayoutSupported;
@property(readonly, nonatomic) _Bool isSiriVoiceTapSupported;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property(readonly, nonatomic) _Bool isCaptionsSupported;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) NSArray *supportedVideoPayloads;
@property(readonly, nonatomic) _Bool isPixelFormatAvailable;
@property(readonly, nonatomic) _Bool isSpatialAudioSupported;
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@end

