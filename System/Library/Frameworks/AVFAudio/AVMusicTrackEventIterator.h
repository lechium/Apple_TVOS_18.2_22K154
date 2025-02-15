//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVMusicTrackEventIterator : NSObject
{
    struct MusicTrackEventIteratorImpl *_impl;	// 8 = 0x8
}

- (_Bool)hasCurrentEvent;	// IMP=0x00000000000e77ba
- (_Bool)hasNextEvent;	// IMP=0x00000000000e776c
- (_Bool)hasPreviousEvent;	// IMP=0x00000000000e771e
- (void)deleteEvent;	// IMP=0x00000000000e76ce
- (_Bool)setEventTime:(double)arg1;	// IMP=0x00000000000e766c
- (_Bool)setEventInfo:(unsigned int)arg1 data:(const void *)arg2;	// IMP=0x00000000000e7606
- (void)getEventInfo:(double *)arg1 outEventType:(unsigned int *)arg2 eventData:(void **)arg3 dataSize:(unsigned int *)arg4;	// IMP=0x00000000000e75e9
- (int)previousEvent;	// IMP=0x00000000000e759a
- (int)nextEvent;	// IMP=0x00000000000e754b
- (void)seek:(double)arg1;	// IMP=0x00000000000e7515
- (id)initWithImpl:(struct MusicTrackEventIteratorImpl *)arg1;	// IMP=0x00000000000e74af

@end

