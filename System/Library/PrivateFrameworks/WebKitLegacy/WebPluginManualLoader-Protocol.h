//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSURLResponse, WAKView;

@protocol WebPluginManualLoader
- (void)pluginViewFinishedLoading:(WAKView *)arg1;
- (void)pluginView:(WAKView *)arg1 receivedError:(NSError *)arg2;
- (void)pluginView:(WAKView *)arg1 receivedData:(NSData *)arg2;
- (void)pluginView:(WAKView *)arg1 receivedResponse:(NSURLResponse *)arg2;
@end

