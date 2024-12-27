//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMIAnalysisStateManager, HMIHomePersonManager, HMIVideoAnalyzerDynamicConfiguration, HMIVideoFragment, NSSet;
@protocol HMDCameraRecordingSessionVideoAnalyzerDelegate;

@protocol HMDCameraRecordingSessionVideoAnalyzer <NSObject>
@property(retain) HMIAnalysisStateManager *analysisStateManager;
@property __weak id <HMDCameraRecordingSessionVideoAnalyzerDelegate> delegate;
@property(copy) NSSet *externalPersonManagers;
@property(retain) HMIHomePersonManager *homePersonManager;
- (void)finishWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)cancel;
- (void)flushAsync;
- (void)analyzeFragment:(HMIVideoFragment *)arg1 configuration:(HMIVideoAnalyzerDynamicConfiguration *)arg2;
@end

