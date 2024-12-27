//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADObjectID, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CADNotification : NSObject
{
    int _type;	// 8 = 0x8
    CADObjectID *_objectID;	// 16 = 0x10
    double _occurrenceDate;	// 24 = 0x18
    double _expirationDate;	// 32 = 0x20
    NSMutableArray *_mutableExpandedNotifications;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004ab97
@property(retain, nonatomic) NSMutableArray *mutableExpandedNotifications; // @synthesize mutableExpandedNotifications=_mutableExpandedNotifications;
@property(readonly, nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) double occurrenceDate; // @synthesize occurrenceDate=_occurrenceDate;
@property(readonly, nonatomic) CADObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)addExpandedNotification:(id)arg1;	// IMP=0x000000000004aaa9
@property(readonly, nonatomic) NSArray *expandedNotifications;
@property(readonly, nonatomic) _Bool expanded;
- (id)initWithType:(int)arg1 objectID:(id)arg2 occurrenceDate:(double)arg3 expirationDate:(double)arg4;	// IMP=0x000000000004a9ea

@end

