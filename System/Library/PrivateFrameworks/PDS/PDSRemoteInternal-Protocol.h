//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber, NSString;

@protocol PDSRemoteInternal
- (void)kvStateDumpWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)stringRepresentationForKey:(NSString *)arg1 withCompletion:(void (^)(NSString *, NSError *))arg2;
- (void)setDataValue:(NSData *)arg1 forKey:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)setNumberValue:(NSNumber *)arg1 forKey:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)setStringValue:(NSString *)arg1 forKey:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
@end

