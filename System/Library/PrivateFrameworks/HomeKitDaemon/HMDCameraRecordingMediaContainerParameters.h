//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingMediaContainerParameters : HAPTLVBase
{
    NSNumber *_fragmentLength;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008351f5
- (void).cxx_destruct;	// IMP=0x00000000008351e2
@property(readonly, copy, nonatomic) NSNumber *fragmentLength; // @synthesize fragmentLength=_fragmentLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000835161
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008350c9
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000834ff2
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000834e63
- (id)initWithFragmentLength:(id)arg1;	// IMP=0x0000000000834df5

@end

