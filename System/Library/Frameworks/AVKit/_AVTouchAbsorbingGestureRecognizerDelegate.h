//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTouchAbsorbingGestureRecognizer, NSPointerArray, NSString;

__attribute__((visibility("hidden")))
@interface _AVTouchAbsorbingGestureRecognizerDelegate : NSObject
{
    NSPointerArray *_superViewGestureRecognizers;	// 8 = 0x8
    _Bool _shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers;	// 16 = 0x10
    AVTouchAbsorbingGestureRecognizer *_owningGestureRecognizer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001642b4
@property(nonatomic) __weak AVTouchAbsorbingGestureRecognizer *owningGestureRecognizer; // @synthesize owningGestureRecognizer=_owningGestureRecognizer;
@property(nonatomic) _Bool shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers; // @synthesize shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers=_shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;	// IMP=0x00000000001641ba
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000000016416a
- (_Bool)_isSuperViewGesture:(id)arg1;	// IMP=0x0000000000163f76
- (void)cancelAllActiveSuperViewGestureRecognizersForEvent:(id)arg1;	// IMP=0x0000000000163f44
- (void)cancelAllActiveSuperVuewGestureRecognizersWithoutEvent;	// IMP=0x0000000000163f2b
- (void)_callForEveryActiveSuperViewGestureRecognizer:(CDUnknownBlockType)arg1;	// IMP=0x0000000000163e51
- (void)removeSuperviewGestureRecognizer:(id)arg1;	// IMP=0x0000000000163e0b
- (void)addSuperviewGestureRecognizer:(id)arg1;	// IMP=0x0000000000163db2
- (long long)_indexOfGestureRecognizer:(id)arg1;	// IMP=0x0000000000163d12
- (id)init;	// IMP=0x0000000000163cac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

