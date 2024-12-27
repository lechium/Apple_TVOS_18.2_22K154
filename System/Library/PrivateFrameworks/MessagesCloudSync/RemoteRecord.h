//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, RemoteRecordData;

@interface RemoteRecord : NSManagedObject
{
}

- (void).cxx_destruct;	// IMP=0x0000000000060120
- (void).cxx_construct;	// IMP=0x0000000000060110
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000060090

// Remaining properties
@property(nonatomic, copy) NSString *changeTag; // @dynamic changeTag;
@property(nonatomic, copy) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic, retain) RemoteRecordData *data; // @dynamic data;
@property(nonatomic, copy) NSDate *dateRead; // @dynamic dateRead;
@property(nonatomic, copy) NSString *guid; // @dynamic guid;
@property(nonatomic, copy) NSDate *modificationDate; // @dynamic modificationDate;
@property(nonatomic, copy) NSString *modifiedByDevice; // @dynamic modifiedByDevice;
@property(nonatomic, copy) NSString *parentID; // @dynamic parentID;
@property(nonatomic, copy) NSString *recordName; // @dynamic recordName;
@property(nonatomic, copy) NSString *recordType; // @dynamic recordType;
@property(nonatomic) int statusValue; // @dynamic statusValue;
@property(nonatomic, copy) NSString *zoneName; // @dynamic zoneName;

@end

