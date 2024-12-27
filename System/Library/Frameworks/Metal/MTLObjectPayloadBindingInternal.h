//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLObjectPayloadBindingInternal
{
    unsigned short _alignment;	// 64 = 0x40
    unsigned int _dataSize;	// 68 = 0x44
    unsigned long long _dataType;	// 72 = 0x48
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000922f3
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000921a5
- (void)setStructType:(id)arg1;	// IMP=0x000000000009219c
- (void)setStructType:(id)arg1 doRetain:(_Bool)arg2;	// IMP=0x0000000000092102
- (id)structType;	// IMP=0x00000000000920f0
- (id)objectPayloadStructType;	// IMP=0x00000000000920be
- (unsigned long long)objectPayloadDataType;	// IMP=0x00000000000920ad
@property(readonly) unsigned long long objectPayloadDataSize;
@property(readonly) unsigned long long objectPayloadAlignment;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9;	// IMP=0x0000000000091fbd
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 dataSize:(unsigned long long)arg7 alignment:(unsigned long long)arg8;	// IMP=0x0000000000091f87

// Remaining properties
@property(readonly) unsigned long long access;
@property(readonly, getter=isArgument) _Bool argument;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long index;
@property(readonly) NSString *name;
@property(readonly) Class superclass;
@property(readonly) long long type;
@property(readonly, getter=isUsed) _Bool used;

@end

