//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, NSString;

@interface PBLoretoUserProfileManagerServiceListener : NSObject
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001169d4
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001165a5
- (void)invalidate;	// IMP=0x0010000000116523
- (void)activate;	// IMP=0x0010000000116386
- (void)dealloc;	// IMP=0x00100000001162d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

