//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBSectionInfo, NSArray, NSDate, NSDictionary, NSSet, NSString;

@protocol BBSectionInfoStoreInterface <NSObject>
- (void)setClearedSectionsByID:(NSDictionary *)arg1;
- (void)setSectionInfoByID:(NSDictionary *)arg1;
- (NSDictionary *)sectionInfoByID;
- (NSArray *)allSortedSectionInfo:(_Bool)arg1;
- (NSArray *)allUnsortedSectionInfoIDs;
- (NSDictionary *)clearedSectionsByID;
- (NSArray *)sortedSectionIDs;
- (NSArray *)allSortedActiveSections:(_Bool)arg1;
- (NSSet *)activeSectionIDs;
- (void)addActiveSectionID:(NSString *)arg1;
- (void)setClearedInfo:(NSDate *)arg1 forSectionID:(NSString *)arg2;
- (NSDate *)clearedInfoForSectionID:(NSString *)arg1;
- (void)removeSectionWithID:(NSString *)arg1;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2;
- (BBSectionInfo *)effectiveSectionInfoForSectionInfo:(BBSectionInfo *)arg1;
- (NSDictionary *)sectionInfosByIDForSectionIDs:(NSSet *)arg1 effective:(_Bool)arg2;
- (NSArray *)sortedSectionInfoForSectionIDs:(NSSet *)arg1 effective:(_Bool)arg2;
- (BBSectionInfo *)sectionInfoForSectionID:(NSString *)arg1 effective:(_Bool)arg2;
@end

