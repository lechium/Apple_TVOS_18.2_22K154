//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE, NSString;

@interface _TtC14SiriTTSService13TaskOperation : NSOperation
{
    MISSING_TYPE *request;	// 8 = 0x8
    MISSING_TYPE *workflow;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *audioHandler;	// 32 = 0x20
    MISSING_TYPE *notification;	// 40 = 0x28
    MISSING_TYPE *queue;	// 48 = 0x30
    MISSING_TYPE *workflowError;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002b988
- (id)init;	// IMP=0x000000000002b955
@property(nonatomic, readonly) NSString *description;
- (void)cancel;	// IMP=0x000000000002b7b3
- (void)main;	// IMP=0x000000000002b5c1

@end

