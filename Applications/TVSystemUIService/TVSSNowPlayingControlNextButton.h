//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSTimer;

@interface TVSSNowPlayingControlNextButton
{
    unsigned long long _packageState;	// 8 = 0x8
    NSTimer *_repeatTimer;	// 16 = 0x10
    NSArray *_loadedTintableLayers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000060920
- (id)accessibilityIdentifier;	// IMP=0x0010000000060900
- (void)_advanceAnimationState;	// IMP=0x0010000000060830
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00100000000605c0
- (id)tintableLayers;	// IMP=0x00100000000600f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000005fde0

@end

