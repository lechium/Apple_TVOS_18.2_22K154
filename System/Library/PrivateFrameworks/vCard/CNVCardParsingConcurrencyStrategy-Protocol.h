//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <vCard/NSObject-Protocol.h>

@class CNVCardReadingOptions, NSArray, NSData;
@protocol CNVCardParsedResultBuilderFactory;

@protocol CNVCardParsingConcurrencyStrategy <NSObject>
- (NSArray *)parseData:(NSData *)arg1 options:(CNVCardReadingOptions *)arg2 resultFactory:(id <CNVCardParsedResultBuilderFactory>)arg3;
@end

