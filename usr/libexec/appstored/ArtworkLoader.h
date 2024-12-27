//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession;
@protocol OS_dispatch_source;

@interface ArtworkLoader : NSObject
{
    NSURLSession *_enforcedSession;	// 8 = 0x8
    NSURLSession *_unenforcedSession;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_invalidationTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000fbc09
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00100000000fb914

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

