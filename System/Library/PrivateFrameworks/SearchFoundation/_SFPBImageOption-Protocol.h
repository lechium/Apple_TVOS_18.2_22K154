//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBStringDictionary;

@protocol _SFPBImageOption <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBStringDictionary *options;
@property(copy, nonatomic) NSString *defaultValue;
@property(copy, nonatomic) NSString *name;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

