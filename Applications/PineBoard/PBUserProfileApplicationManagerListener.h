//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, MISSING_TYPE, NSString;

@interface PBUserProfileApplicationManagerListener : NSObject
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x002000000019191b
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001915c7
- (void)invalidate;	// IMP=0x0010000000191545
- (void)activate;	// IMP=0x00100000001913e6
- (void)dealloc;	// IMP=0x0010000000191335

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

