//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/MFRequestQueueResponseConsumer-Protocol.h>

@class NSArray;

@protocol MFDASyncActionsConsumer <MFRequestQueueResponseConsumer>
- (void)commitSyncActions;
- (void)receiveSyncActions:(NSArray *)arg1;
- (void)drainMailbox;
@end

