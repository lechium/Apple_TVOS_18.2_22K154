//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariCore/NSObject-Protocol.h>

@protocol WBSKeychainCredentialNotificationMonitor <NSObject>
- (void)triggerExternalNotification;
- (void)removeObserverForToken:(id)arg1;
- (id)addObserverWithBlock:(void (^)(void))arg1;
@end

