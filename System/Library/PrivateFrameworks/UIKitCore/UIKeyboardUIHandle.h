//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, UIKeyboardUIService;
@protocol BSServiceConnectionHost;

__attribute__((visibility("hidden")))
@interface UIKeyboardUIHandle : NSObject
{
    BSServiceConnection<BSServiceConnectionHost> *_connection;	// 8 = 0x8
    UIKeyboardUIService *_service;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000012f9bc9
- (void)setKeyboardAlpha:(id)arg1 force:(id)arg2 processId:(id)arg3;	// IMP=0x00000000012f99b0
- (id)snapshotForOptions:(id)arg1;	// IMP=0x00000000012f96e5
- (id)snapshotForView:(id)arg1;	// IMP=0x00000000012f90bf
- (id)initWithService:(id)arg1 connection:(id)arg2;	// IMP=0x00000000012f902c

@end

