//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MDMRSELFLoggingUtils : NSObject
{
}

+ (_Bool)emitMentionResolverEvaluatedEventWithResponse:(id)arg1 WithNlId:(id)arg2 andWithTrpId:(id)arg3 andWithRequestId:(id)arg4 andWithResultCandidateId:(id)arg5 andWithRequester:(int)arg6;	// IMP=0x00800000000924b9
+ (id)createMentionResolverEvaluatedTier1Event:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x0080000000092231
+ (id)createMentionResolverEvaluatedEvent:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x0080000000091f81
+ (_Bool)emitMentionDetectorEvaluatedEventWithResponse:(id)arg1 WithNlId:(id)arg2 andWithTrpId:(id)arg3 andWithRequestId:(id)arg4 andWithResultCandidateId:(id)arg5 andWithRequester:(int)arg6;	// IMP=0x0080000000091dd4
+ (id)createMentionDetectorEvaluatedTier1Event:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x0080000000091b56
+ (id)createMentionDetectorEvaluatedEvent:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x0080000000091894
+ (_Bool)emitEvent:(id)arg1;	// IMP=0x00800000000915d9

@end

