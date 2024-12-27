//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, VUIUPPClientState;

__attribute__((visibility("hidden")))
@interface VUIUniversalPlaybackPositionTransactionContext : NSObject
{
    NSString *_capturedDomainVersion;	// 8 = 0x8
    VUIUPPClientState *_clientState;	// 16 = 0x10
    NSDictionary *_changes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000164437
@property(readonly, nonatomic) NSDictionary *changes; // @synthesize changes=_changes;
@property(readonly, nonatomic) VUIUPPClientState *clientState; // @synthesize clientState=_clientState;
- (id)lastSyncedDomainVersion;	// IMP=0x0000000000164415
- (id)initWithClientState:(id)arg1 changes:(id)arg2;	// IMP=0x0000000000164338

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

