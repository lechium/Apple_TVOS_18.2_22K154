//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet, NSString, _UIStatusBarIdentifier;

__attribute__((visibility("hidden")))
@interface _UIStatusBarAnimation : NSObject
{
    _Bool _delaysAnimatingItems;	// 8 = 0x8
    _Bool _delaysDependentItems;	// 9 = 0x9
    _Bool _enabled;	// 10 = 0xa
    long long _priority;	// 16 = 0x10
    _UIStatusBarIdentifier *_displayItemIdentifier;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_exclusivityGroupIdentifier;	// 40 = 0x28
    long long _type;	// 48 = 0x30
    CDUnknownBlockType _prepareBlock;	// 56 = 0x38
    NSSet *_delayedItemIdentifiers;	// 64 = 0x40
    NSSet *_delayedDisplayItemPlacements;	// 72 = 0x48
    NSMutableArray *_subAnimations;	// 80 = 0x50
    _UIStatusBarAnimation *_parentAnimation;	// 88 = 0x58
    double _timeout;	// 96 = 0x60
    CDUnknownBlockType _animationBlock;	// 104 = 0x68
    CDUnknownBlockType _timeoutBlock;	// 112 = 0x70
    NSMutableArray *_completionHandlers;	// 120 = 0x78
}

+ (void)_addAnimations:(id)arg1 toDispatchGroup:(id)arg2;	// IMP=0x001000000123de9b
+ (void)_addAnimations:(id)arg1 toPreparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 visitedDisplayItemIdentifiers:(id)arg4;	// IMP=0x001000000123d3b5
+ (void)prepareAnimations:(id)arg1 forStatusBar:(id)arg2;	// IMP=0x001000000123d198
+ (id)animationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000123ce5b
+ (void)initialize;	// IMP=0x001000000123ce04
- (void).cxx_destruct;	// IMP=0x000000000123f5f0
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(copy, nonatomic) CDUnknownBlockType timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;
@property(copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) __weak _UIStatusBarAnimation *parentAnimation; // @synthesize parentAnimation=_parentAnimation;
@property(retain, nonatomic) NSMutableArray *subAnimations; // @synthesize subAnimations=_subAnimations;
@property(nonatomic) _Bool delaysDependentItems; // @synthesize delaysDependentItems=_delaysDependentItems;
@property(nonatomic) _Bool delaysAnimatingItems; // @synthesize delaysAnimatingItems=_delaysAnimatingItems;
@property(copy, nonatomic) NSSet *delayedDisplayItemPlacements; // @synthesize delayedDisplayItemPlacements=_delayedDisplayItemPlacements;
@property(copy, nonatomic) NSSet *delayedItemIdentifiers; // @synthesize delayedItemIdentifiers=_delayedItemIdentifiers;
@property(copy, nonatomic) CDUnknownBlockType prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *exclusivityGroupIdentifier; // @synthesize exclusivityGroupIdentifier=_exclusivityGroupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) _UIStatusBarIdentifier *displayItemIdentifier; // @synthesize displayItemIdentifier=_displayItemIdentifier;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (id)description;	// IMP=0x000000000123f2a9
- (id)_dependentItemIdentifiersEnabledOnly:(_Bool)arg1;	// IMP=0x000000000123f069
@property(readonly, nonatomic) NSSet *effectiveDelayedItemIdentifiers;
- (void)addSubAnimation:(id)arg1 forDisplayItemWithIdentifier:(id)arg2;	// IMP=0x000000000123eaea
- (void)cancel;	// IMP=0x000000000123e8da
- (void)addTimeout:(double)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000123e8b0
- (void)performForStatusBar:(id)arg1;	// IMP=0x000000000123e0ea
- (void)_prepareForStatusBar:(id)arg1 preparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3;	// IMP=0x000000000123d8cd
- (void)addTotalCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000123d0ca
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000123d03d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000123cf20

@end

