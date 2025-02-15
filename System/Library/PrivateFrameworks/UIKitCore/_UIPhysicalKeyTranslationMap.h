//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIPhysicalKeyTranslationMap : NSObject
{
    unsigned int _keyCode;	// 8 = 0x8
    unsigned int _keyAction;	// 12 = 0xc
    NSMapTable *_translationMap;	// 16 = 0x10
    long long _originalModifiers;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000001134958
+ (void)enumerateAllCombinationsOfModifiers:(long long)arg1 staticModifiers:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000001134286
- (void).cxx_destruct;	// IMP=0x0000000001134abb
@property(readonly) long long originalModifiers; // @synthesize originalModifiers=_originalModifiers;
@property(readonly) unsigned int keyAction; // @synthesize keyAction=_keyAction;
@property(readonly) unsigned int keyCode; // @synthesize keyCode=_keyCode;
@property(readonly, nonatomic) NSMapTable *translationMap; // @synthesize translationMap=_translationMap;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000011349f7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001134960
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000113489a
- (_Bool)areModifiers:(long long)arg1 minimalExcessOfMask:(long long)arg2 matching:(id)arg3 translator:(id)arg4 matchedModifierSubset:(long long *)arg5 betterMatchFound:(_Bool *)arg6;	// IMP=0x00000000011345cf
- (id)allTranslations;	// IMP=0x000000000113454a
- (void)populateAllCombinationsOfModifiers:(long long)arg1 translator:(id)arg2;	// IMP=0x00000000011343dc
- (void)setKeyTranslation:(id)arg1 modifiers:(long long)arg2;	// IMP=0x00000000011341d0
- (_Bool)keyTranslation:(id *)arg1 withModifiers:(long long)arg2;	// IMP=0x0000000001134127
- (id)keyTranslationWithModifiers:(long long)arg1 translator:(id)arg2;	// IMP=0x000000000113405e
- (id)initWithKeyCode:(unsigned short)arg1 action:(unsigned int)arg2 modifiers:(long long)arg3;	// IMP=0x0000000001133fc4

@end

