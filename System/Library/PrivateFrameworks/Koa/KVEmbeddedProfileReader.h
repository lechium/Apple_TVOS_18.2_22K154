//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVProfileInfo, NSData, NSString;

@interface KVEmbeddedProfileReader : NSObject
{
    NSData *_data;	// 8 = 0x8
    const struct Profile *_profile;	// 16 = 0x10
    KVProfileInfo *_profileInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000237b1
@property(readonly, copy) NSString *description;
- (id)profileInfo;	// IMP=0x0000000000023734
- (_Bool)enumerateDatasetsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023618
- (id)data;	// IMP=0x000000000002360a
- (id)initWithData:(id)arg1 profile:(const struct Profile *)arg2 profileInfo:(id)arg3;	// IMP=0x0000000000023549

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

