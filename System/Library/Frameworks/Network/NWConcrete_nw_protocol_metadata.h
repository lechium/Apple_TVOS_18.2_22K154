//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_protocol_definition;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_metadata : NSObject
{
    NWConcrete_nw_protocol_definition *definition;	// 8 = 0x8
    unsigned char identifier[16];	// 16 = 0x10
    void *handle;	// 32 = 0x20
    char *data;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000029c720
- (void)dealloc;	// IMP=0x000000000029c680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

