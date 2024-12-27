//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPUFoundation/NSObject-Protocol.h>

@class MPUHTMLParser, NSDictionary, NSString;
@protocol MPUHTMLParserState;

@protocol MPUHTMLParserDelegate <NSObject>

@optional
- (NSString *)parser:(MPUHTMLParser *)arg1 prependStringForTagName:(NSString *)arg2;
- (NSDictionary *)parser:(MPUHTMLParser *)arg1 attributesForTagName:(NSString *)arg2 tagAttributes:(NSDictionary *)arg3 currentState:(id <MPUHTMLParserState>)arg4;
- (NSDictionary *)defaultAttributesForParser:(MPUHTMLParser *)arg1;
@end

