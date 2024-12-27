//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCRateController, NSString;
@protocol VCMediaStreamRateAdaptationDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaStreamRateAdaptation : NSObject
{
    AVCRateController *_vcrcRateController;	// 8 = 0x8
    struct OpaqueFigCFWeakReference *_delegateWeak;	// 16 = 0x10
    id <VCMediaStreamRateAdaptationDelegate> _delegate;	// 24 = 0x18
    int _mode;	// 32 = 0x20
}

+ (unsigned int)resolvePolicyForCurrentConnection:(id)arg1;	// IMP=0x001000000045e3ab
@property(readonly, nonatomic) AVCRateController *vcrcRateController; // @synthesize vcrcRateController=_vcrcRateController;
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x000000000045e6c7
- (_Bool)updateRateControlWithNetworkNotification:(struct tagVCNWConnectionNotification *)arg1;	// IMP=0x000000000045e691
- (_Bool)stop;	// IMP=0x000000000045e65b
- (_Bool)start;	// IMP=0x000000000045e5dd
- (void)configureRateControllerWithConfig:(const struct tagVCMediaStreamRateAdaptationConfig *)arg1;	// IMP=0x000000000045e3d8
- (void)dealloc;	// IMP=0x000000000045e342
- (id)initWithDelegate:(id)arg1 params:(const struct tagVCMediaStreamRateAdaptationParams *)arg2;	// IMP=0x000000000045e18f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

