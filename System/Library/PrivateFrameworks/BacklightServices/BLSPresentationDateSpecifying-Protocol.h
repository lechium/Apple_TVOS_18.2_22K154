//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol BLSPresentationDateSpecifying <NSObject>
@property(readonly, nonatomic) NSArray *specifiers;
@property(readonly, nonatomic) NSDate *presentationDate;
- (NSString *)bls_shortLoggingString;
- (NSString *)bls_loggingString;
@end

