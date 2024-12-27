//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFTableAlignmentSchema;

@protocol SFTableRowCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) _Bool alignRowsToHeader;
@property(nonatomic) int verticalAlign;
@property(nonatomic) _Bool reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier;
@property(nonatomic) _Bool isSubHeader;
@property(copy, nonatomic) NSArray *data;
@property(retain, nonatomic) SFTableAlignmentSchema *alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier;
@property(copy, nonatomic) NSArray *richData;
@property(copy, nonatomic) NSString *type;
@end

