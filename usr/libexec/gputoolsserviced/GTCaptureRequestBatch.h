//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GTCaptureRequestBatch : NSObject
{
    unsigned long long _requestID;	// 8 = 0x8
    NSArray *_requests;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000424c
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000041e1
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000415a
- (id)initWithRequestID:(unsigned long long)arg1;	// IMP=0x001000000000411d
- (id)init;	// IMP=0x00100000000040be

@end

