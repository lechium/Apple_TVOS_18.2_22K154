//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13callservicesd31CallHistoryNotificationProvider : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *callInteractionManager;	// 16 = 0x10
    MISSING_TYPE *callHistoryDataSource;	// 24 = 0x18
    MISSING_TYPE *callProviderManager;	// 64 = 0x40
    MISSING_TYPE *pendingCallIdentifiers;	// 72 = 0x48
    MISSING_TYPE *supportedMediaTypes;	// 80 = 0x50
    MISSING_TYPE *supportedProviders;	// 88 = 0x58
    MISSING_TYPE *mostRecentCallDate;	// 0 = 0x0
    MISSING_TYPE *supportsDisplayingFaceTimeAudioCalls;	// 0 = 0x0
    MISSING_TYPE *openURL;	// 2 = 0x2
    MISSING_TYPE *dialRecentCall;	// 0 = 0x0
    MISSING_TYPE *findConversationLink;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *blockHandles;	// 1936941420 = 0x7373616c
    MISSING_TYPE *featureFlags;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *notificationType;	// 0 = 0x0
    MISSING_TYPE *add;	// 3604730 = 0x3700fa
    MISSING_TYPE *replace;	// 8930 = 0x22e2
    MISSING_TYPE *removeNotification;	// 3604730 = 0x3700fa
    MISSING_TYPE *updateBadgeValue;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00200000002ad5bc
- (id)init;	// IMP=0x00100000002a7178
- (void)handleCallHistoryDatabaseChangedWithNotification:(id)arg1;	// IMP=0x00100000002adee9
- (void)callInteractionsDidChangeForManager:(id)arg1;	// IMP=0x00100000002ad9e6
@property(nonatomic, readonly) NSString *description;

@end

