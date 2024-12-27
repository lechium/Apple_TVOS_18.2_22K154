//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVSPreferences;

@interface TVSettingsPreferenceFacade : NSObject
{
    TVSPreferences *_prefs;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000012de6
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)synchronize;	// IMP=0x0010000000012dc6
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0010000000012db0
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0010000000012d9a
- (id)initWithDomain:(id)arg1 notifyChanges:(_Bool)arg2;	// IMP=0x0010000000012cab

@end

