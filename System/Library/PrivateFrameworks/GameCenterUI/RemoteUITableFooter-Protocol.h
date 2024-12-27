//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class NSDictionary, NSString, RUIPage, UITableView, UIView;
@protocol RUITableFooterDelegate;

@protocol RemoteUITableFooter <NSObject>
- (id)initWithAttributes:(NSDictionary *)arg1;

@optional
- (void)configureInPage:(RUIPage *)arg1;
- (double)footerHeightForWidth:(double)arg1 inTableView:(UITableView *)arg2;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setDelegate:(id <RUITableFooterDelegate>)arg1;
- (double)footerHeightForWidth:(double)arg1 inView:(UIView *)arg2;
@end

