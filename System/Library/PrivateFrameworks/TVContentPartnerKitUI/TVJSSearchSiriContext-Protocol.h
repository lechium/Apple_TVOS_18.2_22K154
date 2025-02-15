//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/JSExport-Protocol.h>

@class NSDictionary, NSString, TVSSContentItem, TVSSSearchResultBatch;

@protocol TVJSSearchSiriContext <JSExport>
@property(readonly, copy, nonatomic) NSString *pluginMode;
- (void)sendMetricsWithCategory:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)fetchNextBatch:(TVSSSearchResultBatch *)arg1;
- (void)didPlayContentItemInPartialScreenPluginMode:(TVSSContentItem *)arg1;
- (void)didSelectContentItemInPartialScreenPluginMode:(TVSSContentItem *)arg1;
@end

