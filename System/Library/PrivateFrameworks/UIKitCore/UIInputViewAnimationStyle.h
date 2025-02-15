//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject
{
    _Bool animated;	// 8 = 0x8
    double duration;	// 16 = 0x10
    unsigned long long extraOptions;	// 24 = 0x18
    _Bool interactivelyCancelled;	// 32 = 0x20
    _Bool _isLegacy;	// 33 = 0x21
    _Bool force;	// 34 = 0x22
    _Bool _dontMerge;	// 35 = 0x23
    _Bool _forAssertion;	// 36 = 0x24
    NSMutableArray *_propertyAnimators;	// 40 = 0x28
}

+ (id)animationStyleAnimated:(_Bool)arg1 duration:(double)arg2;	// IMP=0x0010000000a81043
+ (id)animationStyleDefault;	// IMP=0x0010000000a81024
+ (id)animationStyleImmediate;	// IMP=0x0010000000a8100d
- (void).cxx_destruct;	// IMP=0x0000000000a81e7d
@property(nonatomic) _Bool forAssertion; // @synthesize forAssertion=_forAssertion;
@property(retain, nonatomic) NSMutableArray *propertyAnimators; // @synthesize propertyAnimators=_propertyAnimators;
@property(nonatomic) _Bool dontMerge; // @synthesize dontMerge=_dontMerge;
@property(nonatomic) _Bool interactivelyCancelled; // @synthesize interactivelyCancelled;
@property(nonatomic) unsigned long long extraOptions; // @synthesize extraOptions;
@property(nonatomic) _Bool force; // @synthesize force;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) _Bool animated; // @synthesize animated;
@property(readonly, nonatomic) _Bool canTakeSnapshot;
@property(readonly, nonatomic) _Bool canDismissWithScrollView;
- (id)endPlacementForInputViewSet:(id)arg1 windowScene:(id)arg2;	// IMP=0x0000000000a81db5
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 windowScene:(id)arg3;	// IMP=0x0000000000a81763
- (id)endPlacementForInputViewSet:(id)arg1;	// IMP=0x0000000000a8174f
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2;	// IMP=0x0000000000a8173a
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;	// IMP=0x0000000000a81721
- (void)removePropertyAnimators;	// IMP=0x0000000000a816e4
- (void)cancelInterruptibleAnimations;	// IMP=0x0000000000a81567
- (void)addAnimationToCurrentAnimations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a81422
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;	// IMP=0x0000000000a811f5
@property(readonly, nonatomic) _Bool isAnimationCompleted;
- (id)description;	// IMP=0x0000000000a810a8
- (id)legacyAnimationCopy;	// IMP=0x0000000000a80fef
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a80f2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a80e68

@end

