//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OspreyDeferredObject;

__attribute__((visibility("hidden")))
@interface OspreyClientStreamContextPromise : NSObject
{
    OspreyDeferredObject *_deferredContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000c496
- (void)writeFrame:(id)arg1 compressed:(_Bool)arg2;	// IMP=0x000000000000c3de
- (void)writeFrame:(id)arg1;	// IMP=0x000000000000c330
- (void)finishWriting;	// IMP=0x000000000000c2fe
- (void)fulfill:(id)arg1;	// IMP=0x000000000000c2e8
- (id)initWithFulfillmentQueue:(id)arg1;	// IMP=0x000000000000c266

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

