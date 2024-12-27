//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TUDelegate-Protocol.h"

@class CSDCallHistoryManager, NSDate, TUConversation;

@protocol CSDCallHistoryManagerDelegate <TUDelegate>

@optional
- (void)callHistoryManager:(CSDCallHistoryManager *)arg1 recentCallRequestedFor:(TUConversation *)arg2 withStartDate:(NSDate *)arg3 avMode:(unsigned long long)arg4;
- (void)recentCallsDidChangeForCallHistoryManager:(CSDCallHistoryManager *)arg1;
@end

