//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol AFManagedStorageService <NSObject>
- (oneway void)resetKnowledgeStoreWithName:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)getKnowledgeStoreDataForKey:(NSString *)arg1 inStoreWithName:(NSString *)arg2 completion:(void (^)(NSData *))arg3;
- (oneway void)setKnowledgeStoreData:(NSData *)arg1 forKey:(NSString *)arg2 inStoreWithName:(NSString *)arg3 completion:(void (^)(void))arg4;
- (oneway void)fetchManagedStoreObjectForKey:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (oneway void)setManagedStoreObject:(NSDictionary *)arg1 forKey:(NSString *)arg2;
@end

