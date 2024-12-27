//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface AIASSession : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    NSMutableDictionary *_taskMap;	// 16 = 0x10
    NSURLSession *_URLSession;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000002e69
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain) NSMutableDictionary *taskMap; // @synthesize taskMap=_taskMap;
- (void)invalidateAndCancel;	// IMP=0x0000000000002d72
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000002a47
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000000000028fe
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000028eb
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000022f3
- (id)requestWithURL:(id)arg1 data:(struct __CFDictionary *)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 appleITeamId:(id)arg6 appleIClientId:(id)arg7 additionalHeaders:(id)arg8;	// IMP=0x0000000000002027
- (id)getRequest:(id)arg1;	// IMP=0x0000000000001f36
- (id)init;	// IMP=0x0000000000001ea7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

