//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GKGameModel, GKRandom;

__attribute__((visibility("hidden")))
@interface GKHybridStrategist : NSObject
{
    void *_hybridStrategist;	// 8 = 0x8
}

- (id)bestMoveForActivePlayer;	// IMP=0x000000000003f940
- (_Bool)validateRandomSource;	// IMP=0x000000000003f8c0
- (_Bool)validateGameModel:(id)arg1;	// IMP=0x000000000003f760
- (void)dealloc;	// IMP=0x000000000003f710
- (id)init;	// IMP=0x000000000003f670
@property(nonatomic) unsigned long long maxLookAheadDepth;
@property(nonatomic) unsigned long long explorationParameter;
@property(nonatomic) unsigned long long budget;
@property(retain, nonatomic) id <GKRandom> randomSource;
@property(retain, nonatomic) id <GKGameModel> gameModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

