//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSObject-Protocol.h>

@class UITraitCollection, UIView;
@protocol _UIContentView;

@protocol _UIContentViewConfiguration <NSObject, NSCopying>
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(UITraitCollection *)arg2;
- (id)updatedConfigurationForState:(unsigned long long)arg1;
- (UIView<_UIContentView> *)createContentView;

@optional
- (void)applyToContentView:(UIView *)arg1;
@end

