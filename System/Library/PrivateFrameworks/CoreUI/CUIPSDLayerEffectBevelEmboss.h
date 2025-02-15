//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIColor;

@interface CUIPSDLayerEffectBevelEmboss
{
    unsigned long long _blurSize;	// 24 = 0x18
    unsigned long long _softenSize;	// 32 = 0x20
    short _angle;	// 40 = 0x28
    unsigned long long _altitude;	// 48 = 0x30
    unsigned int _direction;	// 56 = 0x38
    int _highlightBlendMode;	// 60 = 0x3c
    CUIColor *_highlightColor;	// 64 = 0x40
    double _highlightOpacity;	// 72 = 0x48
    int _shadowBlendMode;	// 80 = 0x50
    CUIColor *_shadowColor;	// 88 = 0x58
    double _shadowOpacity;	// 96 = 0x60
}

@property double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain) CUIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property int shadowBlendMode; // @synthesize shadowBlendMode=_shadowBlendMode;
@property double highlightOpacity; // @synthesize highlightOpacity=_highlightOpacity;
@property(retain) CUIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property int highlightBlendMode; // @synthesize highlightBlendMode=_highlightBlendMode;
@property unsigned int direction; // @synthesize direction=_direction;
@property unsigned long long altitude; // @synthesize altitude=_altitude;
@property short angle; // @synthesize angle=_angle;
@property unsigned long long softenSize; // @synthesize softenSize=_softenSize;
@property unsigned long long blurSize; // @synthesize blurSize=_blurSize;
- (void)dealloc;	// IMP=0x00000000000ad3dc
- (id)description;	// IMP=0x00000000000ad2d2
- (unsigned int)effectType;	// IMP=0x00000000000ad2c7
- (id)init;	// IMP=0x00000000000ad274
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000004e888
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e51b

@end

