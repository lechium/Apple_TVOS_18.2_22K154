//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

@interface SNVGGishMusicModelInput : NSObject
{
    MLMultiArray *_input1;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000022189b
@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000002217f6
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput1:(id)arg1;	// IMP=0x000000000022176b

@end

