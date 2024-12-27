//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager;

@interface AKAuthorizationListUpdateService : NSObject
{
    AKAccountManager *_accountManager;	// 8 = 0x8
}

+ (id)sharedService;	// IMP=0x00400000000bc27e
- (void).cxx_destruct;	// IMP=0x00200000000bcc7a
- (void)_clearStaleCachedDevices;	// IMP=0x00100000000bcb85
- (void)performGlobalConfigUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bca14
- (void)performAuthorizationCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bc64a
- (void)start;	// IMP=0x00100000000bc339
- (id)init;	// IMP=0x00100000000bc2d3

@end

