//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class INCreateTimerIntent;

@protocol INCreateTimerIntentHandling <NSObject>
- (void)handleCreateTimer:(INCreateTimerIntent *)arg1 completion:(void (^)(INCreateTimerIntentResponse *))arg2;

@optional
- (void)resolveTypeForCreateTimer:(INCreateTimerIntent *)arg1 withCompletion:(void (^)(INTimerTypeResolutionResult *))arg2;
- (void)resolveDurationForCreateTimer:(INCreateTimerIntent *)arg1 withCompletion:(void (^)(INTimeIntervalResolutionResult *))arg2;
- (void)resolveLabelForCreateTimer:(INCreateTimerIntent *)arg1 withCompletion:(void (^)(INCreateTimerLabelResolutionResult *))arg2;
- (void)confirmCreateTimer:(INCreateTimerIntent *)arg1 completion:(void (^)(INCreateTimerIntentResponse *))arg2;
@end

