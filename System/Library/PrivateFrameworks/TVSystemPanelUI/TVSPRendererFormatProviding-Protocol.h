//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, TVSPLayoutEnvironment, TVSPStyling, TVSPSubviews, UIContextMenuConfiguration, UIView;
@protocol TVSPContentProviding;

@protocol TVSPRendererFormatProviding
@property(readonly, nonatomic) long long shadowStyle;
@property(readonly, nonatomic) long long materialStyle;
@property(readonly, nonatomic) long long focusStyle;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) NSArray *subviewIdentifiersWantingAutolayout;
@property(readonly, nonatomic) _Bool wantsFloatingContentView;
@property(readonly, nonatomic) _Bool isFocusable;
@property(readonly, nonatomic) id <TVSPContentProviding> content;
@property(readonly, nonatomic) UIContextMenuConfiguration *contextMenuConfiguration;
@property(readonly, nonatomic) long long format;
- (NSArray *)layoutConstraintsWithSubviews:(TVSPSubviews *)arg1 contentView:(UIView *)arg2;
- (struct CGSize)contentSizeForLayoutEnvironment:(TVSPLayoutEnvironment *)arg1;
- (NSArray *)stylingsForContentSelected:(_Bool)arg1 state:(unsigned long long)arg2;
- (TVSPStyling *)stylingForState:(unsigned long long)arg1 identifier:(NSString *)arg2;
@end

