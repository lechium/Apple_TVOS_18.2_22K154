//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _SFPBRFTableContentColumnDefinition <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool should_drop_in_flow_layout;
@property(nonatomic) _Bool disable_truncation;
@property(nonatomic) int equal_size_column_group;
@property(nonatomic) int drop_order;
@property(nonatomic) int horizontal_alignment;
@property(nonatomic) float size_percent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

