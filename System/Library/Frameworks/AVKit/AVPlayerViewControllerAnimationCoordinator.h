//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerViewControllerAnimationCoordinator : NSObject
{
    NSMutableArray *_animations;	// 8 = 0x8
    NSMutableArray *_completions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007954b
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(readonly, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
- (void)didFinishAnimations:(_Bool)arg1;	// IMP=0x0000000000079393
- (void)performCoordinatedAnimations;	// IMP=0x00000000000791fb
- (void)addCoordinatedAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000790c0
- (id)init;	// IMP=0x0000000000079023

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

