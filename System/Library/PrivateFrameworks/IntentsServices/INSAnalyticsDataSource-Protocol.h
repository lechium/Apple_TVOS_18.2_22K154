//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntentsServices/NSObject-Protocol.h>

@class INSAnalytics, NSDictionary, NSError, SABaseCommand;

@protocol INSAnalyticsDataSource <NSObject>
- (NSDictionary *)analytics:(INSAnalytics *)arg1 contextDictionaryForError:(NSError *)arg2;
- (NSDictionary *)analytics:(INSAnalytics *)arg1 contextDictionaryForCommand:(SABaseCommand *)arg2;
@end

