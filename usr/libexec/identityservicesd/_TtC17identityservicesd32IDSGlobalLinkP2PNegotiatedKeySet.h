//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface _TtC17identityservicesd32IDSGlobalLinkP2PNegotiatedKeySet : NSObject
{
    MISSING_TYPE *serverSecret;	// 8 = 0x8
    MISSING_TYPE *clientSecret;	// 24 = 0x18
    MISSING_TYPE *counters;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000004e7b00
- (id)init;	// IMP=0x00100000004e7ab0
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *sensitiveDescription;
@property(nonatomic, readonly) NSData *clientSecret;
@property(nonatomic, readonly) NSData *serverSecret;

@end

