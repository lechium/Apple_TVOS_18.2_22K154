//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

@interface GDDonationView : NSObject
{
    id <GDViewAccessAssertion> _accessAssertion;	// 8 = 0x8
    _PASSqliteDatabase *_db;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000353138
- (void)enumerateTriples:(CDUnknownBlockType)arg1;	// IMP=0x000000000035309a
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;	// IMP=0x0000000000353001

@end

