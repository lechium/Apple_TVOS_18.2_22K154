//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class NSDictionary;

@protocol PBSOSUpdateServiceDelegate <NSObject>
- (void)osUpdateServiceDidFinishApplyWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidUpdateApplyProgressWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartApplyWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartRedownloadWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidFinishDownloadWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidUpdateDownloadProgressWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartDownloadWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidFinishCheckWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartCheckWithData:(NSDictionary *)arg1;
@end

