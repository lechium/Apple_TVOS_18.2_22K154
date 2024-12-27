//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface VUIStreamingBookmark : NSObject
{
    NSNumber *_absoluteResumeTime;	// 8 = 0x8
    NSDate *_absoluteBookmarkTimestamp;	// 16 = 0x10
    NSNumber *_relativeResumeTime;	// 24 = 0x18
    NSDate *_relativeBookmarkTimestamp;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000897f2
@property(retain, nonatomic) NSDate *relativeBookmarkTimestamp; // @synthesize relativeBookmarkTimestamp=_relativeBookmarkTimestamp;
@property(retain, nonatomic) NSNumber *relativeResumeTime; // @synthesize relativeResumeTime=_relativeResumeTime;
@property(retain, nonatomic) NSDate *absoluteBookmarkTimestamp; // @synthesize absoluteBookmarkTimestamp=_absoluteBookmarkTimestamp;
@property(retain, nonatomic) NSNumber *absoluteResumeTime; // @synthesize absoluteResumeTime=_absoluteResumeTime;
- (id)initWithAbsoluteResumeTime:(id)arg1 absoluteTimestamp:(id)arg2 relativeResumeTime:(id)arg3 relativeBookmarkTimestamp:(id)arg4;	// IMP=0x0000000000089648

@end

