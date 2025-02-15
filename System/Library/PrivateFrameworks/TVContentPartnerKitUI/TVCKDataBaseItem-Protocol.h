//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/NSObject-Protocol.h>

@class NSString, TVCKDataClient;
@protocol NSCopying;

@protocol TVCKDataBaseItem <NSObject>
- (id)concreteValueForProperty:(NSString *)arg1;
- (_Bool)isDataItem;
- (TVCKDataClient *)dataClient;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2;
- (id)objectForKeyedSubscript:(NSString *)arg1;
- (id)valueForProperty:(NSString *)arg1;
@end

