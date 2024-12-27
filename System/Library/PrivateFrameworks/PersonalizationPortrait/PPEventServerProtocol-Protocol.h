//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSDate, NSString, PPEventQuery;

@protocol PPEventServerProtocol <PPFeedbackAccepting>
- (void)sendRTCLogsWithWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)interactionSummaryMetricsWithQueryId:(unsigned long long)arg1;
- (void)logEventInteractionForEventWithEventIdentifier:(NSString *)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)scoredEventsWithQuery:(PPEventQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)eventHighlightsFrom:(NSDate *)arg1 to:(NSDate *)arg2 options:(int)arg3 queryId:(unsigned long long)arg4;
- (void)resolveEventNameRecordChanges:(NSArray *)arg1 client:(NSString *)arg2 queryId:(unsigned long long)arg3;
- (void)eventNameRecordsForClient:(NSString *)arg1 queryId:(unsigned long long)arg2;
@end

