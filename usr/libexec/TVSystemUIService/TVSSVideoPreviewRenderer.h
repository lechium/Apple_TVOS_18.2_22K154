//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPRenderer.h>

@class TVSSManualFramingView;

@interface TVSSVideoPreviewRenderer : TVSPRenderer
{
    TVSSManualFramingView *_framingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001e130
@property(retain, nonatomic) TVSSManualFramingView *framingView; // @synthesize framingView=_framingView;
- (_Bool)isFocusable;	// IMP=0x001000000001e0c0
- (void)configureContentView:(id)arg1;	// IMP=0x001000000001dcc0
- (_Bool)wantsFloatingContentView;	// IMP=0x001000000001dca0
- (id)initWithIdentifier:(id)arg1 framingView:(id)arg2;	// IMP=0x001000000001da20

@end

