//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADObjectID;

__attribute__((visibility("hidden")))
@interface CADExpandedNotification
{
    CADObjectID *_attendeeObjectID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004ac82
@property(retain, nonatomic) CADObjectID *attendeeObjectID; // @synthesize attendeeObjectID=_attendeeObjectID;
- (_Bool)expanded;	// IMP=0x000000000004ac55
- (id)initWithType:(int)arg1 objectID:(id)arg2 occurrenceDate:(double)arg3 expirationDate:(double)arg4 attendeeObjectID:(id)arg5;	// IMP=0x000000000004abbf

@end

