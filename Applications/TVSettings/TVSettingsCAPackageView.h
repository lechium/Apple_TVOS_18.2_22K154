//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer, CAStateController, NSArray, NSDictionary, NSObject, NSString;
@protocol CAStateControllerDelegate;

@interface TVSettingsCAPackageView : UIView
{
    CAStateController *_stateController;	// 8 = 0x8
    NSObject<CAStateControllerDelegate> *_stateControllerDelegate;	// 16 = 0x10
    CALayer *_rootLayer;	// 24 = 0x18
    struct CGSize _originalSize;	// 32 = 0x20
    NSString *_pendingCompletionToState;	// 48 = 0x30
    NSString *_pendingCompletionFromState;	// 56 = 0x38
    CDUnknownBlockType _pendingCompletion;	// 64 = 0x40
    NSDictionary *_publishedObjectMap;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000004651c
@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
- (void)_clearPendingCompletion;	// IMP=0x00100000000464f2
- (void)_setPendingCompletion:(CDUnknownBlockType)arg1 fromState:(id)arg2 toState:(id)arg3;	// IMP=0x0010000000046413
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;	// IMP=0x00100000000462d4
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;	// IMP=0x001000000004623b
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;	// IMP=0x00100000000461b4
- (void)layoutSubviews;	// IMP=0x0010000000046085
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000004606d
@property(nonatomic) __weak NSObject<CAStateControllerDelegate> *stateControllerDelegate;
- (_Bool)setState:(id)arg1 onLayer:(id)arg2 animated:(_Bool)arg3 transitionSpeed:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000045e4b
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2 transitionSpeed:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000045e25
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000045dfe
- (_Bool)setState:(id)arg1;	// IMP=0x0010000000045de7
@property(readonly, copy, nonatomic) NSArray *publishedObjectNames;
- (id)publishedObjectWithName:(id)arg1;	// IMP=0x0010000000045dad
- (id)initWithPackageName:(id)arg1 type:(id)arg2 inBundle:(id)arg3;	// IMP=0x0010000000045874

@end

