//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVPlayerLayer, NSString;

__attribute__((visibility("hidden")))
@interface _MPCShimVideoView : UIView
{
    _Bool readyForDisplay;	// 8 = 0x8
    NSString *videoGravity;	// 16 = 0x10
    AVPlayerLayer *_playerLayer;	// 24 = 0x18
    struct CGSize preferredContentSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002019b8
@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay;
@property(readonly, nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize;
- (id)initWithPlayerLayer:(id)arg1;	// IMP=0x00000000002018ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

