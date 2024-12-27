//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface CNDuplicateContactsManager : NSObject
{
    MISSING_TYPE *contactStore;	// 8 = 0x8
    MISSING_TYPE *contacts;	// 16 = 0x10
    MISSING_TYPE *findResult;	// 24 = 0x18
    MISSING_TYPE *mergeResult;	// 32 = 0x20
    MISSING_TYPE *didPerformMerge;	// 56 = 0x38
}

+ (void)updateRecentPostersDatabaseForSignatures:(id)arg1;	// IMP=0x0060000000177a40
+ (void)updateRecentImagesDatabaseForSignatures:(id)arg1;	// IMP=0x0060000000177a10
+ (void)refreshManagedDuplicatesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00600000001779c0
+ (_Bool)applyMergeResultToSaveRequest:(id)arg1 signatures:(id)arg2;	// IMP=0x0060000000177140
+ (void)duplicatesCountsWithCompletionHandler:(void (^)(long long, long long))arg1;	// IMP=0x0060000000176d50
- (void).cxx_destruct;	// IMP=0x0000000000177b40
- (id)init;	// IMP=0x0000000000177ae0
- (_Bool)applyMergeResultToSaveRequest:(id)arg1;	// IMP=0x00000000001770d0
- (id)initWithContactStore:(id)arg1;	// IMP=0x0000000000175cd0
@property(nonatomic, readonly) NSArray *duplicates;

@end

