//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (NAErrors)
+ (id)na_genericError;	// IMP=0x0060000000002a7e
+ (id)na_cancelledError;	// IMP=0x0060000000002a53
+ (id)na_timeoutError;	// IMP=0x0060000000002a3c
+ (id)na_errorWithCode:(unsigned long long)arg1;	// IMP=0x0060000000002a16
- (_Bool)na_isCancelledError;	// IMP=0x0010000000002b0a
- (_Bool)na_isTimeoutError;	// IMP=0x0010000000002a95
@end

