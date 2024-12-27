//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/NSObject-Protocol.h>

@protocol CalSearchDataSink <NSObject>
- (void)calSearchComplete:(id)arg1;
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray *)arg2 cachedDays:(struct __CFArray *)arg3 cachedDaysIndexes:(struct __CFArray *)arg4;

@optional
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;
- (_Bool)calSearchShouldStopSearching:(id)arg1;
@end

