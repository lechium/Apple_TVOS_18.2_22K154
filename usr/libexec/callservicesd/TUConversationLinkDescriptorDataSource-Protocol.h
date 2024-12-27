//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSPredicate, NSSet, NSString;
@protocol TUConversationLinkDescriptorDataSourceDelegate;

@protocol TUConversationLinkDescriptorDataSource <NSObject>
@property(retain, nonatomic) id <TUConversationLinkDescriptorDataSourceDelegate> conversationLinkDescriptorDataSourceDelegate;
- (void)setName:(NSString *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 completion:(void (^)(unsigned long long, NSError *))arg4;
- (unsigned long long)setName:(NSString *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 error:(id *)arg4;
- (void)setInvitedHandles:(NSSet *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 completion:(void (^)(unsigned long long, NSError *))arg4;
- (unsigned long long)setInvitedHandles:(NSSet *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 error:(id *)arg4;
- (void)setExpirationDate:(NSDate *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 completion:(void (^)(unsigned long long, NSError *))arg4;
- (unsigned long long)setExpirationDate:(NSDate *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 error:(id *)arg4;
- (void)setActivated:(_Bool)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 completion:(void (^)(unsigned long long, NSError *))arg4;
- (unsigned long long)setActivated:(_Bool)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 error:(id *)arg4;
- (void)removeLinkDescriptorsFromDataSourceWithPredicate:(NSPredicate *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (unsigned long long)removeLinkDescriptorsFromDataSourceWithPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (void)removeConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg1 deleteReason:(long long)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
- (unsigned long long)removeConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg1 deleteReason:(long long)arg2 error:(id *)arg3;
- (void)conversationLinkDescriptorsWithPredicate:(NSPredicate *)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (NSArray *)conversationLinkDescriptorsWithPredicate:(NSPredicate *)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 error:(id *)arg4;
- (void)conversationLinkDescriptorCountWithPredicate:(NSPredicate *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (unsigned long long)conversationLinkDescriptorCountWithPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (void)addOrUpdateConversationLinkDescriptors:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (_Bool)addOrUpdateConversationLinkDescriptors:(NSArray *)arg1 error:(id *)arg2;
- (void)addConversationLinkDescriptors:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (_Bool)addConversationLinkDescriptors:(NSArray *)arg1 error:(id *)arg2;
@end

