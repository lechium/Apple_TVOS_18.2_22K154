//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSArray;

@interface NSString (UserNotificationsInternal)
+ (id)localizedUserNotificationStringForKey:(id)arg1 arguments:(id)arg2;	// IMP=0x002000000000d5d6
- (id)un_stringWithMaxLength:(unsigned long long)arg1;	// IMP=0x0010000000009de0
- (unsigned long long)un_unsignedLongLongValue;	// IMP=0x0010000000009d78
@property(readonly, copy, nonatomic) NSString *un_localizedStringValue;
@property(readonly, copy, nonatomic) NSString *un_localizedStringKey;
@property(readonly, copy, nonatomic) NSArray *un_localizedStringArguments;
- (_Bool)un_isFirstPartyIdentifier;	// IMP=0x001000000001e654
- (id)un_logDigest;	// IMP=0x001000000001e4e5
@end

