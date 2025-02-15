//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (MessagePartUtilities)
+ (id)__im_attributedStringWithFileTransfers:(id)arg1;	// IMP=0x008000000002592f
+ (void)__im_diffPartIndexesInEditedMessage:(id)arg1 previousMessage:(id)arg2 editedPartIndexes:(out id *)arg3 removedPartIndexes:(out id *)arg4;	// IMP=0x0080000000024b72
- (id)__im_attributedStringByReplacingRichCardGUID:(id)arg1 withUpdatedTransferGUID:(id)arg2;	// IMP=0x0010000000025d30
- (id)__im_attributedStringByReplacingFileTransferGUID:(id)arg1 withUpdatedTransferGUID:(id)arg2;	// IMP=0x0010000000025b3c
- (_Bool)__im_containsFileTransferGUID:(id)arg1;	// IMP=0x00100000000259b1
- (id)__im_attributedStringByAppendingFileTransfers:(id)arg1;	// IMP=0x00100000000256c0
- (id)__im_attributedStringByAssigningMessagePartNumbers;	// IMP=0x00100000000253c2
- (id)__im_messagePartIndexToRangeMap;	// IMP=0x0010000000025248
- (id)__im_rangeToMessagePartIndexMap;	// IMP=0x00100000000250ce
- (id)__im_messageTextByRemovingMessagePartIndex:(long long)arg1;	// IMP=0x0010000000024a7d
- (id)__im_messageTextByReplacingMessagePartIndex:(long long)arg1 withNewPartText:(id)arg2;	// IMP=0x001000000002489d
- (id)__im_messageTextByAddingMessagePart:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0010000000024780
- (id)__im_messagePartMatchingRange:(struct _NSRange)arg1;	// IMP=0x00100000000243f2
- (id)__im_messagePartMatchingPartIndex:(long long)arg1;	// IMP=0x00100000000240a3
- (long long)__im_insertionIndexForMessagePartBody:(id)arg1;	// IMP=0x0010000000023e2f
- (_Bool)__im_containsAttributedValue:(id)arg1;	// IMP=0x0010000000023bcb
- (id)__im_partDescriptorWithIndex:(long long)arg1 range:(struct _NSRange)arg2 totalPartCount:(unsigned long long)arg3;	// IMP=0x0010000000023b47
- (void)__im_visitMessageParts:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023965
- (id)__im_dataDetectedURLsFromAttributes;	// IMP=0x00100000000235d5
- (id)__im_attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x0010000000023541
- (id)__im_messagePartIndexes;	// IMP=0x00100000000233fc
- (unsigned long long)__im_countMessageParts;	// IMP=0x00100000000232fe
- (id)__im_attributedStringByReplacingAdaptiveImageGlyphsWithUnknownCharacterSymbol;	// IMP=0x001000000007b534
- (_Bool)__im_isOnlyAdaptiveImageGlyphFileTransfersAndWhitespaceUsingIsAdaptiveImageGlyphProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000007b239
- (_Bool)__im_isOnlyAdaptiveImageGlyphFileTransfersAndWhitespaceUsingFileTransferProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000007ae65
- (_Bool)__im_containsAdaptiveImageGlyphFileTransfersUsingFileTransferProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000007ad8c
- (_Bool)__im_containsAdaptiveImageGlyphs;	// IMP=0x001000000007aca7
- (id)__im_transferGUIDsInAttributedString;	// IMP=0x001000000007ab40
- (void)__im_enumerateAdaptiveImageGlyphFileTransfersUsingFileTransferProvider:(CDUnknownBlockType)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a989
- (void)__im_enumerateAdaptiveImageGlyphFileTransfersUsingIsAdaptiveImageGlyphProvider:(CDUnknownBlockType)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a7e4
- (id)__im_attributedStringByReplacingAdaptiveImageGlyphFileTransfersUsingIsAdaptiveImageGlyphProvider:(CDUnknownBlockType)arg1 replacementTextProvider:(CDUnknownBlockType)arg2 removedTransferGUIDsOut:(inout id *)arg3;	// IMP=0x001000000007a2c7
- (id)__im_attributedStringByReplacingAdaptiveImageGlyphFileTransfersUsingFileTransferProvider:(CDUnknownBlockType)arg1 replacementTextProvider:(CDUnknownBlockType)arg2 removedTransferGUIDsOut:(inout id *)arg3;	// IMP=0x001000000007a0b3
- (id)_localesSupportingTrim;	// IMP=0x0010000000087c6a
- (_Bool)_currentLocaleSupportsTrimming;	// IMP=0x0010000000087b35
- (id)_currentLocale;	// IMP=0x00100000000879dd
- (id)im_trimmedSummaryIfNeededForTapback;	// IMP=0x00100000000878b8
- (_Bool)isSingleCharacterString:(id)arg1;	// IMP=0x00100000000a6fd0
- (_Bool)__im_isRichCardsOrSuggestedReply;	// IMP=0x00100000000a6f87
- (_Bool)__im_isRichCard;	// IMP=0x00100000000a6f6b
- (id)__im_suggestedReplyPreviewText;	// IMP=0x00100000000a6dc1
- (id)__im_richCardsPreviewText;	// IMP=0x00100000000a6bde
- (_Bool)im_containsIMTextEffect;	// IMP=0x00100000000b555b
- (long long)im_activeTextEffectTypeInRange:(struct _NSRange)arg1 ignoreRangeLengthCheck:(_Bool)arg2;	// IMP=0x00100000000b51ae
@end

