//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistantUI/NSObject-Protocol.h>

@class NSDictionary, NSString, RUILinkLabel, UIImage, UILabel, UITableView, UIView;
@protocol RUIHeaderDelegate;

@protocol RUIHeader <NSObject>
- (id)initWithAttributes:(NSDictionary *)arg1;

@optional
- (void)setHTMLContent:(NSString *)arg1 toElementsMatchingQuery:(NSString *)arg2;
- (double)headerHeightForWidth:(double)arg1 inTableView:(UITableView *)arg2;
- (void)setSectionIsFirst:(_Bool)arg1;
- (void)setDelegate:(id <RUIHeaderDelegate>)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setIconImage:(UIImage *)arg1;
- (RUILinkLabel *)detailHeaderLabel;
- (void)setDetailText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setImageLabelPadding:(double)arg1;
- (void)setSubHeaderTopMargin:(double)arg1;
- (UILabel *)subHeaderLabel;
- (void)setSubHeaderText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (UILabel *)headerLabel;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (double)headerHeightForWidth:(double)arg1 inView:(UIView *)arg2;
@end

