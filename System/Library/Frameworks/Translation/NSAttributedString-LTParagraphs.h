//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@class NSArray;

@interface NSAttributedString (LTParagraphs)
+ (id)lt_attributedStringByJoiningComponents:(id)arg1 withAttributedString:(id)arg2;	// IMP=0x002000000003ce7f
+ (id)lt_attributedStringByJoiningComponents:(id)arg1 withString:(id)arg2;	// IMP=0x002000000003cddc
@property(readonly, nonatomic) NSArray *sentences;
@property(readonly, nonatomic) NSArray *paragraphs;
- (id)_ltAttributedStringByTrimmingCharactersInSet:(id)arg1;	// IMP=0x001000000003c50a
@property(readonly, copy, nonatomic) NSArray *lt_sentences;
@end

