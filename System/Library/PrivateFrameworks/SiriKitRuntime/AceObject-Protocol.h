//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriKitRuntime/NSCopying-Protocol.h>
#import <SiriKitRuntime/NSMutableCopying-Protocol.h>
#import <SiriKitRuntime/NSObject-Protocol.h>
#import <SiriKitRuntime/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol AceContext;

@protocol AceObject <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSMutableDictionary *)properties;
- (NSMutableDictionary *)dictionary;
- (id)initWithDictionary:(NSDictionary *)arg1 context:(id <AceContext>)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)init;
@end

