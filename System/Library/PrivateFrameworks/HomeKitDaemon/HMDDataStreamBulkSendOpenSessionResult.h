//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol HMDDataStreamBulkSendSession;

__attribute__((visibility("hidden")))
@interface HMDDataStreamBulkSendOpenSessionResult : NSObject
{
    id <HMDDataStreamBulkSendSession> _session;	// 8 = 0x8
    NSDictionary *_payload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000eec745
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) id <HMDDataStreamBulkSendSession> session; // @synthesize session=_session;
- (id)attributeDescriptions;	// IMP=0x0000000000eec613
- (id)initWithSession:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000eec57a

@end

