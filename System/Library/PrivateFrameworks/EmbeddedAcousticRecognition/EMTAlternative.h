//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMTAlternativeDescription;

@interface EMTAlternative : NSObject
{
    EMTAlternativeDescription *_alternativeDescription;	// 8 = 0x8
    unsigned long long _translationPhraseIndex;	// 16 = 0x10
    unsigned long long _selectionSpanIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008c4810
@property(readonly, nonatomic) unsigned long long selectionSpanIndex; // @synthesize selectionSpanIndex=_selectionSpanIndex;
@property(readonly, nonatomic) unsigned long long translationPhraseIndex; // @synthesize translationPhraseIndex=_translationPhraseIndex;
@property(readonly, nonatomic) EMTAlternativeDescription *alternativeDescription; // @synthesize alternativeDescription=_alternativeDescription;
- (unsigned long long)hash;	// IMP=0x00000000008c47ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008c4696
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008c468b
- (id)initWithDescription:(id)arg1 translationPhraseIndex:(unsigned long long)arg2 selectionSpanIndex:(unsigned long long)arg3;	// IMP=0x00000000008c45f6

@end

