//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString, _TtC4Sage22SummarizationXPCResult;

@protocol SummarizationStreamingDelegate
- (void)didFinishTextAssistantStreamingForRequestIdentifier:(NSString *)arg1;
- (void)didEncounterTextAssistantStreamingError:(NSError *)arg1 forRequestIdentifier:(NSString *)arg2;
- (void)didProduceTextAssistantPartialSummary:(_TtC4Sage22SummarizationXPCResult *)arg1 forRequestIdentifier:(NSString *)arg2;
@end

