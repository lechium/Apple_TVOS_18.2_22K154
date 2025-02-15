//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFImage-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFSymbolImage <SFImage>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int fillStyle;
@property(nonatomic) int secondaryColor;
@property(nonatomic) int primaryColor;
@property(nonatomic) int backgroundColor;
@property(nonatomic) _Bool punchThroughBackground;
@property(copy, nonatomic) NSString *symbolName;
@end

