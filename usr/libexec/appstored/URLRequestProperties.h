//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSBagValue, AMSProcessInfo, LogKey, NSData, NSDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface URLRequestProperties : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    _Bool _compressRequestBody;	// 16 = 0x10
    _Bool _shouldAppendGUIDParameter;	// 17 = 0x11
    _Bool _URLKnownToBeTrusted;	// 18 = 0x12
    ACAccount *_account;	// 24 = 0x18
    AMSBagValue *_bagURL;	// 32 = 0x20
    AMSProcessInfo *_clientInfo;	// 40 = 0x28
    long long _KBSyncType;	// 48 = 0x30
    LogKey *_logKey;	// 56 = 0x38
    unsigned long long _requestCachePolicy;	// 64 = 0x40
    NSData *_requestBodyData;	// 72 = 0x48
    long long _requestMethod;	// 80 = 0x50
    NSURL *_URL;	// 88 = 0x58
    long long _dataEncoding;	// 96 = 0x60
    NSDictionary *_requestHeaders;	// 104 = 0x68
    NSDictionary *_requestParameters;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000193eb3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000193bf7
- (id)init;	// IMP=0x0010000000192919

@end

