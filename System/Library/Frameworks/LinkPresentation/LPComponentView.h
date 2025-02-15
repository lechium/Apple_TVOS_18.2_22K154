//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol LPComponentViewHost;

__attribute__((visibility("hidden")))
@interface LPComponentView : UIView
{
    id <LPComponentViewHost> _host;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a3a76
@property(readonly, nonatomic) __weak id <LPComponentViewHost> host; // @synthesize host=_host;
- (id)layoutExclusionsForView:(id)arg1;	// IMP=0x00000000000a3a50
- (_Bool)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg1;	// IMP=0x00000000000a3a48
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000a3a42
- (void)componentViewDidMoveToWindow;	// IMP=0x00000000000a3a3c
- (void)layoutComponentView;	// IMP=0x00000000000a3a36
- (void)didMoveToWindow;	// IMP=0x00000000000a3a24
- (void)layoutSubviews;	// IMP=0x00000000000a3980
- (_Bool)isFlipped;	// IMP=0x00000000000a3978
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000a38cf
- (id)init;	// IMP=0x00000000000a38c1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a38b3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a38a5

@end

