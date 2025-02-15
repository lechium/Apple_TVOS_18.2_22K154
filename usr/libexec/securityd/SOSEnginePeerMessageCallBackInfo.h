//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SOSEnginePeerMessageCallBackInfo : NSObject
{
    CDUnknownBlockType _callbackBlock;	// 8 = 0x8
    struct __OpaqueSOSEngine *_engine;	// 16 = 0x10
    struct __OpaqueSOSPeer *_peer;	// 24 = 0x18
    struct __OpaqueSOSCoder *_coder;	// 32 = 0x20
    struct __OpaqueSOSManifest *_local;	// 40 = 0x28
    struct __OpaqueSOSManifest *_proposed;	// 48 = 0x30
    struct __OpaqueSOSManifest *_confirmed;	// 56 = 0x38
    struct __OpaqueSOSMessage *_message;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000100122
@property(nonatomic) struct __OpaqueSOSMessage *message; // @synthesize message=_message;
@property(nonatomic) struct __OpaqueSOSManifest *confirmed; // @synthesize confirmed=_confirmed;
@property(nonatomic) struct __OpaqueSOSManifest *proposed; // @synthesize proposed=_proposed;
@property(nonatomic) struct __OpaqueSOSManifest *local; // @synthesize local=_local;
@property(nonatomic) struct __OpaqueSOSCoder *coder; // @synthesize coder=_coder;
@property(nonatomic) struct __OpaqueSOSPeer *peer; // @synthesize peer=_peer;
@property(nonatomic) struct __OpaqueSOSEngine *engine; // @synthesize engine=_engine;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000fff1f
- (void)dealloc;	// IMP=0x00100000000ffe29
- (void)setCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ffd7d
- (void)callCallback:(_Bool)arg1;	// IMP=0x00100000000ffd33
- (id)initWithEngine:(struct __OpaqueSOSEngine *)arg1 peer:(struct __OpaqueSOSPeer *)arg2 localManifest:(struct __OpaqueSOSManifest *)arg3 proposedManifest:(struct __OpaqueSOSManifest *)arg4 confirmedManifest:(struct __OpaqueSOSManifest *)arg5 andMessage:(struct __OpaqueSOSMessage *)arg6;	// IMP=0x00100000000ffc08

@end

