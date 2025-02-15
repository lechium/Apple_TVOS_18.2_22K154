//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, PBProfileAccountsController;

@protocol PBProfileAccountsControllerDelegate <NSObject>
- (void)profileAccountsController:(PBProfileAccountsController *)arg1 quitApplicationsRunningWithPersonaUniqueString:(NSString *)arg2 completion:(void (^)(void))arg3;

@optional
- (void)profileAccountsControllerDidHandleAllAccountNotifications:(PBProfileAccountsController *)arg1;
@end

