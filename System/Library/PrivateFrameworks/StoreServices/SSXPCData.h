//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSObject;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SSXPCData : NSData
{
    NSObject<OS_xpc_object> *_xpcData;	// 8 = 0x8
}

@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcData; // @synthesize xpcData=_xpcData;
- (unsigned long long)length;	// IMP=0x000000000014eb4f
- (const void *)bytes;	// IMP=0x000000000014eb3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014eb2f
- (void)dealloc;	// IMP=0x000000000014eae9
- (id)initWithXPCData:(id)arg1;	// IMP=0x000000000014ea59

@end

