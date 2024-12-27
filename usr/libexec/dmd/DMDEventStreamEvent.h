//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface DMDEventStreamEvent : NSObject
{
    NSString *_eventType;	// 8 = 0x8
    NSDictionary *_details;	// 16 = 0x10
    NSDate *_timestamp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004b92f
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (id)eventStatusMessageWithPayloadIdentifier:(id)arg1;	// IMP=0x001000000004b7e7
- (id)description;	// IMP=0x001000000004b74a
- (id)initWithEventType:(id)arg1 details:(id)arg2;	// IMP=0x001000000004b67a

@end

