//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UITextInputSessionInsertionAction
{
    unsigned long long _options;	// 176 = 0xb0
    unsigned long long _withAlternativesCount;	// 184 = 0xb8
}

@property(nonatomic) unsigned long long withAlternativesCount; // @synthesize withAlternativesCount=_withAlternativesCount;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (long long)inputActionCount;	// IMP=0x00000000013f4d5d
- (_Bool)isCapableOfTextInsertion;	// IMP=0x00000000013f4d55
- (_Bool)changedContent;	// IMP=0x00000000013f4d4d
- (long long)mergeActionIfPossible:(id)arg1;	// IMP=0x00000000013f4a07

@end

