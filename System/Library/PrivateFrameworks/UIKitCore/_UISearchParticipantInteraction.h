//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, UIWindowScene;
@protocol BSInvalidatable, UIInteractionEffect;

__attribute__((visibility("hidden")))
@interface _UISearchParticipantInteraction : NSObject
{
    id <BSInvalidatable> __searchParticipantToken;	// 8 = 0x8
    UIView *_view;	// 16 = 0x10
    UIWindowScene *__windowScene;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c58853
@property(nonatomic) __weak UIWindowScene *_windowScene; // @synthesize _windowScene=__windowScene;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) id <BSInvalidatable> _searchParticipantToken; // @synthesize _searchParticipantToken=__searchParticipantToken;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000000c587d8
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000c587ad
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000000c587a7
- (void)dealloc;	// IMP=0x0000000000c58769
- (void)_teardown;	// IMP=0x0000000000c586cb
- (void)_updateActiveSearchParticipationIfNeeded;	// IMP=0x0000000000c5850b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <UIInteractionEffect> interactionEffect;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<UIInteractionEffect>",?,&,N

@property(readonly) Class superclass;

@end

