//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VideoConversionHangDetector;

@interface VideoTranscodingTask
{
    VideoConversionHangDetector *_hangDetector;	// 144 = 0x90
}

+ (_Bool)shouldMaximizeVideoConversionPowerEfficiencyForOptions:(id)arg1 inputAssetDuration:(double)arg2 taskIdentifier:(id)arg3;	// IMP=0x0040000000016341
+ (id)metadataItemsByApplyingSignatureMetadataFromOptions:(id)arg1 toMetadataItems:(id)arg2;	// IMP=0x00100000000161c9
+ (id)signatureOptionToIdentifierMapping;	// IMP=0x0010000000016199
- (void).cxx_destruct;	// IMP=0x0020000000016170
@property(retain) VideoConversionHangDetector *hangDetector; // @synthesize hangDetector=_hangDetector;
- (id)outputAssetInformationWithError:(id *)arg1;	// IMP=0x0010000000015a02
- (void)cancelProgressUpdateTimerAndMarkEndTime;	// IMP=0x00100000000158e9
- (void)startProgressUpdateTimerAndMarkStartTime;	// IMP=0x00100000000155a1
- (void)callCompletionHandler;	// IMP=0x0010000000015560
- (_Bool)hasSlowMotionAdjustments;	// IMP=0x00100000000154e7
- (void)transitionToRunningStateAndConditionallyRunBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001544e
- (void)cancelTranscode;	// IMP=0x00100000000153ee
- (double)currentFractionCompleted;	// IMP=0x0010000000015385
- (_Bool)hasProgress;	// IMP=0x0010000000015322
- (void)performExport;	// IMP=0x00100000000152c2
- (void)cancel;	// IMP=0x001000000001510c
- (_Bool)didDetectHang;	// IMP=0x00100000000150c8
- (void)determineAndNotifyProgress;	// IMP=0x0010000000014ff0
- (void)performConversion;	// IMP=0x0010000000014ee3

@end

