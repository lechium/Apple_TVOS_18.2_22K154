//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_application_service_endpoint
{
    char *alias;	// 232 = 0xe8
    char *application_service;	// 240 = 0xf0
    unsigned char service_identifier[16];	// 248 = 0xf8
    char *device_name;	// 264 = 0x108
    char *device_model;	// 272 = 0x110
    unsigned int device_color;	// 280 = 0x118
    int route;	// 284 = 0x11c
    char *contact_id;	// 288 = 0x120
}

- (unsigned long long)getHash;	// IMP=0x0000000000450310
- (id)copyEndpoint;	// IMP=0x0000000000450260
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x0000000000450080
- (char *)createDescription:(_Bool)arg1;	// IMP=0x000000000044fc30
- (id)copyDictionary;	// IMP=0x000000000044fac0
- (unsigned int)type;	// IMP=0x000000000044fab0
- (void)dealloc;	// IMP=0x000000000044f9e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

