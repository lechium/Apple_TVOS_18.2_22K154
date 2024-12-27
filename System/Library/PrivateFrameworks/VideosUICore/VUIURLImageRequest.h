//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol VUIImageDecrypter;

__attribute__((visibility("hidden")))
@interface VUIURLImageRequest : NSObject
{
    NSURL *_url;	// 8 = 0x8
    NSDictionary *_headers;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    id <VUIImageDecrypter> _decrypter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000029275
@property(retain, nonatomic) id <VUIImageDecrypter> decrypter; // @synthesize decrypter=_decrypter;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3;	// IMP=0x00000000000291c1
- (id)initWithURL:(id)arg1 headers:(id)arg2 identifier:(id)arg3 decrypter:(id)arg4;	// IMP=0x00000000000290d9

@end

