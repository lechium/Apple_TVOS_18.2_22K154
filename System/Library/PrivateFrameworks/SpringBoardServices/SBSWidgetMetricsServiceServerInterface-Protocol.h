//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class CHSWidget, CHSWidgetMetrics, CHSWidgetMetricsSpecification, NSDictionary, NSString, UISDeviceContext, UISDisplayContext;
@protocol __NSString__><__CHSWidgetMetricsSpecification__;

@protocol SBSWidgetMetricsServiceServerInterface <NSObject>
- (NSDictionary<__NSString__><__CHSWidgetMetricsSpecification__> *)previewMetricsSpecificationsForDeviceContext:(UISDeviceContext *)arg1 displayContext:(UISDisplayContext *)arg2 bundleIdentifier:(NSString *)arg3;
- (NSDictionary<__NSString__><__CHSWidgetMetricsSpecification__> *)previewMetricsSpecificationsForBundleIdentifier:(NSString *)arg1;
- (CHSWidgetMetrics *)systemMetricsForWidget:(CHSWidget *)arg1 inHostingEnvironment:(NSString *)arg2;
- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForDeviceContext:(UISDeviceContext *)arg1 displayContext:(UISDisplayContext *)arg2 bundleIdentifier:(NSString *)arg3;
- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForBundleIdentifier:(NSString *)arg1;
- (CHSWidgetMetrics *)systemMetricsForWidget:(CHSWidget *)arg1;
@end

