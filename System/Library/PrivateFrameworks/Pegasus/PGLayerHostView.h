//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle, _UIRemoteView;

__attribute__((visibility("hidden")))
@interface PGLayerHostView : UIView
{
    _UIRemoteView *_remoteView;	// 8 = 0x8
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;	// 16 = 0x10
    UIView *_sceneView;	// 24 = 0x18
    double _cornerRadiusScale;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000d684
@property(nonatomic) double cornerRadiusScale; // @synthesize cornerRadiusScale=_cornerRadiusScale;
@property(retain, nonatomic) UIView *sceneView; // @synthesize sceneView=_sceneView;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;	// IMP=0x000000000000d3f8
- (void)didMoveToWindow;	// IMP=0x000000000000d3e6
- (void)layoutSubviews;	// IMP=0x000000000000d36a
@property(retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
- (void)dealloc;	// IMP=0x000000000000d1c2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000d130

@end

