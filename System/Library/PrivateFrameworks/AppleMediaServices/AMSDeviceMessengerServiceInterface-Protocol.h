//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSXDMessage;

@protocol AMSDeviceMessengerServiceInterface <NSObject>
- (void)sendMessage:(AMSXDMessage *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getMessagesWithPurpose:(long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

