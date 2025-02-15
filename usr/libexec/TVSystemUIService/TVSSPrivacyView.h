//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class TVSSLocationIndicatorView, TVSSRecordingIndicatorView, UIStackView;

@interface TVSSPrivacyView : UIView
{
    long long _axis;	// 8 = 0x8
    TVSSRecordingIndicatorView *_recordingIndicatorView;	// 16 = 0x10
    TVSSLocationIndicatorView *_locationIndicatorView;	// 24 = 0x18
    UIStackView *_stackView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000009fb40
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) TVSSLocationIndicatorView *locationIndicatorView; // @synthesize locationIndicatorView=_locationIndicatorView;
@property(readonly, nonatomic) TVSSRecordingIndicatorView *recordingIndicatorView; // @synthesize recordingIndicatorView=_recordingIndicatorView;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void)_updateStackViewLayout;	// IMP=0x001000000009f9a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000009f440

@end

