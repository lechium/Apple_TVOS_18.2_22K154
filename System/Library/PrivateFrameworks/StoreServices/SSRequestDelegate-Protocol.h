//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/NSObject-Protocol.h>

@class NSError, SSRequest;

@protocol SSRequestDelegate <NSObject>

@optional
- (void)requestDidFinish:(SSRequest *)arg1;
- (void)request:(SSRequest *)arg1 didFailWithError:(NSError *)arg2;
@end

