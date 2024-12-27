//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURL, NSURLSession;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryRequestSession : NSObject
{
    _Bool _cacheIPAddress;	// 8 = 0x8
    NSURLSession *_URLSession;	// 16 = 0x10
    NSOperationQueue *_requestQueue;	// 24 = 0x18
    NSOperationQueue *_completionQueue;	// 32 = 0x20
    NSURL *_serverURL;	// 40 = 0x28
    NSURL *_serverIPURL;	// 48 = 0x30
    NSString *_baseIPAddress;	// 56 = 0x38
}

+ (_Bool)_isNSURLCancelledError:(id)arg1;	// IMP=0x00600000000ad110
+ (id)_serverURLWithHost:(id)arg1 port:(unsigned long long)arg2;	// IMP=0x00600000000ad063
+ (id)_ipAddressFromPeerAddressData:(id)arg1 hostName:(id)arg2;	// IMP=0x00600000000acd6b
+ (id)new;	// IMP=0x00600000000abd6e
- (void).cxx_destruct;	// IMP=0x00000000000ad23e
@property(nonatomic) _Bool cacheIPAddress; // @synthesize cacheIPAddress=_cacheIPAddress;
@property(copy, nonatomic) NSString *baseIPAddress; // @synthesize baseIPAddress=_baseIPAddress;
@property(copy, nonatomic) NSURL *serverIPURL; // @synthesize serverIPURL=_serverIPURL;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(retain, nonatomic) NSOperationQueue *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (void)_updateBaseIPAddressWithResponse:(id)arg1;	// IMP=0x00000000000acb85
- (id)_handleRequestError:(id)arg1 request:(id)arg2;	// IMP=0x00000000000aca9e
- (void)cancelAllRequests;	// IMP=0x00000000000aca61
- (id)enqueueRequest:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ac1fc
@property(readonly, copy, nonatomic) NSURL *baseURL;
- (void)clearCachedIPAddress;	// IMP=0x00000000000ac0ee
- (void)setHostName:(id)arg1 andPort:(unsigned long long)arg2;	// IMP=0x00000000000ac02e
- (void)dealloc;	// IMP=0x00000000000abfc5
- (id)initWithMaxConcurrentConnections:(unsigned long long)arg1;	// IMP=0x00000000000abe0c
- (id)init;	// IMP=0x00000000000abd9d

@end

