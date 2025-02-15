//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDCameraRecordingMediaContainer, HMDCameraRecordingMediaContainerParameters, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingMediaContainerConfiguration : HAPTLVBase
{
    HMDCameraRecordingMediaContainer *_container;	// 8 = 0x8
    HMDCameraRecordingMediaContainerParameters *_parameters;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000062c90b
- (void).cxx_destruct;	// IMP=0x000000000062c8da
@property(readonly, copy, nonatomic) HMDCameraRecordingMediaContainerParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) HMDCameraRecordingMediaContainer *container; // @synthesize container=_container;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000062c80a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000062c71e
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000062c5b4
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x000000000062c2b2
- (id)initWithMediaContainer:(id)arg1 containerParameters:(id)arg2;	// IMP=0x000000000062c210

@end

