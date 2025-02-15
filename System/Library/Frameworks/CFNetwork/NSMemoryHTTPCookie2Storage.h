//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSMemoryHTTPCookie2Storage : NSObject
{
    NSMutableDictionary *memoryCookies;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002198d8
- (id)getCookiesWithFilter:(id)arg1;	// IMP=0x0000000000219391
- (id)getAllCookies;	// IMP=0x000000000021905b
- (void)deleteCookiesWithFilter:(id)arg1;	// IMP=0x0000000000218ede
- (void)deleteCookies:(id)arg1;	// IMP=0x0000000000218d6e
- (void)deleteCookie:(id)arg1;	// IMP=0x0000000000218bf2
- (void)deleteAllCookies;	// IMP=0x0000000000218bdc
- (void)setCookies:(id)arg1;	// IMP=0x0000000000218a6c
- (void)setCookie:(id)arg1;	// IMP=0x000000000021890f
- (id)init;	// IMP=0x000000000021889b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

