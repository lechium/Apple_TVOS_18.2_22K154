//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface TKSmartCardSessionRequest : NSObject
{
    NSDictionary *_parameters;	// 8 = 0x8
    CDUnknownBlockType _reply;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000017bb9
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;

@end

