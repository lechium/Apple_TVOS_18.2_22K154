//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeVideo
{
    unsigned char _controlInfoCameraStatus;	// 64 = 0x40
    unsigned char _controlInfoLTRBits;	// 65 = 0x41
    unsigned int _controlInfoLTRTimestamp;	// 68 = 0x44
    struct {
        unsigned short totalPacketsPerFrame;
        unsigned short frameSequenceNumber;
    } _controlInfoFrameExtensionData;	// 72 = 0x48
    unsigned char _controlInfoFEC[36];	// 76 = 0x4c
    unsigned long long _controlInfoFECLength;	// 112 = 0x70
    unsigned int _controlInfoProbe;	// 120 = 0x78
    unsigned int _controlInfoReceivedKBytes;	// 124 = 0x7c
    unsigned int _controlInfoReceivedPackets;	// 128 = 0x80
    unsigned int _controlInfoVideoPacketSize;	// 132 = 0x84
    unsigned int _controlInfoVideoTimestamp;	// 136 = 0x88
    double _controlInfoVideoArrivalTime;	// 144 = 0x90
}

- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;	// IMP=0x00000000004cb9d0
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;	// IMP=0x00000000004cb790
- (_Bool)hasInfoType:(unsigned int)arg1;	// IMP=0x00000000004cb760
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;	// IMP=0x00000000004cb534
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_d3c7da61 *)arg3;	// IMP=0x00000000004caf47
- (int)handleOptionalControlInfo:(CDStruct_d3c7da61 *)arg1;	// IMP=0x00000000004caea0
- (id)description;	// IMP=0x00000000004cac5b
- (unsigned long long)serializedSize;	// IMP=0x00000000004cac51
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_d3c7da61 *)arg3 version:(unsigned char)arg4;	// IMP=0x00000000004cabe4
- (id)init;	// IMP=0x00000000004ca7b3

@end

