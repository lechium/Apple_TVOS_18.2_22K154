//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _VNCoreMLOperationPoints
{
    NSArray *_classLabels;	// 8 = 0x8
    NSArray *_precisionRecallCurves;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d75ac
- (_Bool)getClassificationMetrics:(id *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002d736a
- (id)initWithClassLabels:(id)arg1 precisionRecallCurves:(id)arg2;	// IMP=0x00000000002d72a3

@end

