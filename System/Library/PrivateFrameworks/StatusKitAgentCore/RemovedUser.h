//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface RemovedUser : NSManagedObject
{
}

+ (id)presenceIdentifierKeyPath;	// IMP=0x008000000000f1b4
+ (id)statusTypeIdentifierKeyPath;	// IMP=0x008000000000f1a7
+ (id)handleKeyPath;	// IMP=0x008000000000f19a
+ (id)dateRemovedKeyPath;	// IMP=0x008000000000f18d
+ (id)predicateForPresenceIdentifier:(id)arg1;	// IMP=0x008000000000f357
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x008000000000f2bd
+ (id)predicateForHandleString:(id)arg1;	// IMP=0x008000000000f223
+ (id)predicateForHandle:(id)arg1;	// IMP=0x008000000000f1c1
+ (id)fetchRequest;	// IMP=0x008000000008a2b6

// Remaining properties
@property(copy, nonatomic) NSDate *dateRemoved; // @dynamic dateRemoved;
@property(copy, nonatomic) NSString *presenceIdentifier; // @dynamic presenceIdentifier;
@property(copy, nonatomic) NSString *removedHandle; // @dynamic removedHandle;
@property(copy, nonatomic) NSString *statusTypeIdentifier; // @dynamic statusTypeIdentifier;

@end

