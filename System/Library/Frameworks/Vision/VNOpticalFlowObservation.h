//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VNPixelBufferObservation.h"

@class VNImageSignature, VNLKTOpticalFlow;

__attribute__((visibility("hidden")))
@interface VNOpticalFlowObservation : VNPixelBufferObservation
{
    VNImageSignature *_targetImageSignature;	// 144 = 0x90
    VNLKTOpticalFlow *_opticalFlow;	// 152 = 0x98
}

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x00600000002d40bf
- (void).cxx_destruct;	// IMP=0x00000000002d4116
@property(retain, nonatomic) VNLKTOpticalFlow *opticalFlow; // @synthesize opticalFlow=_opticalFlow;
@property(retain, nonatomic) VNImageSignature *targetImageSignature; // @synthesize targetImageSignature=_targetImageSignature;

@end

