//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPassTile, PKPassTileGroupView, PKSecureElementPass;

@protocol PKPassTileGroupViewDelegate <NSObject>
- (void)passTileGroupView:(PKPassTileGroupView *)arg1 executeSEActionForPass:(PKSecureElementPass *)arg2 tile:(PKPassTile *)arg3 withCompletion:(void (^)(_Bool))arg4;
@end

