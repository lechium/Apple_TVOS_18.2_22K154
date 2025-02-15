//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BSInvalidatable-Protocol.h"

@class FBScene, FBSceneSnapshot, FBSceneSnapshotContext, NSString, UIScenePresentationContext, UIView;
@protocol UIScenePresentation, UIScenePresenterObserver, UISceneSnapshotPresentation;

@protocol UIScenePresenter <BSInvalidatable>
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
@property(readonly, nonatomic, getter=isHosting) _Bool hosting;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
@property(readonly, copy, nonatomic) UIScenePresentationContext *presentationContext;
@property(readonly, nonatomic) __weak FBScene *scene;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)removeObserver:(id <UIScenePresenterObserver>)arg1;
- (void)addObserver:(id <UIScenePresenterObserver>)arg1;
- (UIView<UISceneSnapshotPresentation> *)newSnapshotPresentationView;
- (FBSceneSnapshotContext *)newSnapshotContext;
- (FBSceneSnapshot *)newSnapshot;
- (void)invalidate;
- (void)deactivate;
- (void)activate;
- (void)modifyPresentationContext:(void (^)(UIMutableScenePresentationContext *))arg1;
@end

