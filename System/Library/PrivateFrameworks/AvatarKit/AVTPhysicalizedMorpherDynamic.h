//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SCNMorpher, SCNNode;

__attribute__((visibility("hidden")))
@interface AVTPhysicalizedMorpherDynamic : NSObject
{
    float _simulationFactor;	// 8 = 0x8
    SCNNode *_referenceNode;	// 16 = 0x10
    SCNNode *_drivingNode;	// 24 = 0x18
    SCNMorpher *_writeMorpher;	// 32 = 0x20
    unsigned long long _forwardMorphTargetIndex;	// 40 = 0x28
    unsigned long long _backwardMorphTargetIndex;	// 48 = 0x30
    unsigned long long _leftwardMorphTargetIndex;	// 56 = 0x38
    unsigned long long _rightwardMorphTargetIndex;	// 64 = 0x40
    unsigned long long _upwardMorphTargetIndex;	// 72 = 0x48
    unsigned long long _downwardMorphTargetIndex;	// 80 = 0x50
    SCNNode *_extraSimulationFactorReadMorpherNode;	// 88 = 0x58
    unsigned long long _extraSimulationFactorTargetIndex;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000000e591
- (_Bool)affectsNode:(id)arg1;	// IMP=0x000000000000e557
- (void)resetTarget;	// IMP=0x000000000000e48c
- (void)evaluateAtTime:(double)arg1 physicsController:(id)arg2;	// IMP=0x000000000000e26a
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

