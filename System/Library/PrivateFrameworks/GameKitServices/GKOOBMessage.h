//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GKOOBMessage : NSObject
{
    unsigned short _type;	// 8 = 0x8
}

@property(readonly) unsigned short type; // @synthesize type=_type;
- (_Bool)_checkSize:(unsigned long long)arg1;	// IMP=0x000000000003b265
- (_Bool)_checkType:(unsigned short)arg1;	// IMP=0x000000000003b256
- (id)data;	// IMP=0x000000000003b20e
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000003aedf
- (id)initWithMessageType:(unsigned short)arg1;	// IMP=0x000000000003aea3

@end

