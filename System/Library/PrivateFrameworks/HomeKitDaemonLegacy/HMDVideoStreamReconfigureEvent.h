//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface HMDVideoStreamReconfigureEvent : HMFObject
{
    unsigned long long _eventType;	// 8 = 0x8
    NSDate *_timestamp;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005861eb
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)description;	// IMP=0x00000000005860ce
- (unsigned long long)hash;	// IMP=0x000000000058608a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000585fae
- (long long)compare:(id)arg1;	// IMP=0x0000000000585f1d
- (id)initWithEventType:(unsigned long long)arg1;	// IMP=0x0000000000585e9e

@end

