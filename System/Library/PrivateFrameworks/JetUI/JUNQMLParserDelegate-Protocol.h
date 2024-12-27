//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <JetUI/NSObject-Protocol.h>

@class JUNQMLParser, NSDictionary, NSError, NSString;

@protocol JUNQMLParserDelegate <NSObject>
- (void)parser:(JUNQMLParser *)arg1 didEndListOfStyle:(unsigned long long)arg2;
- (void)parserDidEndListElement:(JUNQMLParser *)arg1;
- (void)parserDidStartListElement:(JUNQMLParser *)arg1;
- (void)parser:(JUNQMLParser *)arg1 didStartListOfStyle:(unsigned long long)arg2;
- (void)parserDidFindNewline:(JUNQMLParser *)arg1;
- (void)parser:(JUNQMLParser *)arg1 didFindCharacters:(NSString *)arg2;
- (void)parser:(JUNQMLParser *)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(JUNQMLParser *)arg1 didStartElement:(unsigned long long)arg2 attributes:(NSDictionary *)arg3;
- (void)parser:(JUNQMLParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parserDidEndDocument:(JUNQMLParser *)arg1;
- (void)parserDidStartDocument:(JUNQMLParser *)arg1;
@end

