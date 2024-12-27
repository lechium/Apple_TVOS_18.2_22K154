//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JEMediaTimeTrackerDateProvider, NSDate;

__attribute__((visibility("hidden")))
@interface JEMediaTimeTracker : NSObject
{
    float _playbackRate;	// 8 = 0x8
    JEMediaTimeTrackerDateProvider *_dateProvider;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    unsigned long long _position;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000009426
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(retain, nonatomic) JEMediaTimeTrackerDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
- (id)estimatedTimeAtPastPosition:(unsigned long long)arg1;	// IMP=0x000000000000934c
- (id)estimatedTimeAtPosition:(unsigned long long)arg1;	// IMP=0x0000000000009276
- (void)updatePosition:(unsigned long long)arg1 playbackRate:(float)arg2;	// IMP=0x00000000000091ab
- (void)updatePosition:(unsigned long long)arg1;	// IMP=0x0000000000009121
- (id)initWithPosition:(unsigned long long)arg1 playbackRate:(float)arg2;	// IMP=0x000000000000908d

@end

