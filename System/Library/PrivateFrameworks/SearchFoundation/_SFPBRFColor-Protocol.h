//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBRFOptionalFloat, _SFPBRFRGBValue;

@protocol _SFPBRFColor <NSObject>
@property(readonly, nonatomic) unsigned long long whichValue;
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBRFOptionalFloat *alpha;
@property(nonatomic) int name;
@property(retain, nonatomic) _SFPBRFRGBValue *rgb_value;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

