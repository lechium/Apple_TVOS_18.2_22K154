//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/WFWorkflowRunnerClientDelegate-Protocol.h>

@class WFContextualAction, WFReverseContextualAction, WFShojiSystemActionsRunnerClient;

@protocol WFShojiSystemActionsRunnerClientDelegate <WFWorkflowRunnerClientDelegate>

@optional
- (void)workflowRunnerClient:(WFShojiSystemActionsRunnerClient *)arg1 didFinishRunningAction:(WFContextualAction *)arg2 withReverseAction:(WFReverseContextualAction *)arg3;
@end

