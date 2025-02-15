//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol IDSDaemonMIGQueryInterfaceDelegate, IDSXPCConnectionProtocol;

@interface IDSDaemonMIGQueryInterface : NSObject
{
    id <IDSXPCConnectionProtocol> _server;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    _Bool _shuttingDown;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000003acdab
- (void).cxx_destruct;	// IMP=0x00200000003af934
@property __weak id <IDSDaemonMIGQueryInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)denyIncomingGrantRequests;	// IMP=0x00100000003af8cb
- (void)acceptIncomingGrantRequests;	// IMP=0x00100000003af85d
- (void)__setupServer;	// IMP=0x00100000003ace00

@end

