//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVUIKit/NSCopying-Protocol.h>
#import <TVUIKit/NSObject-Protocol.h>

@class UIView;
@protocol UIConfigurationState, UIContentView;

@protocol UIContentConfiguration <NSObject, NSCopying>
- (id)updatedConfigurationForState:(id <UIConfigurationState>)arg1;
- (UIView<UIContentView> *)makeContentView;
@end

