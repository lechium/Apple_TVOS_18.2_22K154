//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriWellnessIntents/NSObject-Protocol.h>

@class UndoMedsIntent;

@protocol UndoMedsIntentHandling <NSObject>
- (void)handleUndoMeds:(UndoMedsIntent *)arg1 completion:(void (^)(UndoMedsIntentResponse *))arg2;

@optional
- (void)confirmUndoMeds:(UndoMedsIntent *)arg1 completion:(void (^)(UndoMedsIntentResponse *))arg2;
@end

