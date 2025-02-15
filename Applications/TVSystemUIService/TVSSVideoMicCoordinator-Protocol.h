//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AVCaptureDevice, NSString;

@protocol TVSSVideoMicCoordinator <NSObject>
@property(copy, nonatomic) CDUnknownBlockType onMicModeEnabledChange;
@property(copy, nonatomic) CDUnknownBlockType onMicModeSupportChange;
@property(copy, nonatomic) CDUnknownBlockType onVideoEffectsControlModeChange;
@property(copy, nonatomic) CDUnknownBlockType onVideoEffectsEnabledChange;
@property(copy, nonatomic) CDUnknownBlockType onVideoEffectsSupportChange;
@property(nonatomic, getter=isUsingWideForFraming) _Bool usingWideForFraming;
@property(readonly, nonatomic) _Bool supportsUltraWideCamera;
@property(readonly, nonatomic) _Bool supportsWideCamera;
@property(nonatomic) long long batteryState;
@property(nonatomic) double zoomFactor;
@property(readonly, nonatomic) double minAvailableVideoZoomFactor;
@property(readonly, nonatomic) double maxAvailableVideoZoomFactor;
@property(readonly, nonatomic) double defaultUltraWideZoomFactor;
@property(readonly, nonatomic) double defaultWideZoomFactor;
@property(readonly, nonatomic, getter=isManualFramingSupported) _Bool manualFramingSupported;
@property(copy, nonatomic) CDUnknownBlockType onLensChange;
@property(copy, nonatomic) CDUnknownBlockType onBatteryStateChange;
@property(copy, nonatomic) CDUnknownBlockType onZoomFactorChange;
@property(retain, nonatomic) AVCaptureDevice *continuityCaptureDevice;
@property(copy, nonatomic) CDUnknownBlockType onSampleBufferChange;
@property(copy, nonatomic) CDUnknownBlockType onShouldTransformChange;
- (_Bool)enableMode:(long long)arg1 forBundleID:(NSString *)arg2;
- (_Bool)isModeUnavailable:(long long)arg1 forBundleID:(NSString *)arg2;
- (_Bool)isModeEnabled:(long long)arg1 forBundleID:(NSString *)arg2;
- (_Bool)isModeSupported:(long long)arg1 forBundleID:(NSString *)arg2;
- (_Bool)toggleEnabledForEffect:(NSString *)arg1 enable:(_Bool)arg2 forBundleID:(NSString *)arg3;
- (long long)effectControlMode:(NSString *)arg1 forBundleID:(NSString *)arg2;
- (_Bool)isEffectUnavailable:(NSString *)arg1 forBundleID:(NSString *)arg2;
- (_Bool)isEffectEnabled:(NSString *)arg1 forBundleID:(NSString *)arg2;
- (_Bool)isEffectSupported:(NSString *)arg1 forBundleID:(NSString *)arg2;
- (_Bool)isDockKitEnabledForBundleID:(NSString *)arg1;
- (void)triggerOneShotFraming;
@end

