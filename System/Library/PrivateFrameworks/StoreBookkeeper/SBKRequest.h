//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISDataProvider, NSData, NSDictionary, NSString, NSURL, SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKRequest : NSObject
{
    _Bool _shouldAuthenticate;	// 8 = 0x8
    NSURL *_requestURL;	// 16 = 0x10
    NSString *_action;	// 24 = 0x18
    NSData *_bodyData;	// 32 = 0x20
    long long _bodyContentType;	// 40 = 0x28
    NSDictionary *_headers;	// 48 = 0x30
    NSDictionary *_arguments;	// 56 = 0x38
    long long _method;	// 64 = 0x40
    ISDataProvider *_responseDataProvider;	// 72 = 0x48
    _Bool _concurrent;	// 80 = 0x50
    _Bool _includeDeviceGUID;	// 81 = 0x51
    SBKTransaction *_transaction;	// 88 = 0x58
}

+ (id)_contentTypeStringForBodyContentType:(long long)arg1;	// IMP=0x006000000002141f
+ (id)_contentEncodingTypeStringForBodyContentEncodingType:(long long)arg1;	// IMP=0x0060000000021408
+ (id)_methodStringForMethod:(long long)arg1;	// IMP=0x00600000000213ec
+ (long long)bodyContentEncodingType;	// IMP=0x0060000000021399
+ (long long)bodyContentType;	// IMP=0x0060000000021342
+ (id)requestWithRequestURL:(id)arg1;	// IMP=0x00600000000212a5
- (void).cxx_destruct;	// IMP=0x0000000000021214
@property(retain, nonatomic) ISDataProvider *responseDataProvider; // @synthesize responseDataProvider=_responseDataProvider;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) _Bool includeDeviceGUID; // @synthesize includeDeviceGUID=_includeDeviceGUID;
@property(nonatomic) _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(readonly, nonatomic, getter=isConcurrent) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(retain, nonatomic) SBKTransaction *transaction; // @synthesize transaction=_transaction;
- (id)newURLOperationWithDelegate:(id)arg1;	// IMP=0x000000000002116b
- (id)newURLOperation;	// IMP=0x0000000000021144
- (id)_defaultHeaderFields;	// IMP=0x0000000000021004
- (_Bool)acceptsGzipEncoding;	// IMP=0x0000000000020ffc
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x0000000000020fef
- (id)copyRequestProperties;	// IMP=0x0000000000020dec
- (void)setBodyDataWithPropertyList:(id)arg1;	// IMP=0x0000000000020c14
- (void)setValue:(id)arg1 forArgument:(id)arg2;	// IMP=0x0000000000020b1d
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;	// IMP=0x0000000000020b07
- (id)descriptionWithoutHeaderFields;	// IMP=0x0000000000020a52
@property(readonly, nonatomic) double timeoutInterval;
- (id)description;	// IMP=0x000000000002096d
- (id)initWithRequestURL:(id)arg1;	// IMP=0x000000000002081f

@end

