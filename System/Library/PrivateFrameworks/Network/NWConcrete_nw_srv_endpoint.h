//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_srv_endpoint
{
    char *name;	// 232 = 0xe8
}

- (unsigned long long)getHash;	// IMP=0x00000000007c52a0
- (id)copyEndpoint;	// IMP=0x00000000007c5270
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x00000000007c51d0
- (char *)createDescription:(_Bool)arg1;	// IMP=0x00000000007c50d0
- (const char *)domainForPolicy;	// IMP=0x00000000007c50b0
- (id)copyDictionary;	// IMP=0x00000000007c5020
- (unsigned int)type;	// IMP=0x00000000007c5010
- (void)dealloc;	// IMP=0x00000000007c4fb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

