//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SEMSQLCommandOrder : NSObject
{
    long long _orderMode;	// 8 = 0x8
    NSArray *_columnNames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005d387
@property(readonly, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, nonatomic) long long orderMode; // @synthesize orderMode=_orderMode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d310
- (id)init;	// IMP=0x000000000005d2c8
- (id)description;	// IMP=0x000000000005d217
- (id)initWithOrderMode:(long long)arg1 columnNames:(id)arg2;	// IMP=0x000000000005d199

@end

