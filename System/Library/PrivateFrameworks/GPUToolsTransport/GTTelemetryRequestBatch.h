//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface GTTelemetryRequestBatch : NSObject
{
    unsigned long long _requestID;	// 8 = 0x8
    NSArray *_requests;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003528f
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
- (id)initNoRequestID;	// IMP=0x00000000000351f9
- (id)init;	// IMP=0x000000000003519a

@end

