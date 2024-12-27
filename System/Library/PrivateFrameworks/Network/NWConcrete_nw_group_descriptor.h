//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_array, OS_nw_endpoint;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_group_descriptor : NSObject
{
    int type;	// 8 = 0x8
    unsigned char group_id[16];	// 16 = 0x10
    NSObject<OS_nw_array> *members;	// 32 = 0x20
    NSObject<OS_nw_endpoint> *specific_source;	// 40 = 0x28
    unsigned int disable_unicast_traffic:1;	// 48 = 0x30
    unsigned int __pad_bits:7;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000291a60
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000002919b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

