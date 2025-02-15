//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelOutput : NSObject
{
    MLMultiArray *_f_score_act_sigmoid_output;	// 8 = 0x8
    MLMultiArray *_geometry_output;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003484e
@property(retain, nonatomic) MLMultiArray *geometry_output; // @synthesize geometry_output=_geometry_output;
@property(retain, nonatomic) MLMultiArray *f_score_act_sigmoid_output; // @synthesize f_score_act_sigmoid_output=_f_score_act_sigmoid_output;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000003477d
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithF_score_act_sigmoid_output:(id)arg1 geometry_output:(id)arg2;	// IMP=0x00000000000346eb

@end

