//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMMessageItem, NSArray, NSString;

@protocol IMDaemonChatModifyReadStateProtocol <NSObject>
- (void)sendNotifyRecipientCommandForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 message:(IMMessageItem *)arg4;
- (void)markHasHadSuccessfulQueryForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3;
- (void)markSavedForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 message:(IMMessageItem *)arg4;
- (void)markSavedForMessageGUID:(NSString *)arg1;
- (void)markPlayedExpressiveSendForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 message:(IMMessageItem *)arg4;
- (void)markReadForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 messages:(NSArray *)arg4 clientUnreadCount:(long long)arg5 setUnreadCountToZero:(_Bool)arg6;
- (void)markReadForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 messages:(NSArray *)arg4 clientUnreadCount:(long long)arg5;
@end

