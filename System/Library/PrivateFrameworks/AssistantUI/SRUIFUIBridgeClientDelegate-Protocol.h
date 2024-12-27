//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class NSString, NSUUID, SRUIFLatencyInformation;

@protocol SRUIFUIBridgeClientDelegate <NSObject>
- (void)orchestrationDidPresentResponseFullyInApp;
- (void)cancelPhotoSelectionWithAnimation:(_Bool)arg1;
- (void)requestPhotoSelectionWithSearchString:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)showAssetsDownloadNotificationPrompt;
- (void)duckTTSToVolume:(float)arg1 rampTime:(double)arg2 completion:(void (^)(NSError *))arg3;

@optional
- (void)attendingStatusChanged:(_Bool)arg1;
- (void)orchestrationBeganTaskWithIdentifier:(NSUUID *)arg1;
- (void)receivedLatencyInformation:(SRUIFLatencyInformation *)arg1;
@end

