//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC19appstorecomponentsd19ServiceBrokerClient : NSObject
{
    MISSING_TYPE *session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00400000000e7420
- (id)init;	// IMP=0x00100000000e73c0
- (void)getUtilityServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e7320
- (void)getAppOfferStateServiceForDelegate:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e6ee0
- (void)getMetricsServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e6410
- (void)getLockupFetcherServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e6090
- (void)testConnectionWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e5d10

@end

