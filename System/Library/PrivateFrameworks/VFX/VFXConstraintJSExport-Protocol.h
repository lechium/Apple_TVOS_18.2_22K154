//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/JSExport-Protocol.h>

@class CAAnimation, NSArray, NSString;

@protocol VFXConstraintJSExport <JSExport>
@property(nonatomic, getter=isIncremental) _Bool incremental;
@property(nonatomic) float influenceFactor;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (id)copy;
@end

