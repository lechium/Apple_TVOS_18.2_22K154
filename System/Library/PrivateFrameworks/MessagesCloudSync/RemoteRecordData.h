//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, RemoteRecord;

@interface RemoteRecordData : NSManagedObject
{
}

- (void).cxx_destruct;	// IMP=0x000000000004d6e0
- (void).cxx_construct;	// IMP=0x000000000004d6d0
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000004d650

// Remaining properties
@property(nonatomic, copy) NSData *data; // @dynamic data;
@property(nonatomic, retain) RemoteRecord *parent; // @dynamic parent;

@end

