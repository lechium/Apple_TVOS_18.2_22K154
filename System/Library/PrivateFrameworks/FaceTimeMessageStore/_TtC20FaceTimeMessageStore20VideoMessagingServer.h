//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSData, _TtC20FaceTimeMessageStore18SandboxExtendedURL;

@interface _TtC20FaceTimeMessageStore20VideoMessagingServer : _TtCs12_SwiftObject
{
    MISSING_TYPE *fileTransferer;	// 16 = 0x10
    MISSING_TYPE *assetManager;	// 32 = 0x20
    MISSING_TYPE *outgoingMessageCache;	// 88 = 0x58
}

- (void)sendVideoMessageWithData:(NSData *)arg1 url:(_TtC20FaceTimeMessageStore18SandboxExtendedURL *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x000000000007e9c5

@end

