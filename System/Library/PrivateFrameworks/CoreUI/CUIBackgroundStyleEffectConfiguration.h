//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CUIBackgroundStyleEffectConfiguration
{
    NSString *_backgroundType;	// 80 = 0x50
    _Bool _effectShowsValue;	// 88 = 0x58
    int _shouldRespectOutputBlending;	// 92 = 0x5c
}

@property(nonatomic) _Bool effectShowsValue; // @synthesize effectShowsValue=_effectShowsValue;
@property(copy, nonatomic) NSString *backgroundType; // @synthesize backgroundType=_backgroundType;
- (void)setSelectionType:(long long)arg1;	// IMP=0x0000000000051bb8
- (id)description;	// IMP=0x0000000000051b29
- (_Bool)shouldRespectOutputBlending;	// IMP=0x0000000000051a6b
- (void)setShouldRespectOutputBlending:(_Bool)arg1;	// IMP=0x0000000000051a5b
- (_Bool)shouldIgnoreForegroundColor;	// IMP=0x0000000000051992
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000051917
- (void)dealloc;	// IMP=0x00000000000518d5
- (id)init;	// IMP=0x0000000000051893

@end

