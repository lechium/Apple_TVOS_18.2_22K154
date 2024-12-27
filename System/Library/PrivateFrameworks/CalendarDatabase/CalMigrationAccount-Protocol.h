//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDatabase/CalMigrationReadOnlyAccount-Protocol.h>

@class NSString;

@protocol CalMigrationAccount <CalMigrationReadOnlyAccount>
@property(retain, nonatomic) NSString *username;
@property(nonatomic) _Bool authenticated;
@property(nonatomic) _Bool visible;
@property(nonatomic) _Bool provisionedForCalendarsDataClass;
@property(nonatomic) _Bool enabledForCalendarsDataClass;
@property(retain, nonatomic) NSString *accountDescription;
@property(readonly, nonatomic) _Bool dirty;
- (void)setPassword:(NSString *)arg1;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;
- (void)setAccountProperty:(id)arg1 forKey:(NSString *)arg2;
- (id)accountPropertyForKey:(NSString *)arg1;
@end

