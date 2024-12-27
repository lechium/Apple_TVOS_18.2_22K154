//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKPlayer.h>

@interface GKPlayer (UIPrivate)
+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;	// IMP=0x00800000000a96eb
+ (id)monogramQueue;	// IMP=0x00800000000a8002
+ (long long)sizeForPhotoSize:(long long)arg1;	// IMP=0x00800000000a7448
- (void)clearInMemoryCachedAvatars;	// IMP=0x00100000000a9562
- (void)_playerAvatarWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a8ab1
- (void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a89a5
- (void)playerAvatarDataWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a8899
- (void)monogramImageWithPhotoSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a805e
- (void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a7e3f
- (id)avatarImageRenderer;	// IMP=0x00100000000a7dea
- (id)atvMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2;	// IMP=0x00100000000a7bc1
- (id)placeholderImageWithPhotoSize:(long long)arg1;	// IMP=0x00100000000a7aca
- (id)stringForMonogram;	// IMP=0x00100000000a76f3
- (id)photoURLForSize:(long long)arg1;	// IMP=0x00100000000a761d
- (void)showConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 block:(CDUnknownBlockType)arg4 cancelAction:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a72a0
- (void)showAlertWithTitle:(id)arg1 andMessage:(id)arg2;	// IMP=0x00100000000a7140
- (void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9950
- (void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9763
@end

