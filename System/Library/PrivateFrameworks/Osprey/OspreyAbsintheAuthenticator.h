//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OspreyAbsintheAuthenticator : NSObject
{
}

- (void)ensureAuthenticatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003933
- (_Bool)isSessionInfoExpired;	// IMP=0x000000000000392b
- (void)signData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000000389a
- (id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2;	// IMP=0x000000000000386b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

