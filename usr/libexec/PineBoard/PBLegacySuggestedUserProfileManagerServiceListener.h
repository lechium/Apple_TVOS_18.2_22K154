//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, NSString;

@interface PBLegacySuggestedUserProfileManagerServiceListener : NSObject
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007f577
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000007f2c6
- (void)invalidate;	// IMP=0x001000000007f244
- (void)activate;	// IMP=0x001000000007f0e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

