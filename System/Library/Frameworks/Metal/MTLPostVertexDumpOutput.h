//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLPostVertexDumpOutput : NSObject
{
    NSString *_airMDType;	// 8 = 0x8
    unsigned long long _dataType;	// 16 = 0x10
    unsigned long long _pixelFormat;	// 24 = 0x18
    unsigned long long _aluType;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    unsigned long long _offset;	// 48 = 0x30
}

@property(readonly) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long aluType; // @synthesize aluType=_aluType;
@property(readonly) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly) NSString *airMDType; // @synthesize airMDType=_airMDType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000151f28
- (id)description;	// IMP=0x0000000000151ee6
- (id)formattedDescription:(unsigned long long)arg1 withPrintedTypes:(id)arg2;	// IMP=0x0000000000151cfa
- (void)dealloc;	// IMP=0x0000000000151cb0
- (id)initWithAirMDType:(id)arg1 dataType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 aluType:(unsigned long long)arg4 name:(id)arg5 offset:(unsigned long long)arg6;	// IMP=0x0000000000151c2a

@end

