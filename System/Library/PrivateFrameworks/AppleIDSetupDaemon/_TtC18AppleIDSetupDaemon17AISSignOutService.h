//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class AISSignOutContext, MISSING_TYPE;

@interface _TtC18AppleIDSetupDaemon17AISSignOutService : _TtCs12_SwiftObject
{
    MISSING_TYPE *serviceOwnersManager;	// 16 = 0x10
    MISSING_TYPE *accountStore;	// 56 = 0x38
    MISSING_TYPE *userProfileManager;	// 96 = 0x60
}

- (void)signOutAllAccountsWith:(AISSignOutContext *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00000000000a7d80

@end

