//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSNumber, NSPredicate, NSString;

@interface CKSQLiteCompiledStatementSetup : NSObject
{
    NSString *_sql;	// 8 = 0x8
    NSPredicate *_wherePredicate;	// 16 = 0x10
    NSMutableString *_orderBySQL;	// 24 = 0x18
    NSNumber *_limit;	// 32 = 0x20
    NSNumber *_offset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d11ea

@end

