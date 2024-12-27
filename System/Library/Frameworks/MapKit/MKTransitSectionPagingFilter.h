//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKTransitSectionPagingFilter : NSObject
{
    _Bool _limitNumLines;	// 8 = 0x8
    unsigned long long _numLinesFallbackThreshold;	// 16 = 0x10
    unsigned long long _numLinesFallbackValue;	// 24 = 0x18
}

+ (unsigned long long)_kMaxLinesInSectionBeforePage;	// IMP=0x006000000005e660
+ (unsigned long long)_kNumLinesFallbackValue;	// IMP=0x006000000005e653
+ (id)defaultFilterForInactiveLines;	// IMP=0x006000000005e5d2
+ (id)defaultFilterForDepartures;	// IMP=0x006000000005e551
@property(nonatomic) unsigned long long numLinesFallbackValue; // @synthesize numLinesFallbackValue=_numLinesFallbackValue;
@property(nonatomic) unsigned long long numLinesFallbackThreshold; // @synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold;
@property(nonatomic) _Bool limitNumLines; // @synthesize limitNumLines=_limitNumLines;

@end

