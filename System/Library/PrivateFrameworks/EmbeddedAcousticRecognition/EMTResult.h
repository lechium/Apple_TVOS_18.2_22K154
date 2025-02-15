//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSString;

@interface EMTResult : NSObject
{
    _Bool _lowConfidence;	// 8 = 0x8
    float _confidence;	// 12 = 0xc
    NSLocale *_locale;	// 16 = 0x10
    NSArray *_tokens;	// 24 = 0x18
    NSString *_metaInfo;	// 32 = 0x20
    NSString *_romanization;	// 40 = 0x28
    NSArray *_alternativeSelectionSpans;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000007d0446
@property(readonly, nonatomic) NSArray *alternativeSelectionSpans; // @synthesize alternativeSelectionSpans=_alternativeSelectionSpans;
@property(readonly, nonatomic) NSString *romanization; // @synthesize romanization=_romanization;
@property(readonly, nonatomic) NSString *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(readonly, nonatomic) _Bool lowConfidence; // @synthesize lowConfidence=_lowConfidence;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (unsigned long long)hash;	// IMP=0x00000000007d0269
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007d0159
- (id)description;	// IMP=0x00000000007cfe4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007cfe3f
- (id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(_Bool)arg4 metaInfo:(id)arg5 romanization:(id)arg6 alternativeSelectionSpans:(id)arg7;	// IMP=0x00000000007cfcc0

@end

