//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HoverTextUI/NSObject-Protocol.h>

@class AXAccessQueue, NSDictionary, NSSet, NSString;

@protocol AXUIService <NSObject>

@optional
+ (_Bool)isSafeToProcessMessageFromUnentitledProcessWithIdentifier:(unsigned long long)arg1;
+ (NSSet *)possibleRequiredEntitlementsForProcessingMessageWithIdentifier:(unsigned long long)arg1;
+ (NSString *)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned long long)arg1;
+ (id)sharedInstance;
- (int)serviceTypeForClientWithIdentifier:(NSString *)arg1;
- (void)connectionWillBeInterruptedForClientWithIdentifier:(NSString *)arg1;
- (void)serviceWasFullyInitialized;
- (void)processInitializationMessage:(NSDictionary *)arg1;
- (_Bool)messageWithIdentifierRequiresWritingBlock:(unsigned long long)arg1;
- (AXAccessQueue *)accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg1;
- (void)processMessageAsynchronously:(NSDictionary *)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(NSString *)arg3 pid:(int)arg4 completion:(void (^)(NSDictionary *, NSError *))arg5;
- (void)processMessageAsynchronously:(NSDictionary *)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(NSString *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (_Bool)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg1;
- (NSDictionary *)processMessage:(NSDictionary *)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(NSString *)arg3 pid:(int)arg4 error:(id *)arg5;
- (NSDictionary *)processMessage:(NSDictionary *)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(NSString *)arg3 error:(id *)arg4;
@end

