//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IMDCallManager_Impl : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *serviceSession;	// 16 = 0x10
    MISSING_TYPE *conversationManager;	// 24 = 0x18
    MISSING_TYPE *featureFlags;	// 32 = 0x20
    MISSING_TYPE *newChatListenerTask;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000020f480
- (id)init;	// IMP=0x000000000020f530
- (void)dealloc;	// IMP=0x000000000020f3f0
- (id)initWithServiceSession:(id)arg1;	// IMP=0x000000000020ce80
- (void)conversationManager:(id)arg1 conversationUpdatedMessagesGroupUUID:(id)arg2;	// IMP=0x00000000002103e0
- (void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2;	// IMP=0x0000000000210210

@end

