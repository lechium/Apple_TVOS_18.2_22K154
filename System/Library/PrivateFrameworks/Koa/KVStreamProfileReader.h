//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVProfileInfo, NSData, NSString;

@interface KVStreamProfileReader : NSObject
{
    NSData *_data;	// 8 = 0x8
    KVProfileInfo *_profileInfo;	// 16 = 0x10
    unsigned int _offset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000024357
@property(readonly, copy) NSString *description;
- (id)profileInfo;	// IMP=0x00000000000242da
- (_Bool)enumerateDatasetsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023ece
- (id)data;	// IMP=0x0000000000023ec0
- (id)initWithData:(id)arg1 profileInfo:(id)arg2 offset:(unsigned int)arg3;	// IMP=0x0000000000023dfe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

