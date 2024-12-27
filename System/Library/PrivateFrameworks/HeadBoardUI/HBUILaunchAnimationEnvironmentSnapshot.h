//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface HBUILaunchAnimationEnvironmentSnapshot : NSObject
{
    NSHashTable *_animationEnvironments;	// 8 = 0x8
}

+ (id)snapshotWithRootEnvironment:(id)arg1 animationContext:(id)arg2;	// IMP=0x006000000000c04f
- (void).cxx_destruct;	// IMP=0x000000000000c520
@property(readonly, nonatomic) NSHashTable *animationEnvironments; // @synthesize animationEnvironments=_animationEnvironments;
- (id)launchAnimationsWithContext:(id)arg1;	// IMP=0x000000000000c325
- (void)didFinishLaunchAnimationWithContext:(id)arg1;	// IMP=0x000000000000c1be
- (void)willBeginLaunchAnimationWithContext:(id)arg1;	// IMP=0x000000000000c057
- (id)debugDescription;	// IMP=0x000000000000bf9b
- (id)initWithAnimationEnvironment:(id)arg1;	// IMP=0x000000000000bd84
- (id)_initWithAnimationEnvironments:(id)arg1;	// IMP=0x000000000000bd19

@end

