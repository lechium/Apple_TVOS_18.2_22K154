//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSDictionary, NSString, UIInputViewSetPlacement;

@protocol _UIRemoteKeyboardDistributedViewSource <NSObject>
- (void)setPlacement:(UIInputViewSetPlacement *)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;
- (void)completeTransition:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (void)updateTransition:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (void)startTransition:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
@end

