//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class NSCKExportOperation, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NSCKExportedObject : NSManagedObject
{
}

+ (id)entityPath;	// IMP=0x004000000027ea4f
@property(nonatomic) long long changeType;
@property(nonatomic) unsigned long long type;

// Remaining properties
@property(retain, nonatomic) NSNumber *changeTypeNum; // @dynamic changeTypeNum;
@property(retain, nonatomic) NSString *ckRecordName; // @dynamic ckRecordName;
@property(retain, nonatomic) NSCKExportOperation *operation; // @dynamic operation;
@property(retain, nonatomic) NSNumber *typeNum; // @dynamic typeNum;
@property(retain, nonatomic) NSString *zoneName; // @dynamic zoneName;

@end

