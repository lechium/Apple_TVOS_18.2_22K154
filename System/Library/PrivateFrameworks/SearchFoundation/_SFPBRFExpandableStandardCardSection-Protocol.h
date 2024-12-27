//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBRFExpandingComponentContent, _SFPBRFSummaryItemStandardCardSection;

@protocol _SFPBRFExpandableStandardCardSection <NSObject>
@property(readonly, nonatomic) unsigned long long whichPrimary_Component;
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *expanding_component_contents;
@property(retain, nonatomic) _SFPBRFSummaryItemStandardCardSection *summary_item_standard_card_section;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBRFExpandingComponentContent *)expanding_component_contentAtIndex:(unsigned long long)arg1;
- (unsigned long long)expanding_component_contentCount;
- (void)addExpanding_component_content:(_SFPBRFExpandingComponentContent *)arg1;
- (void)clearExpanding_component_content;
@end

