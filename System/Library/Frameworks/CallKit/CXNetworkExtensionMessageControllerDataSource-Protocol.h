//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol CXNetworkExtensionMessageControllerDataSource <NSObject>
- (void)sendNetworkExtensionMessage:(NSDictionary *)arg1 forBundleIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

