//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AXAssertionWorkItem : NSObject
{
    _Bool _acquire;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    unsigned long long _retries;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000150c4
@property(nonatomic) unsigned long long retries; // @synthesize retries=_retries;
@property(readonly, nonatomic) _Bool acquire; // @synthesize acquire=_acquire;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(_Bool)arg3;	// IMP=0x0000000000014fc6

@end

