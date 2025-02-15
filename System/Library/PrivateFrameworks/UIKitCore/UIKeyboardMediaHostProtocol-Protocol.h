//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSFileHandle, NSString;

@protocol UIKeyboardMediaHostProtocol <NSObject>
- (void)draggedStickerToPoint:(struct CGPoint)arg1;
- (void)requestInsertionPointCompletion:(void (^)(struct CGPoint))arg1;
- (void)stageStickerWithFileHandle:(NSFileHandle *)arg1 url:(NSString *)arg2 accessibilityLabel:(NSString *)arg3;
- (void)pasteImageAtFileHandle:(NSFileHandle *)arg1;
- (void)dismissCard;
- (void)presentCard;
@end

