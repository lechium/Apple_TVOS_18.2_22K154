//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CVNLPCaptionRuntimeReplacements : NSObject
{
    NSString *_replacementKey;	// 8 = 0x8
    NSString *_replacementValue;	// 16 = 0x10
    double _replacementProb;	// 24 = 0x18
    NSNumber *_genderOption;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000080bd4
@property(readonly, nonatomic) NSNumber *genderOption; // @synthesize genderOption=_genderOption;
@property(readonly, nonatomic) double replacementProb; // @synthesize replacementProb=_replacementProb;
@property(readonly, nonatomic) NSString *replacementValue; // @synthesize replacementValue=_replacementValue;
@property(readonly, nonatomic) NSString *replacementKey; // @synthesize replacementKey=_replacementKey;
- (id)initWithKey:(id)arg1 value:(id)arg2 prob:(double)arg3 genderOption:(id)arg4;	// IMP=0x0000000000080a5c

@end

