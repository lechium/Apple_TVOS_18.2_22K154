//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, VOTBrailleGestureDataRepository;
@protocol VOTBrailleGesturePatternRecognitionEngineDelegate;

@interface VOTBrailleGesturePatternRecognitionEngine : NSObject
{
    VOTBrailleGestureDataRepository *_repository;	// 8 = 0x8
    NSMutableArray *_lastBrailleGestures;	// 16 = 0x10
    long long _typingMode;	// 24 = 0x18
    struct CGSize _keyboardSize;	// 32 = 0x20
    _Bool _shouldUseEightDotBraille;	// 48 = 0x30
    _Bool _shouldReverseDots;	// 49 = 0x31
    id <VOTBrailleGesturePatternRecognitionEngineDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000118154
@property(nonatomic) __weak id <VOTBrailleGesturePatternRecognitionEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_averageOfOldFloat:(double)arg1 newFloat:(double)arg2 dataCount:(unsigned long long)arg3;	// IMP=0x00100000001180db
- (struct CGPoint)_averageOfOldPoint:(struct CGPoint)arg1 newPoint:(struct CGPoint)arg2 dataCount:(unsigned long long)arg3;	// IMP=0x0010000000118075
- (id)_averagePointValueWithDataCount:(unsigned long long)arg1 currentPointValue:(id)arg2 newPointValue:(id)arg3;	// IMP=0x0010000000117fba
- (_Bool)_bothObjectsAreNilOrBothAreNonNil:(id)arg1 object:(id)arg2;	// IMP=0x0010000000117f9c
- (_Bool)_halfPattern:(id)arg1 hasSameDotsAsHalfPattern:(id)arg2;	// IMP=0x0010000000117e0a
- (id)_sortTouches:(id)arg1 fromTopToBottomForSide:(unsigned long long)arg2;	// IMP=0x0010000000117cd7
- (double)_distanceBetweenPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;	// IMP=0x0010000000117cb9
- (id)_orderedTouchesFromHalfPattern:(id)arg1;	// IMP=0x0010000000117af7
- (double)_totalDistanceBetweenCorrespondingPointsInTouches:(id)arg1 andTouches:(id)arg2;	// IMP=0x0010000000117993
- (id)_halfPatternFromOrderedTouches:(id)arg1 correspondingHalfPattern:(id)arg2;	// IMP=0x0010000000117780
- (id)_closestHalfPatternForOrderedTouches:(id)arg1 possibleMatches:(id)arg2 side:(unsigned long long)arg3;	// IMP=0x001000000011746c
- (id)_halfPatternFromTouches:(id)arg1 side:(unsigned long long)arg2;	// IMP=0x001000000011736f
- (unsigned short)printBrailleCharacterFromBraillePattern:(id)arg1;	// IMP=0x0010000000116e17
- (void)_populateLeftTouchPoints:(id)arg1 rightTouchPoints:(id)arg2 fromTouchPoints:(id)arg3;	// IMP=0x0010000000116c1d
- (_Bool)areDotNumberPositionsCalibrated;	// IMP=0x0010000000116c07
@property(readonly, nonatomic) _Bool shouldReverseDots;
@property(readonly, nonatomic) _Bool shouldUseEightDotBraille;
- (void)calibrateWithTouchPoints:(id)arg1;	// IMP=0x00100000001166fb
- (id)dotNumberPositions;	// IMP=0x00100000001166e5
- (void)setTypingMode:(long long)arg1 keyboardSize:(struct CGSize)arg2 shouldUseEightDotBraille:(_Bool)arg3 shouldReverseDots:(_Bool)arg4;	// IMP=0x00100000001165fa
- (void)savePersistentGestureData;	// IMP=0x00100000001165e4
- (void)resetLastGestures;	// IMP=0x00100000001165ce
- (MISSING_TYPE *)unlearnLastGesture;	// IMP=0x001000000011654c
- (id)printBrailleForTouchPoints:(id)arg1 shouldLearn:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000116318
- (id)init;	// IMP=0x00100000001161ca

@end

