//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SDManagedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    _Bool _sendNotification;	// 12 = 0xc
    NSDictionary *_servers;	// 16 = 0x10
}

+ (id)sharedBrowser;	// IMP=0x0040000000136631
- (void).cxx_destruct;	// IMP=0x00200000001367d9
- (void)stop;	// IMP=0x00100000001367b8
- (void)start;	// IMP=0x001000000013674a
- (void)buildNodesAndNotify;	// IMP=0x0010000000136744
@property(readonly, copy) NSArray *nodes;
- (void)setServers:(id)arg1;	// IMP=0x00100000001366df
- (id)init;	// IMP=0x0010000000136686

@end

