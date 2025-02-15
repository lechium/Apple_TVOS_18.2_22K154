//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMError, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MCMResultWithURLBase
{
    _Bool _existed;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    const char *_sandboxToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d102f
@property(readonly, nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(readonly, nonatomic) const char *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;	// IMP=0x00000000000d0ebc
- (id)initWithPath:(id)arg1 existed:(_Bool)arg2 sandboxToken:(const char *)arg3;	// IMP=0x00000000000d0df2
- (id)initWithURL:(id)arg1 existed:(_Bool)arg2 sandboxToken:(const char *)arg3;	// IMP=0x00000000000d0d2f
- (_Bool)encodeResultOntoReply:(id)arg1;	// IMP=0x00000000000d0b8b

// Remaining properties
@property(nonatomic, getter=isCacheable) _Bool cacheable;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) MCMError *error; // @dynamic error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

