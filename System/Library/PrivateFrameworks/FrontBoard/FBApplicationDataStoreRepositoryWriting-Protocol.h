//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol FBApplicationDataStoreRepositoryWriting <NSObject>
- (void)endBatchedUpdate;
- (void)beginBatchedUpdate;
- (void)flushSynchronously;
- (void)removeAllObjectsForApplication:(NSString *)arg1;
- (void)removeObjectsForKeys:(NSArray *)arg1 forApplication:(NSString *)arg2;
- (void)removeObjectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 forApplication:(NSString *)arg3;
- (NSError *)migrateIdentifier:(NSString *)arg1 toIdentifier:(NSString *)arg2;
@end

