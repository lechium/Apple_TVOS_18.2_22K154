//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBRawFolder, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface PendingChanges : NSObject
{
    HBRawFolder *_newlyUpdatedFolderWithChanges;	// 8 = 0x8
    NSMutableArray *_installableAppRecords;	// 16 = 0x10
    NSDictionary *_pendingUserInfoForSync;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003f396
@property(retain, nonatomic) NSDictionary *pendingUserInfoForSync; // @synthesize pendingUserInfoForSync=_pendingUserInfoForSync;
@property(retain, nonatomic) NSMutableArray *installableAppRecords; // @synthesize installableAppRecords=_installableAppRecords;
@property(retain, nonatomic) HBRawFolder *newlyUpdatedFolderWithChanges; // @synthesize newlyUpdatedFolderWithChanges=_newlyUpdatedFolderWithChanges;

@end

