//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITapGestureRecognizer;
@protocol OBButtonTrayLinkAction;

__attribute__((visibility("hidden")))
@interface OBLinkableTemplateLabel
{
    UITapGestureRecognizer *_tapRecognizer;	// 8 = 0x8
    id <OBButtonTrayLinkAction> _tapAction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000031454
@property(retain, nonatomic) id <OBButtonTrayLinkAction> tapAction; // @synthesize tapAction=_tapAction;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
- (void)_setLinkText:(id)arg1 withFormat:(id)arg2 withAction:(id)arg3;	// IMP=0x0000000000031259
- (void)setInstructionsForUseTextWithAction:(CDUnknownBlockType)arg1;	// IMP=0x00000000000310eb
- (void)setLearnMoreURL:(id)arg1;	// IMP=0x0000000000030ecd
- (void)_linkTapped:(id)arg1;	// IMP=0x0000000000030e90
- (id)init;	// IMP=0x0000000000030dfc

@end

