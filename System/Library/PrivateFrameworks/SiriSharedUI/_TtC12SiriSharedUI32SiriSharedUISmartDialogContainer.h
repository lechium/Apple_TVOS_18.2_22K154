//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIViewController;

@interface _TtC12SiriSharedUI32SiriSharedUISmartDialogContainer : NSObject
{
    MISSING_TYPE *smartDialogData;	// 8 = 0x8
    MISSING_TYPE *hostingController;	// 16 = 0x10
    MISSING_TYPE *popoverViewController;	// 56 = 0x38
    MISSING_TYPE *allowDrillingInAndOut;	// 64 = 0x40
    MISSING_TYPE *delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000053ab0
- (id)init;	// IMP=0x0000000000053a50
- (void)triggerSmartDialogAnimationWithDelay:(double)arg1;	// IMP=0x00000000000539f0
- (void)setInteractionDelegate:(id)arg1;	// IMP=0x00000000000539e0
- (void)setIsInAmbient:(_Bool)arg1;	// IMP=0x00000000000539d0
- (void)updateWithSmartDialogPluginView:(id)arg1;	// IMP=0x00000000000539c0
- (void)updateWithSnippetFrameInGlobal:(id)arg1;	// IMP=0x00000000000539b0
- (void)updateWithSmartDialogCard:(id)arg1;	// IMP=0x00000000000539a0
- (void)updateBodyWithText:(id)arg1;	// IMP=0x0000000000053990
- (void)updateHeaderWithText:(id)arg1 color:(id)arg2;	// IMP=0x0000000000053980
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000538f0
- (id)view;	// IMP=0x0000000000053820
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000537a0
@property(nonatomic, readonly) _Bool shouldBeHidden;
@property(nonatomic) _Bool allowDrillingInAndOut; // @synthesize allowDrillingInAndOut;
@property(nonatomic) __weak UIViewController *popoverViewController; // @synthesize popoverViewController;

@end

