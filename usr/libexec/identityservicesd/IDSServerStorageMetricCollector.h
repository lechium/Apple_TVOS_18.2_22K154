//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSServerStorageMetricCollector : NSObject
{
    _Bool _wasPrimary;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    NSString *_topic;	// 32 = 0x20
    long long _messageCount;	// 40 = 0x28
    long long _linkType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000002e3c8f
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
@property(nonatomic) _Bool wasPrimary; // @synthesize wasPrimary=_wasPrimary;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)dictionaryMetric;	// IMP=0x00100000002e3a58
- (void)reportMetric;	// IMP=0x00100000002e38ab
- (void)endCollector;	// IMP=0x00100000002e384e
- (void)incrementMessageCount;	// IMP=0x00100000002e381c
- (id)awdLogger;	// IMP=0x00100000002e3803
- (id)initWithTopic:(id)arg1 isPrimary:(_Bool)arg2;	// IMP=0x00100000002e373e

@end

