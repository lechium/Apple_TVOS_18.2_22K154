//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayIdentity;

__attribute__((visibility("hidden")))
@interface _SSKDisplayMonitorIdentityRecord : NSObject
{
    _Bool _connectedAtInit;	// 8 = 0x8
    FBSDisplayIdentity *_displayIdentity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004594
@property(readonly, nonatomic, getter=didConnectAtInit) _Bool connectedAtInit; // @synthesize connectedAtInit=_connectedAtInit;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
- (id)description;	// IMP=0x00000000000044df
- (id)initWithIdentity:(id)arg1 connectedAtInit:(_Bool)arg2;	// IMP=0x0000000000004469

@end

