//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface APSDNSCacheIPAddress : NSObject
{
    NSString *_ipAddress;	// 8 = 0x8
    unsigned long long _addressFamily;	// 16 = 0x10
    NSDate *_expirationTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000075ebb
@property(readonly) NSDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(readonly) unsigned long long addressFamily; // @synthesize addressFamily=_addressFamily;
@property(readonly) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void)updateExpirationTime:(double)arg1;	// IMP=0x0010000000075e46
- (id)initWithIPAddress:(id)arg1 addressFamily:(unsigned long long)arg2 timeToLive:(double)arg3;	// IMP=0x0010000000075db5

@end

