//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VNDetectTextRectanglesRequestConfiguration
{
    _Bool _reportCharacterBoxes;	// 8 = 0x8
    _Bool _detectDiacritics;	// 9 = 0x9
    _Bool _minimizeFalseDetections;	// 10 = 0xa
    unsigned long long _algorithm;	// 16 = 0x10
    unsigned long long _minimumCharacterPixelHeight;	// 24 = 0x18
    NSString *_textRecognition;	// 32 = 0x20
    NSString *_additionalCharacters;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000243bdf
@property(copy, nonatomic) NSString *additionalCharacters; // @synthesize additionalCharacters=_additionalCharacters;
@property(copy, nonatomic) NSString *textRecognition; // @synthesize textRecognition=_textRecognition;
@property(nonatomic) _Bool minimizeFalseDetections; // @synthesize minimizeFalseDetections=_minimizeFalseDetections;
@property(nonatomic) _Bool detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property(nonatomic) unsigned long long minimumCharacterPixelHeight; // @synthesize minimumCharacterPixelHeight=_minimumCharacterPixelHeight;
@property(nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) _Bool reportCharacterBoxes; // @synthesize reportCharacterBoxes=_reportCharacterBoxes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002439df
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x0000000000243948

@end

