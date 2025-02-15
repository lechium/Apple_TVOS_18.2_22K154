//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TVPPlaybackImageLoadInfo : NSObject
{
    id _identifier;	// 8 = 0x8
    double _requestedTime;	// 16 = 0x10
    NSDate *_requestedDate;	// 24 = 0x18
    CDUnknownBlockType _timeBasedHandler;	// 32 = 0x20
    CDUnknownBlockType _dateBasedHandler;	// 40 = 0x28
    struct CGSize _maxSize;	// 48 = 0x30
    CDStruct_1b6d18a9 _requestedCMTime;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a2244
@property(copy, nonatomic) CDUnknownBlockType dateBasedHandler; // @synthesize dateBasedHandler=_dateBasedHandler;
@property(copy, nonatomic) CDUnknownBlockType timeBasedHandler; // @synthesize timeBasedHandler=_timeBasedHandler;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) CDStruct_1b6d18a9 requestedCMTime; // @synthesize requestedCMTime=_requestedCMTime;
@property(retain, nonatomic) NSDate *requestedDate; // @synthesize requestedDate=_requestedDate;
@property(nonatomic) double requestedTime; // @synthesize requestedTime=_requestedTime;
@property(retain, nonatomic) id identifier; // @synthesize identifier=_identifier;
- (void)callCompletionHandlerWithImage:(id)arg1 actualCMTime:(CDStruct_1b6d18a9)arg2 actualDate:(id)arg3;	// IMP=0x00000000000a200d
- (id)description;	// IMP=0x00000000000a1f56

@end

