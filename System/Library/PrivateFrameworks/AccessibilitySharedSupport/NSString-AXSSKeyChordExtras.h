//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (AXSSKeyChordExtras)
+ (struct USet *)_japaneseLetterSet;	// IMP=0x006000000002a866
+ (struct USet *)_ideographSet;	// IMP=0x006000000002a7e2
+ (struct USet *)_characterSetWithPattern:(id)arg1;	// IMP=0x006000000002a6e0
- (id)axss_keyChordKeyDisplayValueForUSKeyboard:(_Bool)arg1;	// IMP=0x0010000000009b4b
- (id)axss_stringByTrimmingToLength:(unsigned long long)arg1 encoding:(unsigned long long)arg2;	// IMP=0x0010000000022541
- (_Bool)_isJapanesePhrase;	// IMP=0x001000000002a923
- (_Bool)_isOnlyIdeographs;	// IMP=0x001000000002a8ea
@end

