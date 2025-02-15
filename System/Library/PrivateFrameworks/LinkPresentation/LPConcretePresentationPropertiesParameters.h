//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPCaptionButtonPresentationProperties, NSAttributedString, UIColor;

__attribute__((visibility("hidden")))
@interface LPConcretePresentationPropertiesParameters : NSObject
{
    _Bool _usesComputedPresentationProperties;	// 8 = 0x8
    _Bool _inComposeContext;	// 9 = 0x9
    _Bool _inSenderContext;	// 10 = 0xa
    unsigned long long _effectiveSizeClass;	// 16 = 0x10
    UIColor *_overrideSubtitleButtonColor;	// 24 = 0x18
    UIColor *_overrideActionButtonColor;	// 32 = 0x20
    NSAttributedString *_overrideSubtitle;	// 40 = 0x28
    LPCaptionButtonPresentationProperties *_captionButton;	// 48 = 0x30
    LPCaptionButtonPresentationProperties *_captionTextButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000a90d4
@property(readonly, nonatomic) LPCaptionButtonPresentationProperties *captionTextButton; // @synthesize captionTextButton=_captionTextButton;
@property(readonly, nonatomic) LPCaptionButtonPresentationProperties *captionButton; // @synthesize captionButton=_captionButton;
@property(readonly, nonatomic) NSAttributedString *overrideSubtitle; // @synthesize overrideSubtitle=_overrideSubtitle;
@property(readonly, nonatomic) UIColor *overrideActionButtonColor; // @synthesize overrideActionButtonColor=_overrideActionButtonColor;
@property(readonly, nonatomic) UIColor *overrideSubtitleButtonColor; // @synthesize overrideSubtitleButtonColor=_overrideSubtitleButtonColor;
@property(readonly, nonatomic) unsigned long long effectiveSizeClass; // @synthesize effectiveSizeClass=_effectiveSizeClass;
@property(readonly, nonatomic) _Bool inSenderContext; // @synthesize inSenderContext=_inSenderContext;
@property(readonly, nonatomic) _Bool inComposeContext; // @synthesize inComposeContext=_inComposeContext;
@property(readonly, nonatomic) _Bool usesComputedPresentationProperties; // @synthesize usesComputedPresentationProperties=_usesComputedPresentationProperties;
- (id)initWithUsesComputedPresentationProperties:(_Bool)arg1 inComposeContext:(_Bool)arg2 inSenderContext:(_Bool)arg3 effectiveSizeClass:(unsigned long long)arg4 overrideSubtitleButtonColor:(id)arg5 overrideActionButtonColor:(id)arg6 overrideSubtitle:(id)arg7 captionButton:(id)arg8 captionTextButton:(id)arg9;	// IMP=0x00000000000a8f0d

@end

