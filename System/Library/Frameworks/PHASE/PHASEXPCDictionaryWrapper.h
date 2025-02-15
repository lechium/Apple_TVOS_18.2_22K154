//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface PHASEXPCDictionaryWrapper : NSObject
{
    NSObject<OS_xpc_object> *_dictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001cfac2
+ (id)wrapperWithDictionary:(id)arg1;	// IMP=0x00100000001cf9a0
- (void).cxx_destruct;	// IMP=0x00000000001cfc1b
@property(readonly, nonatomic) NSObject<OS_xpc_object> *dictionary; // @synthesize dictionary=_dictionary;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001cfb9f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001cfaca
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001cf9fe

@end

