//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PegasusKit/NSObject-Protocol.h>
#import <PegasusKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;
@protocol _TtP20PegasusConfiguration6Config_;

@protocol _TtP20PegasusConfiguration6Config_ <NSObject, NSSecureCoding>
- (_Bool)configBoolForKey:(NSString *)arg1;
- (NSDictionary *)rawConfig;
- (id)valueForKey:(NSString *)arg1 shouldConsiderOverrides:(_Bool)arg2;
- (id)valueForKey:(NSString *)arg1 ofType:(Class)arg2;
- (id)valueForKey:(NSString *)arg1;
- (id <_TtP20PegasusConfiguration6Config_>)findConfigForUserAgent:(NSString *)arg1;
@property(nonatomic, readonly) _Bool isExpired;
@property(nonatomic, readonly) NSString *searchURLString;
@property(nonatomic, readonly) NSString *firstUseDescriptionText;
@property(nonatomic, readonly) _Bool isEnabled;
@property(nonatomic, readonly) NSString *clientName;
@property(nonatomic, readonly) NSString *userAgent;
@end

