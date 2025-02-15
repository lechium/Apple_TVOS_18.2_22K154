//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextGeneration/NSObject-Protocol.h>

@class NSArray, NSError, NSUUID, TGTextGenerationOutput;

@protocol TGTextGenerationOperationDelegate <NSObject>
- (void)operationWithExecutionUUID:(NSUUID *)arg1 didStreamOutput:(TGTextGenerationOutput *)arg2;
- (void)operationWithExecutionUUID:(NSUUID *)arg1 didFinishWithOutputs:(NSArray *)arg2;
- (void)operationWithExecutionUUID:(NSUUID *)arg1 didFailWithError:(NSError *)arg2;
- (void)didStartOperationWithExecutionUUID:(NSUUID *)arg1;
@end

