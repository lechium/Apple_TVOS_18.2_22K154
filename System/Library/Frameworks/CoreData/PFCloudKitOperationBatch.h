//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface PFCloudKitOperationBatch : NSObject
{
    NSMutableSet *_deletedRecordIDs;	// 8 = 0x8
    NSMutableDictionary *_recordTypeToDeletedRecordID;	// 16 = 0x10
    NSMutableArray *_records;	// 24 = 0x18
    NSMutableSet *_recordIDs;	// 32 = 0x20
    unsigned long long _sizeInBytes;	// 40 = 0x28
}

- (void)dealloc;	// IMP=0x00000000000c70b1
- (id)init;	// IMP=0x00000000000c702d

@end

