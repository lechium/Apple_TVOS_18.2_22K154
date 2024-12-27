//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSMessage.h>

@class NSMutableOrderedSet, NSNumber, NSString;

@interface IDSMMLMessage : IDSMessage
{
    NSMutableOrderedSet *_aggregateMessages;	// 264 = 0x108
    NSNumber *_sendMode;	// 272 = 0x110
    long long _maxSize;	// 280 = 0x118
    long long _currentSize;	// 288 = 0x120
    NSNumber *_chunkNumber;	// 296 = 0x128
    NSString *_identifier;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x002000000005fcfe
@property NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSNumber *chunkNumber; // @synthesize chunkNumber=_chunkNumber;
@property long long currentSize; // @synthesize currentSize=_currentSize;
@property long long maxSize; // @synthesize maxSize=_maxSize;
@property(copy) NSNumber *sendMode; // @synthesize sendMode=_sendMode;
@property(copy) NSMutableOrderedSet *aggregateMessages; // @synthesize aggregateMessages=_aggregateMessages;
- (_Bool)expectingMoreResponses;	// IMP=0x001000000005fae1
- (void)noteResponseForToken:(id)arg1;	// IMP=0x001000000005f991
- (id)messageBody;	// IMP=0x001000000005f740
- (id)requiredKeys;	// IMP=0x001000000005f727
- (_Bool)isMMLMessage;	// IMP=0x001000000005f71f
- (_Bool)wantsMultipleResponses;	// IMP=0x001000000005f717
- (_Bool)wantsResponse;	// IMP=0x001000000005f70f
- (_Bool)wantsUserAgentInHeaders;	// IMP=0x001000000005f707
- (long long)command;	// IMP=0x001000000005f6fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005f5b5
- (_Bool)addAggregateMessage:(id)arg1;	// IMP=0x001000000005f51d
- (_Bool)hasSpaceForAggregateMessage:(id)arg1;	// IMP=0x001000000005f4e2
- (id)initWithSendMode:(id)arg1 topic:(id)arg2 maxSize:(unsigned long long)arg3;	// IMP=0x001000000005f42d

@end

