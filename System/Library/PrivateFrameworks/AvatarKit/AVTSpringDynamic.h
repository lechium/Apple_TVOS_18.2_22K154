//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTMassSpringDamperSystem, MISSING_TYPE, NSString, SCNNode;

__attribute__((visibility("hidden")))
@interface AVTSpringDynamic : NSObject
{
    SCNNode *_dynamicNode;	// 8 = 0x8
    SCNNode *_dynamicPresentationNode;	// 16 = 0x10
    SCNNode *_dynamicParentPresentationNode;	// 24 = 0x18
    SCNNode *_referencePresentationNode;	// 32 = 0x20
    MISSING_TYPE *_restPosition;	// 48 = 0x30
    _Bool _hasMaxOffsets;	// 64 = 0x40
    MISSING_TYPE *_maxOffsets;	// 80 = 0x50
    AVTMassSpringDamperSystem *_system;	// 96 = 0x60
    double _beginTime;	// 104 = 0x68
    MISSING_TYPE *_beginVelocity;	// 112 = 0x70
    MISSING_TYPE *_beginWorldPosition;	// 128 = 0x80
    MISSING_TYPE *_endWorldPosition;	// 144 = 0x90
    double _lastEvaluationTime;	// 160 = 0xa0
    MISSING_TYPE *_lastWorldPosition;	// 176 = 0xb0
    _Bool _shouldReset;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000000fff3
- (_Bool)affectsNode:(id)arg1;	// IMP=0x000000000000ffe6
- (void)resetTarget;	// IMP=0x000000000000ffab
- (void)evaluateAtTime:(double)arg1 physicsController:(id)arg2;	// IMP=0x000000000000fd89
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

