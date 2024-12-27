//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriAudioInternal/NSObject-Protocol.h>

@class INAddMediaIntent;

@protocol INAddMediaIntentHandling <NSObject>
- (void)handleAddMedia:(INAddMediaIntent *)arg1 completion:(void (^)(INAddMediaIntentResponse *))arg2;

@optional
- (void)resolveMediaDestinationForAddMedia:(INAddMediaIntent *)arg1 withCompletion:(void (^)(INAddMediaMediaDestinationResolutionResult *))arg2;
- (void)resolveMediaItemsForAddMedia:(INAddMediaIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)confirmAddMedia:(INAddMediaIntent *)arg1 completion:(void (^)(INAddMediaIntentResponse *))arg2;
@end

