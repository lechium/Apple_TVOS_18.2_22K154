//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrintASmokeAlarmModelOutput : NSObject
{
    MLMultiArray *_input_1;	// 8 = 0x8
    MLMultiArray *_Confidence;	// 16 = 0x10
    MLMultiArray *_Detected;	// 24 = 0x18
    MLMultiArray *_thresholdedHistoryOut;	// 32 = 0x20
    MLMultiArray *_detectedHistoryOut;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000021c10a
@property(retain, nonatomic) MLMultiArray *detectedHistoryOut; // @synthesize detectedHistoryOut=_detectedHistoryOut;
@property(retain, nonatomic) MLMultiArray *thresholdedHistoryOut; // @synthesize thresholdedHistoryOut=_thresholdedHistoryOut;
@property(retain, nonatomic) MLMultiArray *Detected; // @synthesize Detected=_Detected;
@property(retain, nonatomic) MLMultiArray *Confidence; // @synthesize Confidence=_Confidence;
@property(retain, nonatomic) MLMultiArray *input_1; // @synthesize input_1=_input_1;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000021bf44
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput_1:(id)arg1 Confidence:(id)arg2 Detected:(id)arg3 thresholdedHistoryOut:(id)arg4 detectedHistoryOut:(id)arg5;	// IMP=0x000000000021be1d

@end

