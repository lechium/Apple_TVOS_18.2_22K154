//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, NSString;

@interface PBScheduledSleepServiceListener : NSObject
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000b06bb
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
- (void)invalidate;	// IMP=0x00100000000b066c
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000b02c8
- (void)activate;	// IMP=0x00100000000b01bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

