//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriIdentityProvider/NSObject-Protocol.h>

@class NSString, NSUUID, SISchemaInstrumentationMessage, SISchemaTopLevelUnionType;

@protocol SiriAnalyticsMessageStream <NSObject>
- (void)barrierWithCompletion:(void (^)(void))arg1;
- (void)enqueueLargeMessageObjectFromPath:(NSString *)arg1 assetIdentifier:(NSUUID *)arg2 messageMetadata:(SISchemaInstrumentationMessage *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)resolvePartialMessage:(SISchemaTopLevelUnionType *)arg1 timestamp:(unsigned long long)arg2;
- (void)resolvePartialMessage:(SISchemaTopLevelUnionType *)arg1;
- (void)emitMessage:(SISchemaTopLevelUnionType *)arg1 timestamp:(unsigned long long)arg2;
- (void)emitMessage:(SISchemaTopLevelUnionType *)arg1;
@end

