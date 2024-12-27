//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXMediaUtilities/NSObject-Protocol.h>

@class AXMAVCaptureSessionNode, AXMSourceNode, AXMVisionEngineNode, AXMVisionPipelineContext;

@protocol AXMVisionEngineNodeConnectionDelegate <NSObject>
- (void)captureSessionNodeDidDropFrame:(AXMAVCaptureSessionNode *)arg1;
- (void)captureSessionNodeWillProcessFrame:(AXMAVCaptureSessionNode *)arg1;
- (void)captureSessionNodeDidEndProcessingFrames:(AXMAVCaptureSessionNode *)arg1;
- (void)captureSessionNodeDidBeginProcessingFrames:(AXMAVCaptureSessionNode *)arg1;
- (_Bool)diagnosticsEnabled:(AXMVisionEngineNode *)arg1;
- (_Bool)engineWillAcceptTiggerWithSource:(AXMSourceNode *)arg1;
- (void)triggerWithSource:(AXMSourceNode *)arg1 context:(AXMVisionPipelineContext *)arg2;
@end

