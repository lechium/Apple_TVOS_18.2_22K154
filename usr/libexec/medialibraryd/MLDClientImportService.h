//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MLDClientImportService : NSObject
{
    NSMutableArray *_activeSessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
}

+ (id)sharedService;	// IMP=0x00200000000149f4
- (void).cxx_destruct;	// IMP=0x00200000000146c8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000014192
- (id)init;	// IMP=0x00100000000140e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

