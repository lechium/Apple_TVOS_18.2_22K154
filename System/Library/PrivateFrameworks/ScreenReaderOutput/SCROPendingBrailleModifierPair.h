//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCROPendingBrailleModifierPair
{
    NSString *_pendingBraille;	// 8 = 0x8
    NSArray *_modifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002afa9
@property(readonly, nonatomic) NSArray *modifiers; // @synthesize modifiers=_modifiers;
@property(readonly, nonatomic) NSString *pendingBraille; // @synthesize pendingBraille=_pendingBraille;
- (id)initWithPendingBraille:(id)arg1 modifiers:(id)arg2;	// IMP=0x000000000002aee7

@end

