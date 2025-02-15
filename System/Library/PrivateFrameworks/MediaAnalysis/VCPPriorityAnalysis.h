//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, VCPCNNFastGestureRecognition, VCPCNNHandKeypointsDetector, VCPCNNHandsDetector;

@interface VCPPriorityAnalysis : NSObject
{
    float _prevComputedScore;	// 8 = 0x8
    int _rotationAngle;	// 12 = 0xc
    int _inputHeight;	// 16 = 0x10
    int _inputWidth;	// 20 = 0x14
    int _frameCounter;	// 24 = 0x18
    int _dominantHand;	// 28 = 0x1c
    struct vector<int, std::allocator<int>> _handChiralityCounter;	// 32 = 0x20
    _Bool _handDetectedInPreviousFrame;	// 56 = 0x38
    struct Rotator *_rotator;	// 64 = 0x40
    VCPCNNHandsDetector *_handsDetector;	// 72 = 0x48
    VCPCNNHandKeypointsDetector *_handsKeypointsDetector;	// 80 = 0x50
    VCPCNNFastGestureRecognition *_fastGestureDetector;	// 88 = 0x58
    NSArray *_prevFrameHandKeypoint;	// 96 = 0x60
    NSDate *_prevTimeStampHandDetected;	// 104 = 0x68
    NSDate *_prevTimeSignLanguageDetected;	// 112 = 0x70
    NSDate *_frameEndTimeStamp;	// 120 = 0x78
    NSDate *_frameStartTimeStamp;	// 128 = 0x80
    NSMutableArray *_classIndexTracker;	// 136 = 0x88
    NSMutableArray *_handKeypointTracker;	// 144 = 0x90
    NSMutableArray *_leftHandKeypointTracker;	// 152 = 0x98
    NSMutableArray *_rightHandKeypointTracker;	// 160 = 0xa0
    double _singleFrameExecutionTime;	// 168 = 0xa8
    struct Scaler _scaler;	// 176 = 0xb0
    struct CGPoint _prevHandCenter;	// 208 = 0xd0
}

+ (id)priorityAnalysis;	// IMP=0x006000000030c4c8
- (id).cxx_construct;	// IMP=0x000000000030dcd6
- (void).cxx_destruct;	// IMP=0x000000000030dc03
- (int)calculatePriorityScore:(float *)arg1 ofPixelBuffer:(struct __CVBuffer *)arg2 withMetadata:(id)arg3;	// IMP=0x000000000030d834
- (int)fastSignLanguageDetection:(float *)arg1 ofPixelBuffer:(struct __CVBuffer *)arg2 withMetadata:(id)arg3;	// IMP=0x000000000030c900
- (int)addKeypointsToNSArray:(struct CGPoint *)arg1 keypointConfidence:(float [21])arg2 handBox:(id)arg3 keypointsArray:(id)arg4;	// IMP=0x000000000030c4e2
- (void)dealloc;	// IMP=0x000000000030c438
- (id)init;	// IMP=0x000000000030c044

@end

