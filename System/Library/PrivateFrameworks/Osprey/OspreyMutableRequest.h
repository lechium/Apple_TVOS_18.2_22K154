//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface OspreyMutableRequest : NSObject
{
    NSMutableDictionary *_additionalHeaders;	// 8 = 0x8
    _Bool _enableDeviceAuthentication;	// 16 = 0x10
    _Bool _allowsCellularAccess;	// 17 = 0x11
    _Bool _compressionEnabled;	// 18 = 0x12
    _Bool _forceHTTPv2;	// 19 = 0x13
    NSString *_methodName;	// 24 = 0x18
    NSString *_clientTraceIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000010488
@property(nonatomic) _Bool forceHTTPv2; // @synthesize forceHTTPv2=_forceHTTPv2;
@property(nonatomic, getter=isCompressionEnabled) _Bool compressionEnabled; // @synthesize compressionEnabled=_compressionEnabled;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) _Bool enableDeviceAuthentication; // @synthesize enableDeviceAuthentication=_enableDeviceAuthentication;
@property(copy, nonatomic) NSString *clientTraceIdentifier; // @synthesize clientTraceIdentifier=_clientTraceIdentifier;
@property(readonly, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(nonatomic) _Bool requireAbsintheAuthentication;
- (id)buildInternalRequest;	// IMP=0x00000000000102b4
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;	// IMP=0x0000000000010233
- (id)initWithMethodName:(id)arg1;	// IMP=0x00000000000101b8

@end

