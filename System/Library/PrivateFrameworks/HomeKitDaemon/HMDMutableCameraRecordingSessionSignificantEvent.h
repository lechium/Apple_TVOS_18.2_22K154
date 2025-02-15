//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMutableCameraRecordingSessionSignificantEvent
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000162c64

// Remaining properties
@property unsigned long long confidenceLevel; // @dynamic confidenceLevel;
@property(copy) NSDate *dateOfOccurrence; // @dynamic dateOfOccurrence;
@property(copy) NSSet *faceClassifications; // @dynamic faceClassifications;
@property(retain) NSData *faceCropData; // @dynamic faceCropData;
@property(retain) NSData *heroFrameData; // @dynamic heroFrameData;
@property unsigned long long reason; // @dynamic reason;
@property(copy) NSUUID *sessionEntityUUID; // @dynamic sessionEntityUUID;
@property double timeOffsetWithinClip; // @dynamic timeOffsetWithinClip;

@end

