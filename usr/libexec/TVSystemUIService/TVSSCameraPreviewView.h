//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class TVSSAVCapturePreviewView, TVSSSimpleCameraSession;

@interface TVSSCameraPreviewView : UIView
{
    TVSSAVCapturePreviewView *_avCapturePreviewView;	// 8 = 0x8
    UIView *_connectingPlaceholderView;	// 16 = 0x10
    TVSSSimpleCameraSession *_session;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000010cd10
@property(retain, nonatomic) TVSSSimpleCameraSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UIView *connectingPlaceholderView; // @synthesize connectingPlaceholderView=_connectingPlaceholderView;
@property(retain, nonatomic) TVSSAVCapturePreviewView *avCapturePreviewView; // @synthesize avCapturePreviewView=_avCapturePreviewView;
- (void)showPreview;	// IMP=0x001000000010cbc0
- (void)stop;	// IMP=0x001000000010cb80
- (void)start;	// IMP=0x001000000010cb40
- (void)willMoveToWindow:(id)arg1;	// IMP=0x001000000010caa0
- (id)initWithSession:(id)arg1;	// IMP=0x001000000010c0c0

@end

