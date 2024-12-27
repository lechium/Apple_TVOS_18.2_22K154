//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EKInviteeTimeSpan : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
    NSMutableArray *_conflictedParticipants;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001460ad
@property(retain, nonatomic) NSMutableArray *conflictedParticipants; // @synthesize conflictedParticipants=_conflictedParticipants;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;	// IMP=0x0000000000145e9d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000145d82
- (id)init;	// IMP=0x0000000000145d17

@end

