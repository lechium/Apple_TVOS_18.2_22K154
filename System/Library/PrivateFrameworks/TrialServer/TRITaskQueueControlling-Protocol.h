//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, NSString;

@protocol TRITaskQueueControlling
- (_Bool)enumerateTasksWithTagsIntersectingTagSet:(NSSet *)arg1 block:(void (^)(TRITaskRecord *, _Bool *))arg2;
- (_Bool)cancelTasksWithTag:(NSString *)arg1 excludingTasks:(NSArray *)arg2;
- (_Bool)cancelTasksWithTag:(NSString *)arg1;
@end

