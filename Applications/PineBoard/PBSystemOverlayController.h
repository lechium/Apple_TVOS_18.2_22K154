//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PBSystemOverlaySession;
@protocol PBSystemOverlayControllerDelegate, PBSystemUIPresenting;

@interface PBSystemOverlayController : NSObject
{
    struct {
        unsigned int delegateWillPresent:1;
        unsigned int delegateDidPresent:1;
        unsigned int delegateWillDismiss:1;
        unsigned int delegateDidDismiss:1;
        unsigned int delegateDidCancel:1;
    } _delegateFlags;	// 8 = 0x8
    _Bool _paused;	// 12 = 0xc
    _Bool _activeSessionIsHidden;	// 13 = 0xd
    NSString *_name;	// 16 = 0x10
    long long _layoutLevel;	// 24 = 0x18
    PBSystemOverlaySession *_activeSession;	// 32 = 0x20
    id <PBSystemUIPresenting> _presentationHandler;	// 40 = 0x28
    id <PBSystemOverlayControllerDelegate> _delegate;	// 48 = 0x30
    NSMutableArray *_allSessions;	// 56 = 0x38
    NSMutableArray *_pendingPresentationRequests;	// 64 = 0x40
    NSMutableArray *_presentationCompletionHandlers;	// 72 = 0x48
    NSMutableArray *_dismissalCompletionHandlers;	// 80 = 0x50
    PBSystemOverlaySession *_presentationCompletionHandlersActiveSession;	// 88 = 0x58
    PBSystemOverlaySession *_dismissalCompletionHandlersActiveSession;	// 96 = 0x60
}

+ (id)keyPathsForValuesAffectingHasActivePresentation;	// IMP=0x0020000000119bf7
- (void).cxx_destruct;	// IMP=0x002000000011a9a0
@property(readonly, nonatomic) _Bool activeSessionIsHidden; // @synthesize activeSessionIsHidden=_activeSessionIsHidden;
@property(readonly, nonatomic) PBSystemOverlaySession *dismissalCompletionHandlersActiveSession; // @synthesize dismissalCompletionHandlersActiveSession=_dismissalCompletionHandlersActiveSession;
@property(readonly, nonatomic) PBSystemOverlaySession *presentationCompletionHandlersActiveSession; // @synthesize presentationCompletionHandlersActiveSession=_presentationCompletionHandlersActiveSession;
@property(readonly, nonatomic) NSMutableArray *dismissalCompletionHandlers; // @synthesize dismissalCompletionHandlers=_dismissalCompletionHandlers;
@property(readonly, nonatomic) NSMutableArray *presentationCompletionHandlers; // @synthesize presentationCompletionHandlers=_presentationCompletionHandlers;
@property(readonly, nonatomic) NSMutableArray *pendingPresentationRequests; // @synthesize pendingPresentationRequests=_pendingPresentationRequests;
@property(readonly, nonatomic) NSMutableArray *allSessions; // @synthesize allSessions=_allSessions;
@property(readonly, nonatomic) __weak id <PBSystemOverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <PBSystemUIPresenting> presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(readonly, nonatomic) PBSystemOverlaySession *activeSession; // @synthesize activeSession=_activeSession;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_checkPendingRequests;	// IMP=0x001000000011a3c4
- (void)_callPendingDismissalCompletionHandlersForSession:(id)arg1 success:(_Bool)arg2;	// IMP=0x001000000011a239
- (void)_callPendingPresentationCompletionHandlersForSession:(id)arg1 success:(_Bool)arg2;	// IMP=0x001000000011a0ae
- (void)systemOverlaySessionDidInvalidate:(id)arg1;	// IMP=0x0010000000119f18
- (void)systemOverlaySessionDidCancel:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000119e64
- (void)systemOverlaySessionDidDismiss:(id)arg1;	// IMP=0x0010000000119ded
- (void)systemOverlaySessionWillDismiss:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000119d52
- (void)systemOverlaySessionDidPresent:(id)arg1;	// IMP=0x0010000000119cdb
- (void)systemOverlaySessionWillPresent:(id)arg1;	// IMP=0x0010000000119c7b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000119c34
- (void)resume;	// IMP=0x0010000000119a5e
- (void)pauseWithOptions:(long long)arg1;	// IMP=0x001000000011990d
@property(readonly, nonatomic) _Bool hasActivePresentation;
- (void)dismissWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000119602
- (void)presentWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000119106
- (id)initWithName:(id)arg1 layoutLevel:(long long)arg2 presentationHandler:(id)arg3 delegate:(id)arg4;	// IMP=0x0010000000118f24
- (id)init;	// IMP=0x0010000000118f16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

