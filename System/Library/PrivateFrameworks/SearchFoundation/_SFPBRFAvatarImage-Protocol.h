//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol _SFPBRFAvatarImage <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int image_style;
@property(copy, nonatomic) NSArray *contact_ids;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)contact_idsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contact_idsCount;
- (void)addContact_ids:(NSString *)arg1;
- (void)clearContact_ids;
@end

