//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSBaseMessage, NSArray, NSString;

@protocol IDSAPNSAckTrackerDelegate
- (void)receivedAPNSAckForMessage:(IDSBaseMessage *)arg1 guid:(NSString *)arg2;
- (void)finishedTrackingAPNSAcksWithURIs:(NSArray *)arg1 guid:(NSString *)arg2;
@end

