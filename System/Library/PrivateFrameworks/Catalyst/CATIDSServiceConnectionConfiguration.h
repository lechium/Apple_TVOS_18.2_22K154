//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CATIDSServiceConnectionConfiguration : NSObject
{
    long long _maxDataSendSize;	// 8 = 0x8
    unsigned long long _keepAliveAttemptCount;	// 16 = 0x10
    double _keepAliveCheckinInterval;	// 24 = 0x18
    double _invitationAcknowledgeTimeout;	// 32 = 0x20
    double _missingItemsCheckinInterval;	// 40 = 0x28
    double _messageQueueFlushPromptInterval;	// 48 = 0x30
}

@property(nonatomic) double messageQueueFlushPromptInterval; // @synthesize messageQueueFlushPromptInterval=_messageQueueFlushPromptInterval;
@property(nonatomic) double missingItemsCheckinInterval; // @synthesize missingItemsCheckinInterval=_missingItemsCheckinInterval;
@property(nonatomic) double invitationAcknowledgeTimeout; // @synthesize invitationAcknowledgeTimeout=_invitationAcknowledgeTimeout;
@property(nonatomic) double keepAliveCheckinInterval; // @synthesize keepAliveCheckinInterval=_keepAliveCheckinInterval;
@property(nonatomic) unsigned long long keepAliveAttemptCount; // @synthesize keepAliveAttemptCount=_keepAliveAttemptCount;
@property(nonatomic) long long maxDataSendSize; // @synthesize maxDataSendSize=_maxDataSendSize;
- (id)init;	// IMP=0x00000000000415dd

@end

