//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMIVideoAnalyzerEventFace, NSUUID;

@protocol HMIFaceClassifier
- (HMIVideoAnalyzerEventFace *)classifyFaceEvent:(HMIVideoAnalyzerEventFace *)arg1 pixelBuffer:(struct __CVBuffer *)arg2 fastMode:(_Bool)arg3 homeUUID:(NSUUID *)arg4 error:(id *)arg5;
@end

