//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString, NSTimer, NSUUID;

@interface SDActivityRequestRecord : NSObject
{
    NSDate *_requestCreatedDate;	// 8 = 0x8
    NSUUID *_requestIdentifier;	// 16 = 0x10
    NSString *_deviceIdentifier;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSTimer *_timeoutTimer;	// 40 = 0x28
    long long _timeoutTimeInterval;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000000bdfa
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long timeoutTimeInterval; // @synthesize timeoutTimeInterval=_timeoutTimeInterval;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(copy, nonatomic) NSDate *requestCreatedDate; // @synthesize requestCreatedDate=_requestCreatedDate;
- (id)description;	// IMP=0x001000000000bbf8
- (id)init;	// IMP=0x001000000000bba2

@end

