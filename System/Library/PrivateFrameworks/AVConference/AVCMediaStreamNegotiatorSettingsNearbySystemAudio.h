//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsNearbySystemAudio
{
    int _preferredAudioPayload;	// 104 = 0x68
}

- (unsigned long long)audioChannelCount;	// IMP=0x00000000003e7470
- (unsigned int)jitterBufferMode;	// IMP=0x00000000003e7468
- (double)rtcpSendInterval;	// IMP=0x00000000003e745a
- (double)rtcpTimeOutInterval;	// IMP=0x00000000003e744c
- (_Bool)rtcpTimeOutEnabled;	// IMP=0x00000000003e7444
- (unsigned long long)preferredMediaBitRate;	// IMP=0x00000000003e7439
- (unsigned long long)ptime;	// IMP=0x00000000003e742e
- (int)operatingMode;	// IMP=0x00000000003e7423
- (long long)audioStreamMode;	// IMP=0x00000000003e7418
- (int)preferredAudioCodec;	// IMP=0x00000000003e7408
- (void)setAudioDeviceUIDForDeviceRole:(unsigned char)arg1;	// IMP=0x00000000003e7402
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x00000000003e7267

@end

