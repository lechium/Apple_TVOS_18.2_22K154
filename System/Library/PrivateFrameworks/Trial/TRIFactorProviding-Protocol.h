//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Trial/NSObject-Protocol.h>

@class NSArray, NSString, TRILevel;

@protocol TRIFactorProviding <NSObject>
- (NSArray *)factorLevelsWithNamespace:(unsigned int)arg1;
- (TRILevel *)levelForFactor:(NSString *)arg1 withNamespace:(unsigned int)arg2;
- (void)cacheFactorLevelsWithNamespaceName:(NSString *)arg1;
- (NSArray *)factorLevelsWithNamespaceName:(NSString *)arg1;
- (TRILevel *)levelForFactor:(NSString *)arg1 withNamespaceName:(NSString *)arg2;
@end

