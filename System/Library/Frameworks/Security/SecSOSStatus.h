//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SecSOSStatus : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a36fb
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)init;	// IMP=0x00000000000a3562

@end

