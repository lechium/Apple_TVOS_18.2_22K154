//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCC26AIMLInstrumentationStreams25SiriConversationPublisher26SiriConversationSubscriber : NSObject
{
    MISSING_TYPE *tracker;	// 0 = 0x0
    MISSING_TYPE *conversationCount;	// 0 = 0x0
    MISSING_TYPE *downstream;	// 0 = 0x0
    MISSING_TYPE *lastReceivedTimestamp;	// 0 = 0x0
    MISSING_TYPE *graphBuilder;	// 0 = 0x0
    MISSING_TYPE *upstreamFinished;	// 0 = 0x0
    MISSING_TYPE *conversationWindowLength;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000075870
- (id)init;	// IMP=0x0000000000075820
- (void)cancel;	// IMP=0x0000000000073ec0
- (void)receiveCompletion:(id)arg1;	// IMP=0x0000000000073d20
- (long long)receiveInput:(id)arg1;	// IMP=0x0000000000073af0
- (void)receiveSubscription:(id)arg1;	// IMP=0x0000000000073ad0

@end

