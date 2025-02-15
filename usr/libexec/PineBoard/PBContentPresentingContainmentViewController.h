//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@protocol PBSystemOverlayContentDelegate;

@interface PBContentPresentingContainmentViewController : UIViewController
{
    _Bool _interruptible;	// 8 = 0x8
    _Bool _acceptsEventFocus;	// 9 = 0x9
    _Bool _expectsEventForwarding;	// 10 = 0xa
    _Bool _allowsInteraction;	// 11 = 0xb
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    UIViewController *_childViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001b567d
@property(readonly, nonatomic) _Bool allowsInteraction; // @synthesize allowsInteraction=_allowsInteraction;
@property(readonly, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b5550
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b53ca
- (id)preferredFocusEnvironments;	// IMP=0x00100000001b5350
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
@property(readonly, nonatomic) _Bool expectsEventForwarding; // @synthesize expectsEventForwarding=_expectsEventForwarding;
- (id)initWithChildViewController:(id)arg1 allowsInteraction:(_Bool)arg2 expectsEventForwarding:(_Bool)arg3;	// IMP=0x00100000001b52a4

@end

