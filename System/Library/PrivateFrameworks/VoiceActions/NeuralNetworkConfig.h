//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface NeuralNetworkConfig : NSObject
{
    MISSING_TYPE *modelPath;	// 8 = 0x8
    MISSING_TYPE *logThreshold;	// 24 = 0x18
    MISSING_TYPE *logMinimum;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000767d0
@property(nonatomic, readonly) NSString *description;
- (id)init;	// IMP=0x00000000000761c0
@property(nonatomic) float logMinimum; // @synthesize logMinimum;
@property(nonatomic) float logThreshold; // @synthesize logThreshold;
@property(nonatomic, copy) NSString *modelPath;

@end

