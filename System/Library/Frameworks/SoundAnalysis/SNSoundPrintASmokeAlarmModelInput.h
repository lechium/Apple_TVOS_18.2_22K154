//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrintASmokeAlarmModelInput : NSObject
{
    MLMultiArray *_input1;	// 8 = 0x8
    MLMultiArray *_stateIn;	// 16 = 0x10
    MLMultiArray *_thresholdedHistoryIn;	// 24 = 0x18
    MLMultiArray *_detectedHistoryIn;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000021bddf
@property(retain, nonatomic) MLMultiArray *detectedHistoryIn; // @synthesize detectedHistoryIn=_detectedHistoryIn;
@property(retain, nonatomic) MLMultiArray *thresholdedHistoryIn; // @synthesize thresholdedHistoryIn=_thresholdedHistoryIn;
@property(retain, nonatomic) MLMultiArray *stateIn; // @synthesize stateIn=_stateIn;
@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000021bbf7
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput1:(id)arg1 stateIn:(id)arg2 thresholdedHistoryIn:(id)arg3 detectedHistoryIn:(id)arg4;	// IMP=0x000000000021baef
- (id)initWithInput1:(id)arg1;	// IMP=0x000000000021bad5

@end

