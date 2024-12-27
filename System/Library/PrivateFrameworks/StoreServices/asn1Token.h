//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface asn1Token : NSObject
{
    unsigned char mClass;	// 8 = 0x8
    unsigned long long mIdentifier;	// 16 = 0x10
    unsigned long long mLength;	// 24 = 0x18
    const char *mContent;	// 32 = 0x20
}

+ (id)readOpaqueTokenFromBuffer:(const char *)arg1;	// IMP=0x00600000000f6c9e
+ (id)readTokenFromBuffer:(const char *)arg1;	// IMP=0x00600000000f6c83
+ (id)readTokenFromBuffer:(const char *)arg1 opaque:(_Bool)arg2;	// IMP=0x00600000000f6b45
@property(readonly) const char *content; // @synthesize content=mContent;
@property(readonly) unsigned long long length; // @synthesize length=mLength;
@property(readonly) unsigned long long identifier; // @synthesize identifier=mIdentifier;
@property(readonly) unsigned char tokenClass; // @synthesize tokenClass=mClass;
- (id)description;	// IMP=0x00000000000f6cbc
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(_Bool)arg5;	// IMP=0x00000000000f6ae7

@end

