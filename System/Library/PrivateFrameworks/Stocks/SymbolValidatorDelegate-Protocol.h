//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Stocks/NSObject-Protocol.h>

@class NSArray, NSError, SymbolValidator;

@protocol SymbolValidatorDelegate <NSObject>
- (void)symbolValidator:(SymbolValidator *)arg1 didFailWithError:(NSError *)arg2;
- (void)symbolValidator:(SymbolValidator *)arg1 didValidateSymbols:(NSArray *)arg2;
@end

