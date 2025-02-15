//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionDynamicAccumulator
{
    NSArray *_lastResults;	// 120 = 0x78
    CDUnknownBlockType _dynamicAccumulatorIncreaseBlock;	// 128 = 0x80
}

+ (id)accumulatorWithName:(id)arg1 depthRange:(struct _NSRange)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000013f17c4
- (void).cxx_destruct;	// IMP=0x00000000013f1a67
@property(copy, nonatomic) CDUnknownBlockType dynamicAccumulatorIncreaseBlock; // @synthesize dynamicAccumulatorIncreaseBlock=_dynamicAccumulatorIncreaseBlock;
@property(readonly, nonatomic) NSArray *lastResults; // @synthesize lastResults=_lastResults;
- (void)enumerateAnalytics:(CDUnknownBlockType)arg1;	// IMP=0x00000000013f1a2e
- (void)increaseWithActions:(id)arg1;	// IMP=0x00000000013f1904

@end

